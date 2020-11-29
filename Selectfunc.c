#include <stdio.h>
#include "utils.h"
#include "func.h"

#pragma warning(disable:4996)



int SelectFunc(char* name) {
	//// 코드작성 //////
	int k;
	while ((k = SelectMenu()) != ESC) {

		switch (k) {
		case F1 :
			//코드작성//
			break;
		case F2 :
			//코드작성//
			break;
		case F3 :
			//코드작성//
			break;
		case F4:
			//코드작성//
			break;
		case F5:
			//코드작성//
			break;
		case F6:
			//코드작성//
			break;
		default: printf("잘못 선택하셨습니다.\n"); break;
		}
		printf("아무 키나 누르세요.\n");
		getkey();
	}

	return 0;
}