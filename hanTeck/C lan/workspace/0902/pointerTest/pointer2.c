#include <stdio.h>
/*
	������ ���� ����
	1. �ٸ� �Լ����� �����͸� �� �� �ִ�.(�Լ��� ������ ���� ����)
	2. ���� �޸� �Ҵ��� ���ؼ� ���� �迭�� ���� ���ִ�.

	������ ���� �����
	1. &�� ���ؼ� �ּҸ� �Ź� ���� �� ����(�ӵ� ����,�б� ����)
	2. �׷��� ������ �ּҸ� �����Ҽ� �ִ� ���뺯���� �����ؼ� ����.
	3. �̸� ������ ������� �Ѵ�. (������ ������ �ּ�, �� �����͸� �����ϴ� �Լ�
	4. �����Ģ

		Ÿ�� *���� = �ּ�;
		int *pVal = 0;
		int *pData = NULL;
		double *pAvg = 0;  //�����ʹ� ���� ���̴�. double���̶�� ��������!!!
						   //�ּҸ� ���´�.
		char *pCh = NULL;  //NULL�� �������� �ʱⰪ�� ��¡�ϴ� �ܾ��̴�. 0���� �ص� �ȴ�!

		�����ͺ����� ������ ���� ������ �ּҰ��� ��� ���� ������.
		���� ���������� �������� ������ �����ͺ����� ���� �ʿ����.
		������ ���� ���µ�, ���������� �ʿ����!!!

*/


int changeVal(int myAge)
{
	return myAge=20;
}


/*
void main()
{
	int myAge = -3;
	//�����(������ ����) = &myAge;
	
	int *pAge = &myAge;
	int* p, a, c; //p�� ������ ����, a, c�� ������ ����
	//int *p, *pA, *pC

	myAge=changeVal(myAge);
	printf("%d\n",myAge);
}*/
//void changeValPtr(����!! == ������)
void changeValPtr(int *pNai)
{
	// pNai���� Ű���� ����ִ�  �� Ű(key)�� �ٷ� age�� �ּ��̴�.
	// pNai�� * ������ ���̸� ������ ����� �ִ�.
	// *pNai ��, age�� �ȴ�.
	*pNai = 23;
	//pAge �� age �� �ּҰ� -> pNai�� pAge ���� ���� -> *pNai(pNai��� ������ �ִ� �ּҰ�)�� 23 �����Ͱ��� �Է� -> *pNai�� age�� ������
}
void main()
{
	int age = -1;
	int *pAge = &age;

	changeValPtr(pAge); //�Լ�(�ּ�? ������?);

	printf("age: %d\n",age); // *pNai = 23 �� ���ؼ� age�� ���� 23���� ����� ���� �� �� �ִ�.
							 // ���� return�� ��Ű�� �� �����ϴ� ������ ���� �ʾƵ� �ȴ�


}