#include <iostream>
using namespace std;

//typedef --> ���߿� struct �̸� ���� ���� ������� ���
//_POINT --> ������� ���� �̸�
typedef struct _POINT{
	int x;
	int y;
	char ch;


}POINT;

//����
void PrintPoint(POINT point);

void main(){
	
	POINT sPoint = {0, }; 
	sPoint.x = 5;
	sPoint.y = 6;
	sPoint.ch = 'A';
	PrintPoint(sPoint);

	// ����ü ������ sPoint��, �Լ� PrintPoint()�� ���� �ƹ��� ������ ����.
	// �Լ����� sPoint�� ���� �ٷ����, �Ű������� ���� ��������߸� �Ѵ�.

	// �Լ��� ��, Ư�� ����ü�� ������ �ִ� �Լ����� ���ϰ� �ٷ�� �ʹ�!
	//	>> C++ : �Լ��� ����ü�� ����� ����ϸ� ���ϰ� �ٷ� �� �ִ�.
}

//����
void PrintPoint(POINT point){

	cout << point.x <<", "<<point.y<<", "<<point.ch<<endl;


}

