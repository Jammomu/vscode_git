#include <iostream>
using namespace std;

//this 포인터
// > 내 맴버를 명시하는 포인터(내것을 찾는다)
//c++에서 this->(변수명)
// '->'를 사용하는 이유는 this도 '포인터'이기 때문에 사용함!!
//자바에선 this.(변수명)
class person{//c++에서 클래스는 기본적으로 private으로 만들어진다.
	
	int age; //private

public://생성자는 기본적으로 public으로 만든다.
	   // 필요 시 private으로 만들어서, 외부에서 객체를 마음대로 생성하지 못하게 적기도 한다.
	person(){ }
	person(int age){ 
		this->age=age;
	}
	
	void privateInfo(){
		cout<<"나이는 "<<this->age<<"살 입니다"<<endl;
	}

};


void main(){

	person a; 
	person b(20);
	b.privateInfo();
}