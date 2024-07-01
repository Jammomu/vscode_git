#include <iostream>
using namespace std;

typedef struct _KOREA
{
// public: 이 숨어있구나!
	int value;
	void PrintValue(); // 멤버함수 선언만! (정의/선언 분리)
} KOREA;

//KOREA 구조체의 맴버 함수인 PrintValue() 를 '정의'
void KOREA::PrintValue() //함수 이름 앞에 '소속명시'
{

}

// 코드의 흐름 바깥 (함수 밖)에 만드는 변수 = 전역변수
// 어느 위치에서나 사용 가능, 프로그램 시작 시 생성, 종료 시 소멸
// 편하긴 한데.. 너무 많이 사용하면 코드가 복잡해짐

int value = 100;

void main()
{
	KOREA ko;
	ko.PrintValue();

	cout << value << endl;

	int value = 50; // 지역변수
	cout << value << endl; // 이름이 같을 때, 지역변수가 먼저 접근된다.
	cout << ::value << endl;

	// 변수 이름이 같을 때, 가장 먼저 찾아지는 변수는
	// 가장 나중에 만들어진 '지역변수'
	{
		int value = 30;
		cout << value << endl;
	}

}