#include <iostream>
using namespace std;


class bank {
	int m_userCount; // 고객수
	int m_bankMoney; //은행잔고
public:

	//기본생성자
	bank() {
		m_userCount = 0;
		m_bankMoney = 0;
	}
	//은행생성
	

	//사용자 조회(은행용)
	
};
class person {
	char * pName;
	int money;
public:
	int account; //계좌
	//기본생성자
	person() {
		pName = NULL;
		money = 10000;
		account = 999;
	}
	//사용자 등록(원래 생성자였던애)
	void newUser(char *pName) {
		int nameLen = strlen(pName);	
		this->pName = new char[(nameLen + 1) * sizeof(char)];
		memset(this->pName, 0, (nameLen + 1) * sizeof(char));
		strcpy(this->pName, pName); account++;	money = 10000;
		cout << "계좌 생성되었습니다." << endl;
		cout << "사용자 이름 : " << this->pName << endl;
		cout << "계좌번호 : " << account << "\n 통장잔고 : " << money << endl;
	}
	//사용자 조회
	void showInfo() {
		cout << "사용자정보를 출력합니다" << endl;
		cout << "사용자이름: " << this->pName << endl;
		cout << "사용자계좌: " << this->account << endl;
		cout << "계좌잔액: " << this->money << endl;
	}	
	
	//입금
	void in() {
		int inMoney = 0;
		cout << pName << "사용자 입금!" << endl;
		cout << "얼마를 입금하시겠습니까?" << endl;
		cin >> inMoney;
		cout << inMoney << "원 입급합니다." << endl;
		money += inMoney;
		cout << pName << "사용자의 총계좌금액은 " << money << "원 입니다." << endl;
	}
	//출금
	void out() {
		int outMoney = 0;
		cout << pName << "사용자 출금!" << endl;
		cout << "얼마를 출금하시겠습니까?" << endl;
		cin >> outMoney;
		cout << outMoney << "원 출금합니다." << endl;
		money -= outMoney;
		cout << pName << "사용자의 총계좌금액은 " << money << "원 입니다." << endl;
	}

};
void bankWork() {

}
void userWork() {
	int choose = 0;
	int i = 1;
	int j = 0;
	char name[30];
	int userAcc = 0;
	person *pUser = new person[i];
	while (1) {
		cout << "1.사용자 등록\n2.사용자 정보 조회\n3.입금\n4.출금\n5.계좌이체" << endl;
		cout << "입력 : ";	cin >> choose;
		switch (choose) {
		case 1:	//사용자 등록
			cout << "사용자 이름 입력 : "; cin >> name;
			pUser[i - 1].newUser(name);	i++;
			break;
		case 2: //사용자 정보 조회
			cout << "계좌번호 입력 : "; cin >> userAcc;
			for (j = 0; userAcc != pUser[j].account; j++) cout << "계좌를 찾는중입니다." << endl;
			pUser[j].showInfo();   
			break;
		case 3://입금
			for (j = 0; userAcc != pUser[j].account; j++) cout << "계좌를 찾는중입니다." << endl;
			pUser[j].in();
			break;
		case 4://출금 
			for (j = 0; userAcc != pUser[j].account; j++) cout << "계좌를 찾는중입니다." << endl;
			pUser[j].out();
			break;
		case 5://계좌이체
			break;
		default:// 잘못된 선택지
			return;
		}
	}
}
void main() {
	int choose = 0;
	int j = 1;//은행 고객수
	cout << "~~~은행놀이~~~" << endl;
	while (1) {
		cout << "1.게임시작\n2.게임종료" << endl;
		cout << "입력 >> ";	cin >> choose;
		if (choose == 1) {
			cout << "KOREA 은행!!" << endl;
			cout << "1.관리자용	2.사용자용" << endl;
			cout << "입력 : ";	 cin >> choose;
			if (choose == 1) bankWork();
			else if (choose == 2) userWork();
		}
		else if (choose == 2) return;
		else {
			cout << "잘못 선택" << endl;
			break;
		}


	}

}