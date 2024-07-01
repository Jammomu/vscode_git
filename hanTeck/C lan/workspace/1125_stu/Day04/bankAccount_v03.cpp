#include <iostream>
using namespace std;


class bank {
	person m_user;
	int m_userCount;
	int bankMoney;
public:
	char *pBankName;
	//�⺻������
	bank() { };
	bank(person user): m_user(user) {}
	//�������
	bank(person user, char *pName):m_user(user) {
		int iNameLen = strlen(pName);
		pBankName = new char[(iNameLen + 1) * sizeof(char)];
		memset(pName, 0, (iNameLen + 1) * sizeof(char));
		strcpy(pBankName, pName);
		bankMoney = 100000;
	}
	//����� ���
	void userReg(char *pName) {
		int acc = 1000;
		int iNameLen = strlen(pName);
		m_user.pName = new char[(iNameLen + 1) * sizeof(char)];
		memset(pName, 0, (iNameLen + 1) * sizeof(char));
		strcpy(m_user.pName, pName);
		m_user.account = acc;	acc++;
		m_user.money = 10000;	m_userCount++;
		cout << "���� ������ " << m_user.money << "���� �ڵ����� �Աݵ˴ϴ�." << endl;
		cout << pName << "����ڴ��� ���¹�ȣ��" << m_user.account << "�Դϴ�." << endl;
	}
	//����� ��ȸ(�����)
	void showBankInfo() {
		cout << "-----------<<��������>>-----------" << endl;
		cout << "�����̸� : " << pBankName << endl;
		cout << "����� �� : " << m_userCount << endl;
		cout << "���� �ܰ� : " << bankMoney << endl;
	}
	
};
class person {
	char * pName;
	int money;
	int account;
	friend bank;
public:

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
void bankWork(int choose) {

}
void userWork(int choose) {
	switch (choose) {
	case 1: //����� ���� ��ȸ
		break;
	case 2://�Ա�
		break;
	case 3://���
		break;
	case 4://������ü
		break;
	default:// �߸��� ������
		break;
	}
}
void main() {
	int choose = 0;
	char name[30];
	int i = 0;/*���ళ��*/ int j = 0;//���� ����
	bank Bank[3];
	person user[30];
	cout << "~~~�������~~~" << endl;
	while (1) {
		cout << "1.���ุ���\n2.����\n3.��������" << endl;
		cout << "�Է� >> ";	cin >> choose;
		if (choose == 1) {
			cout << "����� �Է� : ";	cin >> name;
			Bank[i] = bank(user[0],name);	i++;
		}else if(choose == 2){
			cout << "���༱�� : 1." << Bank[0].pBankName << "\n2." 
				<< Bank[1].pBankName << "\n3." << Bank[2].pBankName << endl;
			cout << "�Է� >> ";	cin >> choose;
			switch (choose) {
			case 1: //Bank[0]
				cout << Bank[0].pBankName << endl;
				cout << "1.������\n2.����" << endl;
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
			default:// �߸��� ������
				break;
			}
		}
		else if (choose == 3) return;
		else {
			cout << "�߸� ����" << endl;
			break;
		}
		

	}
	
}