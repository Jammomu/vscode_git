#include <stdio.h>
/*





*/
void main()
{
	//�Է¹��� num�� ���� 0���� ������ num�� �ι踦 �ϰ�
	// 0���� ũ�� num�� ���� �� ��!
	//if�� �̿�
	int num = 0;

	printf("���� �Է�: "); 
	scanf("%d", &num);

	if(num<0)
	{
		num *= 2;
	}
	else if(num>0)
	{
		num *= num;
	}
	printf("�����: %d\n" , num);
}