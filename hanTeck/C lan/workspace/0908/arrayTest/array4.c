#include <stdio.h>
/*
	�迭�� ũ�� : �ش��Լ�����  sizeof(�迭)  ��byte���� �� �� �ִ�.

*/
void main()
{
	int ar[] ={4,6,3,5,6,4,5,7,5,6,7,4,5,8,76,5,8,6,5,7,9,8,8,7,6,54,3,5,6,2,3,4,5};
	int cnt = 0;

	//ar�� �� ����Ʈ¥�� �迭����???
	printf("ar�� ũ��>> sizeof(ar) : %dByte\n", sizeof(ar) );

	//���?   sizeof(ar) / 4  ���ٴ�   sizeof(ar) / sizeof(�ڷ���)   
	cnt = sizeof(ar) / sizeof(int) ; 
	printf("�迭�� ���� : %d��\n", cnt);


}

