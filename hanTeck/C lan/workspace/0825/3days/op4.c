#include <stdio.h>
/*
	���� ���� : & | ^ && ||

	��Ʈ ���� ���� : & | ^ (��� ����)
	���� ���� ���� : && || (���� ����)

	�����  &&  �����
	  T			 F
	  1		*	 0  =  0(����)

	�����  ||  �����
	  T			 F
	  1     +    0  =  1(��)


*/
void main()
{
	//��Ʈ ���� ����
	printf(" 12 &(AND��) 6 : %d\n", 12&6); //12�� 6�� �������� Ǯ� ��
									// �� �ڸ����� * �������� ó��

	printf(" 12 |(OR��) 6 : %d\n", 12|6); //12�� 6�� �������� Ǯ� ��
									// �� �ڸ����� + �������� ó��
									//2�����̱� ������ 1+1�� ���� ��(�׷��� 1�� ���´�)

	printf(" 12 ^(XOR��Ÿ������) 6 : %d\n", 12^6); //12�� 6�� �������� Ǯ� ��
									// �� �ڸ����� not OR �������� ó��
									// �ڸ����� ������ ����0, �ٸ��� ��1


	// 0  0�� ���ϸ� ������ 0�̱⶧���� ���(������)�� ���Ѵ�.(������ �ӵ��� ������ �ϱ� ������)
	printf("&& ���� ��� ��: %d\n", 5<3 && 6>3);
	
	// 1 ����
	printf("|| ���� ��� ��: %d\n", 5<3 || 6>3);

}