#include <stdio.h>
#include <string.h>	//���ڿ� �Լ� strcpy(���ڿ���ġ, "���� ����");

struct Student
{
	char name[20];
	int kor;
	int eng;
	int math;
};


void main()
{
	//strcpy(����ü����.name, "��ö��");  
	//name�迭���� ���Կ����� ���Ұ�
	//    �迭�� �����    �迭 = "�ȳ�"  ����!!!
	//    ���� string�� copy �ϴ� �Լ�  strcpy() �� �̿��ؼ�
	//	  ���ڿ��� �Է��Ѵ�.
	struct Student kcs={0};  //����ü�� �ʱ�ȭ
	//kcs.name = "��ö��";  //name�� ������ ���==�迭 �̴�.
						 //���� ���� ���� ��� �Ұ�!!!
	
	strcpy(kcs.name, "��ö��");  //���ڿ� �Է½� strcpy�� �������!!!
	kcs.kor=10;
	kcs.eng=20;
	kcs.math=30;
}