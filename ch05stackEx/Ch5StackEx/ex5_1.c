#include <stdio.h>
#include <windows.h>
#include "stackS.h"

int main(void) 
{
	SetConsoleOutputCP(65001);	//UTF-8,CP는 Code Page의 약자
	SetConsoleCP(65001); 		// 입력도 필요하면 설정

	element item;
	printf("\n** 순차 스택 연산 **\n");
	printStack();
	push(1);	printStack();		// 1 삽입
	push(2);  printStack();			// 2 삽입
	push(3);	printStack();		// 3 삽입

	item = peek();  printStack();	// 현재 top의 원소 출력
	printf("peek => %d", item);

	item = pop();  printStack();	// 삭제
	printf("\t pop  => %d", item);

	item = pop();  printStack();	// 삭제
	printf("\t pop  => %d", item);

	item = pop();  printStack();	// 삭제
	printf("\t pop  => %d\n", item);

	//getchar();  
	return 0;
}
