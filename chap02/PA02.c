/*
* ���ϸ�: PA02.c
* ����: �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷� �ۼ��ϱ�
*		��ȣ-������, ����-�Ǽ� �� �Է¹���.
* �ۼ���: ������
* ��¥: 2025-07-04 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void student();

int main(void)
{
	student();
	return 0;
}

void student()
{
	int num = 0;
	float grade = 0;

	printf("��ȣ? ");
	scanf("%d", &num);

	printf("����? ");
	scanf("%f", &grade);

	printf("%d �� �л��� ������ %f �Դϴ�.", num, grade);

}