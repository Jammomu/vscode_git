#include <stdio.h>
#include <string.h>
/*
	 typedef  �����ܾ�  �ٲܴܾ�;
*/
/*struct ReportStudentCard
{

};
//typedef struct ReportStudentCard ��  Card ��;
typedef struct ReportStudentCard  Card;
*/
typedef struct ReportCard
{
	char name[20];
	int kor;
	int eng;
	int math;

} Card ;		//���� ������ �̸��� Card��� �ҷ��� �ڴ�.
void inputCard(Card *pM)
{
	//man���� ��->main���� ���� �ȵ�
	//�ּҰ��� �޾Ƽ� ó������!!!
	//pM ���� &kcs�� ����ִ�
	//1. pM�� ������ ������ ->  *pM
	//2. �׷��� ���� ����(*pM)���� ����� �ҷ����� -> *pM�� ��!!!
	//				*pM.�������
	//3. �ٵ� ����!!! ��?   ������ �켱 ����
	//				(*pM). �Ұ�ȣ�� ����� ��������� �θ� �� �ִ�.
	//4. �迭����  (* + ) ��  [] �� �����߾���.
	//5. ����ü������   (*����ü �ּ�).  ��  "->" ȭ��ǥ �����ڷ� 
	//		ġȯ �� �� �ִ�.
	//6.  ����ü�ּ�->�������   �� ���·� ����

	printf("�̸� �Է� : "); scanf("%s", pM->name); //pM �ּҰ� ����Ű�� �ִ�~   ���ڿ�(�迭)�տ��� & �Ⱥ��̱�!!!
	printf("���� �Է� : "); scanf("%d", &pM->kor); //kor�� ��ġ�� �־�!!  �Ϲ� ������ �����״�. &�� ������!
	printf("���� �Է� : "); scanf("%d", &pM->eng); 
	printf("���� �Է� : "); scanf("%d", &pM->math); 
}
void printCard(Card man)
{
	printf("*** ��� ***\n");
	printf("�̸� : %s\n", man.name);
	printf("���� : %d\n", man.kor);
	printf("���� : %d\n", man.eng);
	printf("���� : %d\n", man.math);
}
void main()
{
	Card kcs = {0};
	inputCard(&kcs);
	printCard(kcs);
}







