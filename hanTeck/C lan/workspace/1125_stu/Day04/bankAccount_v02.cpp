#include <iostream>
using namespace std;

int a = 1000; //���¹�ȣ ī����(���������� ����Ͽ� ������ �ٱ����� ������ �� ���ο��� ī���� �Ͽ����ϴ�.
class bank {

	char * pName;
	int money;
public:
	int account;
	//�⺻������
	bank() {
		account = 1000;
		pName = NULL;
		money = 10000;
	}

	//����ϱ�
	bank(char *pName) {
		int iNameLen = strlen(pName);
		this->pName = new char[(iNameLen + 1) * sizeof(char)];
		memset(this->pName, 0, (iNameLen + 1) * sizeof(char));
		strcpy(this->pName, pName);
		account = a;
		money = 10000;
		cout << "���� ������ " << money << "���� �ڵ����� �Աݵ˴ϴ�." << endl;
		cout << pName << "����ڴ��� ���¹�ȣ��" << account << "�Դϴ�." << endl;
	}
	//��������
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

void main() {
	int choose = 0; //������
	int i = 0; // Ŭ���� �ּ�
	int ac = 0; //���¹�ȣ �Է� �޴� ����
	int address = 0; //���¹�ȣ�� ã�� Ŭ���� �ּ�
	cout << " [Korea ����]" << endl;
	bank User[200]; //�� ������ �ִ� ����
	while (1) {
		cout << "1.����ڵ��\n2.����� ����\n3.�Ա�\n4.���\n5.����" << endl;
		cin >> choose;
		switch (choose) {
		case 1: //����� ���
			cout << "����������� �Է��մϴ�" << endl;
			cout << "������� �̸� : ";
			char name[30];
			cin >> name;
			User[i] = bank(name);
			i++;
			a++;
			break;
		case 2://����� ����
			cout << "����� ���� ���!\n����� ���¹�ȣ �Է� : ";
			cin >> ac;
			for (int j = 0; ac != User[j].account; j++) {
				cout << "���¸� ã�����Դϴ�..." << endl;
				address = j+1;
			}
			User[address].showInfo();
			break;
		case 3://�Ա�
			cout << "�Ա�!\n����� ���¹�ȣ �Է� : ";
			cin >> ac;
			for (int j = 0; ac != User[j].account; j++) {
				cout << "���¸� ã�����Դϴ�..." << endl;
				address = j+1;
			}
			User[address].in();
			break;
		case 4://���
			cout << "���!\n����� ���¹�ȣ �Է� : ";
			cin >> ac;
			for (int j = 0; ac != User[j].account; j++) {
				cout << "���¸� ã�����Դϴ�..." << endl;
				address = j+1;
			}
			User[address].out();
			break;
		case 5://���α׷� ����
			cout << "���α׷��� �����մϴ�" << endl;
			return;
		default:// �߸��� ������
			cout << "�߸��� �������Դϴ�" << endl;
			break;



		}

	}

}