#include <stdio.h>
/*
   �л��̸� ���� ���� ���� �Է¹��� ��
   ���� ��� ���ϱ�!

*/



void main()
{
	char name[20];
	int kor=0, eng=0, math=0;
	int tot=0;
	double avg=0.0; // ����� �Ҽ��� ���ڸ����� ���ض� (����ȯ �̿�)


	//�Է�
	printf("�л������� �������\n\n\n");
	printf("�л��̸���?"); scanf("%s", name);
	printf("����������?"); scanf("%d", &kor);
	printf("����������?"); scanf("%d", &eng);
	printf("����������?"); scanf("%d", &math);


	



	//ó��

	tot = kor + eng + math;
	avg = tot / ((double)3) ;
	// ����ȯ      ����/���� -> ����� ����!!!
    //            ����/�Ǽ� -> ����� ���
	//            ��) 10/3 -> 3   10/3.0 -> 3.333333
	//            
	//
	//���
	printf("\n%s�л��� ������ �������\n\n", name);
	
	printf("��������: %d\n", kor);
	printf("��������: %d\n", eng);
	printf("��������: %d\n", math);
	printf("����: %d      ���: %0.1lf\n", tot, avg);

}