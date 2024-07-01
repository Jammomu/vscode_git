#include <iostream>
using namespace std;

class bank{

	int account;
	char * pName;
	int money;
public:
	//기본생성자
	bank(){
		account = 0;
		pName =NULL;
		money = 10000;
	}

	//등록하기
	bank(char *pName){
		cout<<"고객정보를 입력합니다"<<endl;
		int iNameLen = strlen(pName);
		this->pName = new char[(iNameLen+1)*sizeof(char)]; 
		memset(this->pName,0,(iNameLen+1)*sizeof(char) );
		strcpy(this->pName,pName); 
		account = 12512418;
		money = 10000;
		cout<<"계좌 생성시 "<<money<<"원이 자동으로 입금됩니다."<<endl;
		cout<<pName<<"고객님의 계좌번호는"<<account<<"입니다."<<endl;

	}
	//정보보기
	void showInfo(){
		cout<<"고객정보를 출력합니다"<<endl;
		cout<<"고객이름: "<<this->pName<<endl;
		cout<<"고객계좌: "<<this->account<<endl;
		cout<<"계좌잔액: "<<this->money<<endl;
	}
	//입금
	void in(){
		int inMoney=0;
		cout<<"얼마를 입금하시겠습니까?"<<endl;
		cin>>inMoney;
		cout<<inMoney<<"원 입급합니다."<<endl;
		money+=inMoney;
		cout<<pName<<"고객님의 총계좌금액은 "<<money<<"원 입니다."<<endl;
	}
	//출금
	void out(){
		int outMoney=0;
		cout<<"얼마를 출금하시겠습니까?"<<endl;
		cin>>outMoney;
		cout<<outMoney<<"원 출금합니다."<<endl;
		money-=outMoney;
		cout<<pName<<"고객님의 총계좌금액은 "<<money<<"원 입니다."<<endl;
	}
};


void main(){
	int choose = 0;
	int i = 0;
	int j = 0;
	int k =1;
	cout<<" [Korea 은행]" <<endl;
	bank User[200];
	while(1){
		cout<<"1.고객등록\n2.고객 정보\n3.입금\n4.출금\n5.종료"<<endl;
		cin>>choose;
		switch(choose){
		case 1:
			char name[30];
			cout<<i+1<<"번째 고객"<<endl;
			cin>>name;
			User[i] = bank(name);
			i++;
			break;
		case 2:
			cout<<"몇번째 고객: ";
			cin>>k;
			j=k-1;
			User[j].showInfo();
			j=0;	k=0;
			break;
		case 3:
			cout<<"몇번째 고객: ";
			cin>>k;
			j=k-1;
			User[j].in();
			j=0;	k=0;
			break;
		case 4:
			cout<<"몇번째 고객: ";
			cin>>k;
			j=k-1;
			User[j].out();
			j=0;	k=0;
			break;
		case 5:
			cout<<"프로그램을 종료합니다"<<endl;
			return;
		default:
			cout<<"잘못된 선택지입니다"<<endl;
			break;
			
			

		}

	}

}