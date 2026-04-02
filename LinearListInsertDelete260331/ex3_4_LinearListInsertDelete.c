#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "listS.h"


int main(void)
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // --- 초기 배열 상태 출력 (list[0]~list[9]) ---
    int list[MAX] = { 10, 20, 40, 50, 60, 70 };
    int i, move, size = 6;

    printf("Start선형 리스트 원소 삽입과 삭제 연습\n");
    for (i = 0; i < MAX; i++)
        printf("list[%d]=%d\n", i, list[i]);

    // --- 삽입 전 출력 ---
    printf("\n삽입 전 선형 리스트 : ");
    for (i = 0; i < size; i++)
        printf("%3d ", list[i]);
    printf("\n원소의 갯수 : %d \n", size);

    // --- 30 삽입 ---
    move = insertElement(list, size, 30);

    printf("\n삽입 후 선형 리스트 : ");
    for (i = 0; i <= size; i++)
        printf("%3d ", list[i]);
    printf("\n원소의 갯수 : %d ", ++size);
    printf("\n자리 이동 횟수 : %d \n", move);

    // --- 30 삭제 ---
    printf("원소 30을 삭제전 size=%d\n", size);
    move = deleteElement(list, size, 30);

    if (move == size)
        printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다.\n");
    else {
        printf("\n삭제 후 선형 리스트 : ");
        for (i = 0; i < size - 1; i++)
            printf("%3d ", list[i]);
        printf("\n원소의 갯수 : %d ", --size);
        printf("\n자리 이동 횟수 : %d \n", move);
    }

    // --- 사용자 입력 받아서 삽입 ---
    int idx, val;
    printf("\n원하는 배열의 인덱스와 원소값을 입력하시오 : ");
    scanf("%d %d", &idx, &val);

    // insertAt 함수 사용 (인덱스 지정 삽입)
    move = insertAt(list, size, idx, val);

    printf("\n삽입 후 선형 리스트 : ");
    for (i = 0; i <= size; i++)
        printf("%3d ", list[i]);
    printf("\n원소의 갯수 : %d ", ++size);
    printf("\n자리 이동 횟수 : %d \n", move);

    return 0;
}









//#include <stdio.h>
//#include<windows.h>
//#include "listS.h"
//
//int main(void) 
//{
//	SetConsoleOutputCP(65001);//UTF-8,CP는 Code Page의 약자
//	SetConsoleCP(65001); // 입력도 필요하면 설정
//
//	typedef int INTEGER;
//	INTEGER a = 7; //int a = 7; 와 같은 코드
//	printf("a=%d\n", a);
//
//	int list[MAX] = { 10, 20, 40, 50, 60, 70 };
//	int i, move, size = 6;  //size는 리스트에 있는 원소의 개수
//	printf("\n삽입 전 선형 리스트 : ");
//	for (i = 0; i < size; i++) 
//		printf("%3d ", list[i]);
//	printf("\n원소의 갯수 : %d \n", size);
//
//	move = insertElement(list, size, 30);
//
//	printf("\n삽입 후 선형 리스트 : ");
//	for (i = 0; i <= size; i++) 
//		printf("%3d ", list[i]);
//	printf("\n원소의 갯수 : %d ", ++size);
//	printf("\n자리 이동 횟수 : %d \n", move);
//
//	printf("원소 30을 삭제전 size=%d\n", size);
//	move = deleteElement(list, size, 30);
//	//move = deleteElement(list, size, 70);
//	//move = deleteElement(list, size, 80);
//	if (move == size) 
//		printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다.\n");
//	else {
//		printf("\n삭제 후 선형 리스트 : ");
//		for (i = 0; i < size - 1; i++) 
//		//for (i = 0; i < size; i++)
//			printf("%3d ", list[i]);
//		printf("\n원소의 갯수 : %d ", --size);
//		printf("\n자리 이동 횟수 : %d \n", move);
//	}
//
//	//getchar();  
//	return 0;
//}