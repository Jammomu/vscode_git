#include <iostream>
using namespace std;

class bank{

	int account;
	char * pName;
	int money;
public:
	//�⺻������
	bank(){
		account = 0;
		pName =NULL;
		money = 10000;
	}

	//����ϱ�
	bank(char *pName){
		cout<<"�������� �Է��մϴ�"<<endl;
		int iNameLen = strlen(pName);
		this->pName = new char[(iNameLen+1)*sizeof(char)]; 
		memset(this->pName,0,(iNameLen+1)*sizeof(char) );
		strcpy(this->pName,pName); 
		account = 12512418;
		money = 10000;
		cout<<"���� ������ "<<money<<"���� �ڵ����� �Աݵ˴ϴ�."<<endl;
		cout<<pName<<"������ ���¹�ȣ��"<<account<<"�Դϴ�."<<endl;

	}
	//��������
	void showInfo(){
		cout<<"�������� ����մϴ�"<<endl;
		cout<<"���̸�: "<<this->pName<<endl;
		cout<<"������: "<<this->account<<endl;
		cout<<"�����ܾ�: "<<this->money<<endl;
	}
	//�Ա�
	void in(){
		int inMoney=0;
		cout<<"�󸶸� �Ա��Ͻðڽ��ϱ�?"<<endl;
		cin>>inMoney;
		cout<<inMoney<<"�� �Ա��մϴ�."<<endl;
		money+=inMoney;
		cout<<pName<<"������ �Ѱ��±ݾ��� "<<money<<"�� �Դϴ�."<<endl;
	}
	//���
	void out(){
		int outMoney=0;
		cout<<"�󸶸� ����Ͻðڽ��ϱ�?"<<endl;
		cin>>outMoney;
		cout<<outMoney<<"�� ����մϴ�."<<endl;
		money-=outMoney;
		cout<<pName<<"������ �Ѱ��±ݾ��� "<<money<<"�� �Դϴ�."<<endl;
	}
};


void main(){
	int choose = 0;
	int i = 0;
	int j = 0;
	int k =1;
	cout<<" [Korea ����]" <<endl;
	bank User[200];
	while(1){
		cout<<"1.�����\n2.�� ����\n3.�Ա�\n4.���\n5.����"<<endl;
		cin>>choose;
		switch(choose){
		case 1:
			char name[30];
			cout<<i+1<<"��° ��"<<endl;
			cin>>name;
			User[i] = bank(name);
			i++;
			break;
		case 2:
			cout<<"���° ��: ";
			cin>>k;
			j=k-1;
			User[j].showInfo();
			j=0;	k=0;
			break;
		case 3:
			cout<<"���° ��: ";
			cin>>k;
			j=k-1;
			User[j].in();
			j=0;	k=0;
			break;
		case 4:
			cout<<"���° ��: ";
			cin>>k;
			j=k-1;
			User[j].out();
			j=0;	k=0;
			break;
		case 5:
			cout<<"���α׷��� �����մϴ�"<<endl;
			return;
		default:
			cout<<"�߸��� �������Դϴ�"<<endl;
			break;
			
			

		}

	}

}