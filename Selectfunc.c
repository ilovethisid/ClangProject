#include <stdio.h>
#include "utils.h"
#include "func.h"

#pragma warning(disable:4996)



int SelectFunc(char* name) {
	//// �ڵ��ۼ� //////
	int k;
	while ((k = SelectMenu()) != ESC) {

		switch (k) {
		case F1 :
			//�ڵ��ۼ�//
			break;
		case F2 :
			//�ڵ��ۼ�//
			break;
		case F3 :
			//�ڵ��ۼ�//
			break;
		case F4:
			//�ڵ��ۼ�//
			break;
		case F5:
			//�ڵ��ۼ�//
			break;
		case F6:
			//�ڵ��ۼ�//
			break;
		default: printf("�߸� �����ϼ̽��ϴ�.\n"); break;
		}
		printf("�ƹ� Ű�� ��������.\n");
		getkey();
	}

	return 0;
}