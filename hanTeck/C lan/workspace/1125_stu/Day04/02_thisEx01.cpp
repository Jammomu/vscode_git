#include <iostream>
using namespace std;

//this ������
// > �� �ɹ��� ����ϴ� ������(������ ã�´�)
//c++���� this->(������)
// '->'�� ����ϴ� ������ this�� '������'�̱� ������ �����!!
//�ڹٿ��� this.(������)
class person{//c++���� Ŭ������ �⺻������ private���� ���������.
	
	int age; //private

public://�����ڴ� �⺻������ public���� �����.
	   // �ʿ� �� private���� ����, �ܺο��� ��ü�� ������� �������� ���ϰ� ���⵵ �Ѵ�.
	person(){ }
	person(int age){ 
		this->age=age;
	}
	
	void privateInfo(){
		cout<<"���̴� "<<this->age<<"�� �Դϴ�"<<endl;
	}

};


void main(){

	person a; 
	person b(20);
	b.privateInfo();
}