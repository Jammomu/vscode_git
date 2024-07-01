#include<stdio.h> //printf, scanf
#include<iostream> //cout, cin
using namespace std; // std:: 을 생략할수 있는 문법
void main(){
	int i = 10;
	char c = 'A'; //정수 65 저장(아스키코드)
	double d = 3.14;
	char str[] = "Hello~!"; //8byte (마지막 '\0' 포함)

	printf("정수 : %d, 문자 : %c, 실수 : %f, 문자열 : %s\n"
			,i,c,d,str);

	//cout
	// 출력할 값을 쭉~~ 나열하는 형태 내보내는것(출력)
	std::cout << "정수 : "<<i<<", 문자 : "<<c<<", 실수 : "<<d<<",문자열 : " 
		<<str<<endl;

	//입출력 연습 (1)
	char szName[20] = {0, };
	printf("이름입력1: ");
	scanf("%s",szName);

	printf("%s님 안녕하세요!!\n",szName);

	cout << "이름입력2: ";
	cin >> szName;
	cout << szName <<"님 안녕하세요!!\n"<<endl;

	//입출력 연습 (2)
	int num1 = 0,num2=0,num3=0;

	cout <<"숫자 3개 입력: ";
	cin >>num1>>num2>>num3;
	cout <<"합계 : " <<(num1+num2+num3)<<endl;

}