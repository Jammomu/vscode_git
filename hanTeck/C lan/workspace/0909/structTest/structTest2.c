#include <stdio.h>
#include <string.h>	//문자열 함수 strcpy(문자열위치, "담을 내용");

struct Student
{
	char name[20];
	int kor;
	int eng;
	int math;
};


void main()
{
	//strcpy(구조체변수.name, "김철수");  
	//name배열에는 대입연산자 사용불가
	//    배열은 상수라서    배열 = "안녕"  에러!!!
	//    따라서 string을 copy 하는 함수  strcpy() 를 이용해서
	//	  문자열을 입력한다.
	struct Student kcs={0};  //구조체의 초기화
	//kcs.name = "김철수";  //name은 포인터 상수==배열 이다.
						 //따라서 대입 연산 사용 불가!!!
	
	strcpy(kcs.name, "김철수");  //문자열 입력시 strcpy를 사용하자!!!
	kcs.kor=10;
	kcs.eng=20;
	kcs.math=30;
}