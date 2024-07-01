#include <iostream>
using namespace std;

//����ü�� public���� �������
//Ŭ������ private���� �������
class Person{//'���'�̶�� ������ Ŭ������ �����Ͽ�, ��ü�� ���� �ٷ�� �ʹ�!
	
	char * m_pName; //�̸��� ���̰� ������� �ٸ� �� �ִ�.(���� ��)
	int	   m_iAge;

public:
	Person() {
		//�ʱ�ȭ �ڵ�� �ʼ��̴�!!
		cout<<"Person() ������ ȣ��"<<endl;
		m_pName = NULL;
		m_iAge = 0;
	} //��ü�� �׳� ������� ����� �⺻������
	Person(char * pName,int iAge){
	
		cout<<"Person(char * pName,int iAge)������ ȣ��"<<endl;
		//(1) �����ϰ� ���� ���ڿ��� ���̸� ���Ѵ�.
		int iNameLen = strlen(pName); //length
		//(2) ���̸�ŭ ������ �Ҵ�
		m_pName = new char[(iNameLen+1)*sizeof(char)]; 
		//(3) m_pName �����Ͱ� ������ �ּ� �� (new�� �Ҵ��� ������ ���� �ּ�)
		memset(m_pName,0,(iNameLen+1)*sizeof(char) );
		//(4) �������� ����(m_pName)�� ���޵� ���ڿ�(pName)�� ����
		strcpy(this->m_pName,pName);
		m_iAge = iAge;
	}
	~Person(){
		cout<<"~Person() �Ҹ��� ȣ��!!"<<endl;
		if(m_pName != NULL){
			cout<<"�������� ��ü�� "<<m_pName<<endl;
			delete [] m_pName; 
			
		}
	}	
	void showInfo(){
		cout << "[���� ���]" << endl;
		if( m_pName == NULL )
		{
			cout << "������ �����ϴ�." << endl;
			return; 
		}

		cout << "�̸� : " << m_pName << "��" << endl;
		cout << "���� : " << m_iAge << "��" << endl;
	}
	
};

void main(){

	//cout<<"step-1"<<endl;
	
	//Person han("������",23); //�����Ҵ� (new�� ��� ����) --> main() ������ �ڵ� �Ҹ�
	//Person *lee = new Person("�̼ҷ�",304);//�����Ҵ� (delete�ؾ� �Ҹ��)
	//delete lee; // �迭(���� ��)�� �ƴϱ� ������ [] ������ �ʴ´�.
	
	cout <<"step-2"<<endl;

	//[��ü�迭 ��������] --> new Person[����]
	int count = 0;
	cout<<"������ ��ü ���� �Է� : ";
	cin>>count;
	Person * pAr = new Person[count]; //��������
	//���� ���� : Person Arr[2]; �̷� ���¿���
	// �������� �ϴ� ����? Person Arr[count]; ó�� ������ ������� ����!!!

	delete [] pAr;

	cout<<"step-3"<<endl;

	Person * pArr2[3]; //��ü �迭 �ƴ�!
	//�׳� ������ �����ϻ��̴�. 
	//�����ͺ����� ����Ű�´� ����� ������!!(����Ű�� ���� ����)

	cout<<"step-4"<<endl;

	//�� ������ ������ ������ ��ü�� ���� ���������Ѵ�.
	pArr2[0] = new Person("rhaks",123);
	pArr2[1] = new Person("raks",23);
	pArr2[2] = new Person("rhks",12);

	for(int i = 0;i<3;i++){
		pArr2[i]->showInfo();
		delete pArr2[i];
	}

	cout<<"step-5"<<endl;
}