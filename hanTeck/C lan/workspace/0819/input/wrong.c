#include <stdio.h>

// ���� ��Ʈ
/*
�л��̸� ���� ���� ���� �Է¹��� ��
���� ��� ���ϱ�!

*/



void main()
{
	char name[20];
	int kor = 0, eng = 0, math = 0;
	int tot = 0;
	double avg = 0.0; // ����� �Ҽ��� ���ڸ����� ���ض� (����ȯ �̿�)


					  //�Է�
	printf("������ �������\n\n\n");
	printf("�л��̸���?"); scanf("%s", name);
	printf("����������?"); scanf("%d", &kor);
	printf("����������?"); scanf("%d", &eng);
	printf("����������?"); scanf("%d", &math);






	//ó��

	tot = kor + eng + math;
	avg = tot / ((double)3);
	// ����ȯ      ����/���� -> ����� ����!!!
	//            ����/�Ǽ� -> ����� ���
	//            ��) 10/3 -> 3   10/3.0 -> 3.333333
	//            
	//
	//���
	printf("\n%s�� ������ �������\n\n", name);
	// '&' �� �ּҰ��� �ҷ����°��̹Ƿ� scanf �� ���̴� ������ ���ζ� printf �� �������� ����!!
	printf("��������: %d\n", &kor/*��:kor*/);
	printf("��������: %d\n", &eng/*��:eng*/);
	printf("��������: %d\n", &math/*��:math*/);
	printf("����: %d      ���: %0.1lf\n", &tot/*��:tot*/, &avg/*��:avg*/);

}