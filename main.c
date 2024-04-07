#include "Header.h"

int main() {
	int num, m;             //책 페이지인 num 과 반복횟수인 m 선언
	scanf("%d", &m);        //반복횟수 m 입력받기

	for (int i = 0; i < m; i++) {         //m만큼 반복실행
		scanf("%d", &num);				 //책페이지 입력받기
		int arr[10] = { 0, };            //배열 초기화
		cal(num, arr);					//cal함수 실행
		printans(arr);                  //printans함수 실행
	}

}