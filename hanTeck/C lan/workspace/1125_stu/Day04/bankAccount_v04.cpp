#include <iostream>
using namespace std;


class bank {
	int m_userCount; // ����
	int m_bankMoney; //�����ܰ�
public:

	//�⺻������
	bank() {
		m_userCount = 0;
		m_bankMoney = 0;
	}
	//�������
	

	//����� ��ȸ(�����)
	
};
class person {
	char * pName;
	int money;
public:
	int account; //����
	//�⺻������
	person() {
		pName = NULL;
		money = 10000;
		account = 999;
	}
	//����� ���(���� �����ڿ�����)
	void newUser(char *pName) {
		int nameLen = strlen(pName);	
		this->pName = new char[(nameLen + 1) * sizeof(char)];
		memset(this->pName, 0, (nameLen + 1) * sizeof(char));
		strcpy(this->pName, pName); account++;	money = 10000;
		cout << "���� �����Ǿ����ϴ�." << endl;
		cout << "����� �̸� : " << this->pName << endl;
		cout << "���¹�ȣ : " << account << "\n �����ܰ� : " << money << endl;
	}
	//����� ��ȸ
	void showInfo() {
		cout << "����������� ����մϴ�" << endl;
		cout << "������̸�: " << this->pName << endl;
		cout << "����ڰ���: " << this->account << endl;
		cout << "�����ܾ�: " << this->money << endl;
	}	
	
	//�Ա�
	void in() {
		int inMoney = 0;
		cout << pName << "����� �Ա�!" << endl;
		cout << "�󸶸� �Ա��Ͻðڽ��ϱ�?" << endl;
		cin >> inMoney;
		cout << inMoney << "�� �Ա��մϴ�." << endl;
		money += inMoney;
		cout << pName << "������� �Ѱ��±ݾ��� " << money << "�� �Դϴ�." << endl;
	}
	//���
	void out() {
		int outMoney = 0;
		cout << pName << "����� ���!" << endl;
		cout << "�󸶸� ����Ͻðڽ��ϱ�?" << endl;
		cin >> outMoney;
		cout << outMoney << "�� ����մϴ�." << endl;
		money -= outMoney;
		cout << pName << "������� �Ѱ��±ݾ��� " << money << "�� �Դϴ�." << endl;
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
		cout << "1.����� ���\n2.����� ���� ��ȸ\n3.�Ա�\n4.���\n5.������ü" << endl;
		cout << "�Է� : ";	cin >> choose;
		switch (choose) {
		case 1:	//����� ���
			cout << "����� �̸� �Է� : "; cin >> name;
			pUser[i - 1].newUser(name);	i++;
			break;
		case 2: //����� ���� ��ȸ
			cout << "���¹�ȣ �Է� : "; cin >> userAcc;
			for (j = 0; userAcc != pUser[j].account; j++) cout << "���¸� ã�����Դϴ�." << endl;
			pUser[j].showInfo();   
			break;
		case 3://�Ա�
			for (j = 0; userAcc != pUser[j].account; j++) cout << "���¸� ã�����Դϴ�." << endl;
			pUser[j].in();
			break;
		case 4://��� 
			for (j = 0; userAcc != pUser[j].account; j++) cout << "���¸� ã�����Դϴ�." << endl;
			pUser[j].out();
			break;
		case 5://������ü
			break;
		default:// �߸��� ������
			return;
		}
	}
}
void main() {
	int choose = 0;
	int j = 1;//���� ����
	cout << "~~~�������~~~" << endl;
	while (1) {
		cout << "1.���ӽ���\n2.��������" << endl;
		cout << "�Է� >> ";	cin >> choose;
		if (choose == 1) {
			cout << "KOREA ����!!" << endl;
			cout << "1.�����ڿ�	2.����ڿ�" << endl;
			cout << "�Է� : ";	 cin >> choose;
			if (choose == 1) bankWork();
			else if (choose == 2) userWork();
		}
		else if (choose == 2) return;
		else {
			cout << "�߸� ����" << endl;
			break;
		}


	}

}