#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#pragma warning(disable:4996)

int ppm_fread (char* name, image *img) {

    FILE *fp;
    int i, j;
	
    fp = fopen(name, "rb");
    if (fp == NULL) {
        fprintf(stderr, "open error: %s\n", name);
        return -1;
    }

	fscanf (fp, "%c%c\n", &(img->M), &img->N);
    if (!(img->M == 'P' && img->N == '6')) {
        fprintf(stderr, "Not an ppm image: %s\n", name);
        return -1;
    }

    // Read metadata of image file
    fscanf(fp, "%d %d\n", &img->w, &img->h);
    fscanf(fp, "%d\n", &img->max);

	/// Dynamic memory allocation ////////////
	img->img = (cell**)malloc(sizeof(cell*) * img->h);
	for (i = 0; i < img->h; i++)
		img->img[i] = (cell*)malloc(sizeof(cell) * img->w);


	// Save image information from file
	for(i=0; i<img->h; i++)
		for(j=0; j<img->w; j++)
			fscanf(fp, "%c%c%c", &img->img[i][j].r, &img->img[i][j].g, &img->img[i][j].b);

    fclose(fp);
   
    return 0;
}

int ppm_fwrite (char* name, image* img) {

	FILE* fp;
	int i,j;

	fp = fopen(name, "wb");
	
	fprintf(fp, "%c%c\n", img->M, img->N);
	fprintf(fp, "%d %d\n", img->w, img->h);
	fprintf(fp, "%d\n", img->max);

	for (i=0; i<img->h; i++)
		for (j=0; j<img->w; j++)
			fprintf(fp, "%c%c%c", img->img[i][j].r, img->img[i][j].g, img->img[i][j].b);

	fclose(fp);

    return 0;
}


int getkey()///////////
{
	int key = 0;
	key = getch();
	if (key == 27)
	{
		return ESC;
	}

	if (key == 0)
	{
		key = getch();
		switch (key)
		{
		case 59: return F1;
		case 60: return F2;
		case 61: return F3;
		case 62: return F4;
		case 63: return F5;
		case 64: return F6;
		case 65: return F7;
		case 66: return F8;
		}
	}
	return NO_DEFINED;
}

void clrscr()
{
	system("cls");
}

int SelectMenu() {///////////

	clrscr();

	printf("F1: Flip        F2: Shifting          F3: Gray scale\n");
	printf("F4: Rotation    F5: Blurring          F6: Sharpening\n");
	printf("ESC: 이미지 선택으로 돌아가기\n");
	printf("\n");
	return getkey();
}

int SelectImg() {

	clrscr();

	printf("이미지 선택\n");
	printf("F1 : sample1.ppm   F2 : sample2.ppm\n");
	printf("ESC: 프로그램 종료\n");
	printf("\n");
	return getkey();
}
