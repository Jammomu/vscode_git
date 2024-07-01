#include <iostream>
using namespace std;

typedef struct _POINT{
	int x;
	int y;
	char ch;

	void PrintPoint(){
	// 구조체 내부 함수에서는, 내 멤버들을 조건없이 사용 가능
	// sPoint가 이 멤버함수를 호출했을 때는,
	// x = 5 , y = 6, ch = 'A'  (호출한 주체의 값이 그대로 적용)
	cout <<x<<", "<<y<<", "<<ch<<endl;

	}

}POINT;

//선언


void main(){
	
	POINT sPoint = {0, }; 
	sPoint.x = 5;
	sPoint.y = 6;
	sPoint.ch = 'A';
	
	// sPoint 구조체의 멤버로 함수가 존재한다. 그 함수를 호출!
	sPoint.PrintPoint();

	POINT sPoint2 = {0,};
	sPoint2.x = 10;
	sPoint2.y = 20;
	sPoint2.ch = 'B';
	sPoint2.PrintPoint();
	// 호출하는 주체가 마치 매개변수인것마냥 쓰인다.
	// 내가 지닌 값을 가지고 함수로 가는 것 (x,y,ch)

	// 관련있는 함수를 멤버로 만들어두면,
	// 이 구조체를 사용하는 사람 입장에서 편해진다. (구조체 자체에 기능이 제공)

	// struct1 에선 기능이 없어서, 사용하는 사람이 함수를 따로 만들어 사용함


}

//정의


