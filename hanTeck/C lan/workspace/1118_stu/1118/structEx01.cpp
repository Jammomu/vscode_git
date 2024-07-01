#include <iostream>
using namespace std;

//typedef --> 나중에 struct 이름 떼고 변수 만드려고 사용
//_POINT --> 사용하지 않을 이름
typedef struct _POINT{
	int x;
	int y;
	char ch;


}POINT;

//선언
void PrintPoint(POINT point);

void main(){
	
	POINT sPoint = {0, }; 
	sPoint.x = 5;
	sPoint.y = 6;
	sPoint.ch = 'A';
	PrintPoint(sPoint);

	// 구조체 변수인 sPoint와, 함수 PrintPoint()는 서로 아무런 연관이 없다.
	// 함수에서 sPoint의 값을 다루려면, 매개변수를 통해 전달해줘야만 한다.

	// 함수들 중, 특정 구조체와 관련이 있는 함수들을 편하게 다루고 싶다!
	//	>> C++ : 함수를 구조체의 멤버로 사용하면 편하게 다룰 수 있다.
}

//정의
void PrintPoint(POINT point){

	cout << point.x <<", "<<point.y<<", "<<point.ch<<endl;


}

