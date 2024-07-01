#include <iostream>
using namespace std;

typedef struct _POINT{

// ������� ����� �� �ִ�. ����ü�� �⺻�� public (Ŭ������ private)
public: //�� �Ʒ����ʹ� ��� public �̴�.
	int x;
	int y;
	
private:  // �� �Ʒ����ʹ� ��� private �̴�. (�ܺ� ���� �Ұ���)
	char ch;

	void PrintPoint(){
	cout <<x<<", "<<y<<", "<<ch<<endl;
	}
public: // ���⼭���ʹ� public
	void func()
	{
		cout << "POINT::func(), ����" << endl;
		ch = 'z'; // private������, ����� ����ü �ڵ� �����̱� ������ ����
		PrintPoint(); // ���� ����. �� ����� �Լ��� ȣ��
		cout << "POINT::func(), ��" << endl;
	}
	char getch(){
		return ch;
	}
	void getPrintPoint(){
		PrintPoint();
	}

}POINT;

//����


void main(){
	
	//POINT sPoint = {0, }; // ch�� private�̱� ������ �Ұ���
	POINT sPoint;
	sPoint.x =10;
	sPoint.y =20;
	//sPoint.ch ='A'; //Error ���ٺҰ���
	//sPoint.PrintPoint(); //Error ���ٺҰ���
	
	// private ����� ����Ϸ���, public ����� ���� ��ȸ����
	// �ܺο��� ��밡���� �Լ��� ����, private ����� ���

	cout << "func() ȣ�� ��" << endl;
	sPoint.func(); // public - ��� ����
	cout << "func() ȣ�� ��" << endl;



}

//����


