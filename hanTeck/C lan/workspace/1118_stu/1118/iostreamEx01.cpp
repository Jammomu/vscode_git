#include<stdio.h> //printf, scanf
#include<iostream> //cout, cin
using namespace std; // std:: �� �����Ҽ� �ִ� ����
void main(){
	int i = 10;
	char c = 'A'; //���� 65 ����(�ƽ�Ű�ڵ�)
	double d = 3.14;
	char str[] = "Hello~!"; //8byte (������ '\0' ����)

	printf("���� : %d, ���� : %c, �Ǽ� : %f, ���ڿ� : %s\n"
			,i,c,d,str);

	//cout
	// ����� ���� ��~~ �����ϴ� ���� �������°�(���)
	std::cout << "���� : "<<i<<", ���� : "<<c<<", �Ǽ� : "<<d<<",���ڿ� : " 
		<<str<<endl;

	//����� ���� (1)
	char szName[20] = {0, };
	printf("�̸��Է�1: ");
	scanf("%s",szName);

	printf("%s�� �ȳ��ϼ���!!\n",szName);

	cout << "�̸��Է�2: ";
	cin >> szName;
	cout << szName <<"�� �ȳ��ϼ���!!\n"<<endl;

	//����� ���� (2)
	int num1 = 0,num2=0,num3=0;

	cout <<"���� 3�� �Է�: ";
	cin >>num1>>num2>>num3;
	cout <<"�հ� : " <<(num1+num2+num3)<<endl;

}