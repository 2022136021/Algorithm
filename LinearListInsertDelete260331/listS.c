#include "listS.h"

int insertElement(int list[], int size, int value)
{
    int i, move = 0;

    for (i = size - 1; i >= 0 && list[i] > value; i--) {
        list[i + 1] = list[i];
        move++;
    }
    list[i + 1] = value;
    return move;
}

int deleteElement(int list[], int size, int value)
{
    int i, j, move = 0;

    if (size == 0)
        return size;

    for (i = 0; i < size; i++) {
        if (list[i] == value) {
            for (j = i; j < size - 1; j++) {
                list[j] = list[j + 1];
                move++;
            }
            return move;
        }
    }
    return size;
}

int insertAt(int list[], int size, int idx, int value)
{
    int i, move = 0;

    for (i = size; i > idx; i--) {
        list[i] = list[i - 1];
        move++;
    }
    list[idx] = value;
    return move;
}





//#include "listS.h"
//
//int insertElement(int L[], int n, int x) {
//	int i, k = 0, move = 0;  //move는 자리이동 횟수 카운터
//	//원소의 크기를 비교하여 삽입 위치 k 찾기
//	for (i = 0; i < n; i++) {
//		if (L[i] <= x && x <= L[i + 1]) {
//			k = i + 1;
//			break;
//		}
//	}
//	if (i == n) //삽입 원소가 가장 큰 원소인 경우
//		k = n;
//
//	// 마지막 원소부터 k+1원소까지 뒤로 자리이동
//	for (i = n; i > k; i--) {
//		L[i] = L[i - 1];
//		move++;
//	}
//
//	L[k] = x;	//자리 이동하여 만든 자리 k에 삽입 원소 저장 
//	return move;
//}
//
//int deleteElement(int L[], int n, int x) {
//	int i, k = n, move = 0;  //move는 자리이동 횟수 카운터
//	//원소의 크기를 비교하여 삭제 위치 k 찾기
//	for (i = 0; i < n; i++) {
//		if (L[i] == x) {
//			k = i;
//			break;
//		}
//	}
//
//	if (i == n) 
//		move = n;
//
//	// k+1 부터 마지막 원소까지 앞으로 자리이동
//	for (i = k; i < n - 1; i++) {
//		L[i] = L[i + 1];
//		move++;
//	}
//	
//	//L[i] = 0; //배열의 맨 마지막 원소는 0으로 채운다.
//
//	return move;
//}