#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include<stdio.h>
int main()
{
	int a, b, c;
	for (a = 1; a < 5; a++) {
		for (b = 1; b < 5; b++) {
			for (c = 1; c < 5; c++) {
				if(a != b && b != c && c != a) {
					printf("%d,%d,%d\n", a, b, c);
				}
			}
		}
	}
	  
	return 0;
}