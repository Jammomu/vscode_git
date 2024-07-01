/*
	매개변수로 전달된 숫자들의 합(sum)을 구하여,
	1부터 sum까지의 합(sum2)을 구하고, 
	sum2가 짝수인지 홀수인지 출력하는 함수

		- 반환타입 : void
		- 매개변수를 다르게하여 함수를 2개 이상 오버로딩
			> 단, double(실수)도 매개변수로하는 함수 포함
			> 실수의 합 sum에서는 소수점은 버리고 정수만 가지고 계산
*/

#include <iostream>
using namespace std;

//메서드 선언
void Func(int a, int b);
void Func(double a, double b);

void main()
{
	Func(3, 4); // 3+4=7, 1~7까지의 합=28, "짝수" 출력
}

//메서드 정의
void Func(int a, int b) {
	int sum = a + b;
	for (int i = 1; i < sum; i++;) {
		int sum2 = 0;
		sum2+=i;
		
	}
	if (sum2 % 2 == 0)	cout << sum2 << "는 짝수입니다!" << endl;
	else cout << sum2 << "는 홀수입니다!" << endl;
}
void Func(double a, double b) {

}