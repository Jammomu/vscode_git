#include <stdio.h>

/*

 �������� �ڷ��� �Է¹ޱ�
 double �� �Ǽ� -> %1f
 float  �� �Ǽ� -> %f

 char �� ���� -> %c
 ���ڿ�       -> %s


 scanf("%lf", &�Ǽ�����);  1: long�� ���� �� float : double�� ��¡�Ѵ�.
 scnaf("%f", &�Ǽ�����);
 scanf("%c", &���ں���);
 scanf("%s" ���ڿ�����); ????
 */

void main()
{
	double a=0.0;
	float b=0.0f;
	//���ڸ� �ʱ�ȭ �ҋ��� '\0' �� ����.(' ' ���鹮�ڷε� �ʱ�ȭ�� �����ϴ�)
	// \0 �� ���� NULL
	char c=' ';

	printf("����:");scanf("%lf", &a);
	printf("�Ǽ�:");scanf("%f", &b); 
	scanf("%c", &c);
	printf("����:");scanf("%c", &c); // ���ٿ� ���Ͱ� ó���������
									// �ѹ��� �Է¹����� ����!!(�ѹ��� �Է¹��忡 2�����°� ǥ�ع��) 
	                                // ��ǥ�� ��� fflush(stdin) ����ũ�μ���Ʈ ������ �迭�� ����.
	printf("double: %lf \nfloat: %f \nchar: %c", a, b, c);

	puts("============"); // ����ϱ� put: ��Ÿ����, s: string��
						 // put() ���ڿ��� ����ϴ� ���ڿ� ���� ��� �Լ�

}