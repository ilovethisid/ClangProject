#include <stdio.h>
#include "func.h"
#include <math.h>





image* flip (image* o_img, image* t_img){
	int i, j;

	int h = o_img->h;
	int w = o_img->w;


	for (i = 0; i < h; i++) {
		for (j = 0; j < w / 2; j++) {

			t_img->img[i][j] = o_img->img[i][w - 1 - j];
			t_img->img[i][w - 1 - j] = o_img->img[i][j];
		}
	}

	return t_img;
}


image* shift(image* o_img, image* t_img, int x, int y) {
	//// �ڵ��ۼ� //////
}


image* gray(image* o_img, image* t_img) {
	//// �ڵ��ۼ� //////
}


image* rota(image* o_img, image* t_img, double ang) {
	//// �ڵ��ۼ� //////
}

image* sharp(image* o_img, image* t_img) {
	//// �ڵ��ۼ� //////
}

image* blur(image* o_img, image* t_img) {
	//// �ڵ��ۼ� //////
}