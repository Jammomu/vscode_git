#include <iostream>
using namespace std;


class bank {
	person m_user;
	int m_userCount;
	int bankMoney;
public:
	char *pBankName;
	//기본생성자
	bank() { };
	bank(person user): m_user(user) {}
	//은행생성
	bank(person user, char *pName):m_user(user) {
		int iNameLen = strlen(pName);
		pBankName = new char[(iNameLen + 1) * sizeof(char)];
		memset(pName, 0, (iNameLen + 1) * sizeof(char));
		strcpy(pBankName, pName);
		bankMoney = 100000;
	}
	//사용자 등록
	void userReg(char *pName) {
		int acc = 1000;
		int iNameLen = strlen(pName);
		m_user.pName = new char[(iNameLen + 1) * sizeof(char)];
		memset(pName, 0, (iNameLen + 1) * sizeof(char));
		strcpy(m_user.pName, pName);
		m_user.account = acc;	acc++;
		m_user.money = 10000;	m_userCount++;
		cout << "계좌 생성시 " << m_user.money << "원이 자동으로 입금됩니다." << endl;
		cout << pName << "사용자님의 계좌번호는" << m_user.account << "입니다." << endl;
	}
	//사용자 조회(은행용)
	void showBankInfo() {
		cout << "-----------<<은행정보>>-----------" << endl;
		cout << "은행이름 : " << pBankName << endl;
		cout << "사용자 수 : " << m_userCount << endl;
		cout << "은행 잔고 : " << bankMoney << endl;
	}
	
};
class person {
	char * pName;
	int money;
	int account;
	friend bank;
public:

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
void bankWork(int choose) {

}
void userWork(int choose) {
	switch (choose) {
	case 1: //사용자 정보 조회
		break;
	case 2://입금
		break;
	case 3://출금
		break;
	case 4://계좌이체
		break;
	default:// 잘못된 선택지
		break;
	}
}
void main() {
	int choose = 0;
	char name[30];
	int i = 0;/*은행개수*/ int j = 0;//은행 고객수
	bank Bank[3];
	person user[30];
	cout << "~~~은행놀이~~~" << endl;
	while (1) {
		cout << "1.은행만들기\n2.시작\n3.게임종료" << endl;
		cout << "입력 >> ";	cin >> choose;
		if (choose == 1) {
			cout << "은행명 입력 : ";	cin >> name;
			Bank[i] = bank(user[0],name);	i++;
		}else if(choose == 2){
			cout << "은행선택 : 1." << Bank[0].pBankName << "\n2." 
				<< Bank[1].pBankName << "\n3." << Bank[2].pBankName << endl;
			cout << "입력 >> ";	cin >> choose;
			switch (choose) {
			case 1: //Bank[0]
				cout << Bank[0].pBankName << endl;
				cout << "1.직원용\n2.고객용" << endl;
				cin >> choose;
				if (choose == 1) bankWork(choose);
				else if(choose == 2) userWork(choose);
				break;
			case 2://Bank[1]
				if (choose == 1) bankWork(choose);
				else if (choose == 2) userWork(choose);
				break;
			case 3://Bank[2]
				if (choose == 1) bankWork(choose);
				else if (choose == 2) userWork(choose);
				break;
			default:// 잘못된 선택지
				break;
			}
		}
		else if (choose == 3) return;
		else {
			cout << "잘못 선택" << endl;
			break;
		}
		

	}
	
}