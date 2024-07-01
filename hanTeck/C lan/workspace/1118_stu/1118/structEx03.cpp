#include <iostream>
using namespace std;

typedef struct _POINT{

// 접근제어를 사용할 수 있다. 구조체는 기본이 public (클래스는 private)
public: //이 아래부터는 모두 public 이다.
	int x;
	int y;
	
private:  // 이 아래부터는 모두 private 이다. (외부 접근 불가능)
	char ch;

	void PrintPoint(){
	cout <<x<<", "<<y<<", "<<ch<<endl;
	}
public: // 여기서부터는 public
	void func()
	{
		cout << "POINT::func(), 시작" << endl;
		ch = 'z'; // private이지만, 여기는 구조체 코드 내부이기 때문에 가능
		PrintPoint(); // 위와 동일. 내 멤버인 함수를 호출
		cout << "POINT::func(), 끝" << endl;
	}
	char getch(){
		return ch;
	}
	void getPrintPoint(){
		PrintPoint();
	}

}POINT;

//선언


void main(){
	
	//POINT sPoint = {0, }; // ch가 private이기 떄문에 불가능
	POINT sPoint;
	sPoint.x =10;
	sPoint.y =20;
	//sPoint.ch ='A'; //Error 접근불가능
	//sPoint.PrintPoint(); //Error 접근불가능
	
	// private 멤버를 사용하려면, public 멤버를 통한 우회접근
	// 외부에서 사용가능한 함수를 통해, private 멤버를 사용

	cout << "func() 호출 전" << endl;
	sPoint.func(); // public - 사용 가능
	cout << "func() 호출 후" << endl;



}

//정의


