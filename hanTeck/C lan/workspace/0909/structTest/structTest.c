#include <stdio.h>
/*
	����ü ( structure : ������ )
	- ���� "�ڷ���" �� ���� �����!
	- ������ �⺻�� ����  ���� ���� �ڷ������� ������ ���� �� �ִ�.

	�� �л��� ������  ��, ��, ��  --> int���̳� �迭��!!!
	�׷���,
		�� �л��� ������,  �̸�, �ּ�, ����ó, ��, ��, ��
		�� ������ ����⿡�� ������ ������ �� �� �Ŵ�!!!
		-> �ϳ��� �׷� {} �� ��� "�ڷ���"�� ��������!!!
		���� ���� �ܾ �ڷ����� �ȴ�.
		�� �ڷ������� ������ ����� ���� ���� �ϳ���
		�������� ������ ������ �� �ִ�.
	
	- ����ü ������
		����ü ����.������� = ������;

*/
//����ü ����� - ���� ����� "�ڷ���"  <== �����Ϸ����� �Ű�(�˷���� �Ѵ�)
struct ReportCard //<--��������_�ڷ���  : int, char, float, double + "ReportCard��� �ż� �ڷ���"
{
	
	//�� �ڷ����� �����ϱ� ���� ������� ����(����)
	char name[10];
	int kSc;
	int eSc, mSc;		//<--- �̷� �������� ���������!!!

	

};

struct ReportCard inputScore(struct ReportCard person);

int calcScore(struct ReportCard person);

void printScore(struct ReportCard person);




void main()
{	
	//ö��, ����, �μ�
	struct ReportCard cs={"ö��", 70, 80, 90};	//����ü�� �ʱ�ȭ!!!
	struct ReportCard yh={0}, ms={"�μ�"};		//������ ������ ���� �Է���
												//�μ��� �̸��� ����߰� ���� ��!!!

	//ö�� ������ ���
	printf("�̸� : %s\t���� : %d\t���� : %d\t���� : %d\n",
			cs.name, cs.kSc, cs.eSc, cs.mSc);
	//����� �Է�
	printf("�̸� �Է� : ");
	//	scanf("%s", &cs.name);     cs���� name�� ȣ���ߴ���, name�� �迭�̴���!!!
	//								�׷��� �迭 �տ��� &�� ���̴°� �ƴϴ�.
	scanf("%s", yh.name);
	printf("���� ���� ���� ������� �� �Է� : ");
	scanf("%d%d%d", &yh.kSc, &yh.eSc, &yh.mSc);

	//hap = yh.kSc + yh.eSc + yh.mSc;

	//�μ��� �Լ��� ������!!!
	ms = inputScore(ms);
	calcScore(ms);
	printScore(ms);
}

struct ReportCard inputScore(struct ReportCard person)
{
	puts("---�Է� �Լ�---");
	printf("�л��� �̸��� �Է��ϼ��� : "); 
	scanf("%s", person.name);
	printf("�������� : "); scanf("%d", &person.kSc);
	printf("�������� : "); scanf("%d", &person.eSc);
	printf("�������� : "); scanf("%d", &person.mSc);
	puts("---�Է� ����---");
	return person;
}
int calcScore(struct ReportCard person)
{
	return person.eSc+person.mSc+person.kSc;
}
void printScore(struct ReportCard person)
{
	puts("*** ��� ***");
	puts("�̸�\t����\t����\t����\t����\t���");
	printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", 
		person.name, person.kSc, person.eSc, person.mSc,
		calcScore(person)   , calcScore(person)/3.0);
		
}

