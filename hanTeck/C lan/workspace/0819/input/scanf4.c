#include <stdio.h>
/*
   ���ڿ� �Է�
   1) �迭 ���
       char �迭��[10];

   2) ������ ���
       char *������;
*/
void main()
{

	/*
	printf("���ĺ� �ѱ��� byte �� : %d����Ʈ\n", sizeof("a"));
	        //���ĺ�, Ư������, ���ڴ� 1����Ʈ�̴�.

	printf("�ѱ� �ѱ��� byte �� : %d����Ʈ\n", sizeof("��"));
	       //���ĺ����� ������ �����ڴ� 2����Ʈ�̴�

	printf("�ѱ� �α��� byte �� : %d����Ʈ\n", sizeof("����"));
	*/

	//1. �迭���
	//char name[20]={0}; // ={0} �迭 �ʱ�ȭ ���
	//char title[7];

	//printf("�̸� �Է�: "); scanf("%s", name);
   // printf("�̸� : %s\n", name);

	//printf("å ����: "); scanf("%s" , title);
	//printf("å ����: %s\n", title);


	//2. ������ ���

	//char *title;  �ʱ�ȭ�� �ȵǼ� ����� �ȵ�
	//char *btitle=NULL;
	char *btitle=0;

	printf("å ����: "); scanf("%s" , btitle); //�迭������� ��а� ���ڿ��� �Է¹���
	printf("å ����: %s\n", btitle);           // deep copy ������� ���ڿ��� �Է¹޾ƾ��Ѵ�.
	// Ű���忡�� �߻��� ���ڿ��� ��ġ���� btitle ������ ���� �� ����.

}