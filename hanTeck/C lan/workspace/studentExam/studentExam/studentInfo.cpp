#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
// 00����б� �л����� �������
// 3���г� 3���� ���ο� 10�� (�ѿ� 90��) //�̰� �׳� �迭�� ó������
// �з� �����ؾ���
// ���� ���� �������� �Է� (�������� ����)
// �� ���� ������ ������ ��� ���� ��� �����ؾ���
// ���г� ���� ���� ���� �����ؾ��� ex) 1�� 000 2�� 000 3�� 000....
//(�г⺰�� ���� ���� �����ϸ� �ݺ��ε� �����Ұ�)
class student {
	char *pName;
	//int grade;	int cLass;	int number; // �����ؾߵɰ�(�迭��ó��)
	int kor;	int eng;	int math;
	int tot;	double avg;

public:
	student() {//�⺻ ������
		pName = NULL;
		//grade = 0;  cLass = 0;  number = 0; //�����ؾߵɰ�(�迭��ó��)
		kor = 0;	eng = 0;	math = 0;
		tot = kor + eng + math;	avg = tot / (double)3;
	}
	//�ʿ��� �Լ���
	// �л� ������� �Լ�
	// �г⺰�� ���� ��� �Լ�(�̰Ŵ� ���� �Լ��� ���ߵɵ�)
	


};



void main() {
	student stu[3][3][10];
	int choose = 0;
	int g = 0;	int c = 0;	int n = 0; //�г�,��,��ȣ
	while (1) {
		cout << "===�������б�===" << endl;
		cout << "1. �л��������" << endl;
		cout << "2. �л��������" << endl;
		cout << "3. �г⺰�������" << endl;
		cout << "4. ���α׷� ����" << endl;
		cout << "���� : ";	cin >> choose;
		switch (choose) {
		case 1://�������
			cout << "�г� �Է� : ";	cin >> g;
			if (g < 1 || g > 3) {
				cout << "�߸��� �г�!" << endl;
				break;
			}
			cout << "�� �Է� : ";	cin >> c;
			if (c < 1 || c > 3) {
				cout << "�߸��� ��!" << endl;
				break;
			}
			cout << "��ȣ �Է� : ";	cin >> n;
			if (n < 1 || n > 10) {
				cout << "�߸��� ��ȣ!" << endl;
				break;
			}
			stu[g][c][n] = student();
			break;
		case 2://�������

			break;
		case 3://�г⺰�������

			break;
		case 4://���α׷� ����
			cout << "���α׷� ����" << endl;
			return;
		default ://�߸��� ������
			cout << "�߸��� ������" << endl;
			break;
		}

	}

}
