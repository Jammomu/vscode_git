#include <iostream>
using namespace std;

typedef struct _POINT{
	int x;
	int y;
	char ch;

	void PrintPoint(){
	// ����ü ���� �Լ�������, �� ������� ���Ǿ��� ��� ����
	// sPoint�� �� ����Լ��� ȣ������ ����,
	// x = 5 , y = 6, ch = 'A'  (ȣ���� ��ü�� ���� �״�� ����)
	cout <<x<<", "<<y<<", "<<ch<<endl;

	}

}POINT;

//����


void main(){
	
	POINT sPoint = {0, }; 
	sPoint.x = 5;
	sPoint.y = 6;
	sPoint.ch = 'A';
	
	// sPoint ����ü�� ����� �Լ��� �����Ѵ�. �� �Լ��� ȣ��!
	sPoint.PrintPoint();

	POINT sPoint2 = {0,};
	sPoint2.x = 10;
	sPoint2.y = 20;
	sPoint2.ch = 'B';
	sPoint2.PrintPoint();
	// ȣ���ϴ� ��ü�� ��ġ �Ű������ΰ͸��� ���δ�.
	// ���� ���� ���� ������ �Լ��� ���� �� (x,y,ch)

	// �����ִ� �Լ��� ����� �����θ�,
	// �� ����ü�� ����ϴ� ��� ���忡�� ��������. (����ü ��ü�� ����� ����)

	// struct1 ���� ����� ���, ����ϴ� ����� �Լ��� ���� ����� �����


}

//����


