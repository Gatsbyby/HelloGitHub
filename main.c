#include "Header.h"

int main() {
	int num, m;             //å �������� num �� �ݺ�Ƚ���� m ����
	scanf("%d", &m);        //�ݺ�Ƚ�� m �Է¹ޱ�

	for (int i = 0; i < m; i++) {         //m��ŭ �ݺ�����
		scanf("%d", &num);				 //å������ �Է¹ޱ�
		int arr[10] = { 0, };            //�迭 �ʱ�ȭ
		cal(num, arr);					//cal�Լ� ����
		printans(arr);                  //printans�Լ� ����
	}

}