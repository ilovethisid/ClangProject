#include <stdio.h>
#include "utils.h"
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)



int main (void) {
	int k = 0;
	char* name = malloc(sizeof(char) * 10);
	

	while ((k = SelectImg()) != ESC) {

		switch (k) {
		case F1 :
			strcpy(name, "sample1");
			SelectFunc(name);
			break;
		case F2 :
			strcpy(name, "sample2");
			SelectFunc(name);
			break;
		default:printf("잘못 선택하였습니다.\n"); break;
		}
		printf("아무 키나 누르세요.\n");
		getkey();
		}

	
	free(name);

	return 0;
}

