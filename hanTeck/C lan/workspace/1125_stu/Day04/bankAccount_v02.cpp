#include <iostream>
using namespace std;

int a = 1000; //계좌번호 카운팅(전연변수를 사용하여 생성자 바깥으로 빼놓은 후 메인에서 카운팅 하였습니다.
class bank {

	char * pName;
	int money;
public:
	int account;
	//기본생성자
	bank() {
		account = 1000;
		pName = NULL;
		money = 10000;
	}

	//등록하기
	bank(char *pName) {
		int iNameLen = strlen(pName);
		this->pName = new char[(iNameLen + 1) * sizeof(char)];
		memset(this->pName, 0, (iNameLen + 1) * sizeof(char));
		strcpy(this->pName, pName);
		account = a;
		money = 10000;
		cout << "계좌 생성시 " << money << "원이 자동으로 입금됩니다." << endl;
		cout << pName << "사용자님의 계좌번호는" << account << "입니다." << endl;
	}
	//정보보기
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

void main() {
	int choose = 0; //선택지
	int i = 0; // 클래스 주소
	int ac = 0; //계좌번호 입력 받는 변수
	int address = 0; //계좌번호로 찾은 클래스 주소
	cout << " [Korea 은행]" << endl;
	bank User[200]; //이 은행의 최대 고객수
	while (1) {
		cout << "1.사용자등록\n2.사용자 정보\n3.입금\n4.출금\n5.종료" << endl;
		cin >> choose;
		switch (choose) {
		case 1: //사용자 등록
			cout << "사용자정보를 입력합니다" << endl;
			cout << "사용자의 이름 : ";
			char name[30];
			cin >> name;
			User[i] = bank(name);
			i++;
			a++;
			break;
		case 2://사용자 정보
			cout << "사용자 정보 출력!\n사용자 계좌번호 입력 : ";
			cin >> ac;
			for (int j = 0; ac != User[j].account; j++) {
				cout << "계좌를 찾는중입니다..." << endl;
				address = j+1;
			}
			User[address].showInfo();
			break;
		case 3://입금
			cout << "입금!\n사용자 계좌번호 입력 : ";
			cin >> ac;
			for (int j = 0; ac != User[j].account; j++) {
				cout << "계좌를 찾는중입니다..." << endl;
				address = j+1;
			}
			User[address].in();
			break;
		case 4://출금
			cout << "출금!\n사용자 계좌번호 입력 : ";
			cin >> ac;
			for (int j = 0; ac != User[j].account; j++) {
				cout << "계좌를 찾는중입니다..." << endl;
				address = j+1;
			}
			User[address].out();
			break;
		case 5://프로그램 종료
			cout << "프로그램을 종료합니다" << endl;
			return;
		default:// 잘못된 선택지
			cout << "잘못된 선택지입니다" << endl;
			break;



		}

	}

}