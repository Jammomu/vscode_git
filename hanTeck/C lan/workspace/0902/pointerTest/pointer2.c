#include <stdio.h>
/*
	포인터 배우는 목적
	1. 다른 함수에서 데이터를 쓸 수 있다.(함수간 데이터 공유 가능)
	2. 동적 메모리 할당을 통해서 가변 배열을 만들 수있다.

	포인터 변수 만들기
	1. &을 통해서 주소를 매번 구할 수 없다(속도 저하,읽기 불편)
	2. 그래서 변수의 주소만 저장할수 있는 전용변수를 선언해서 쓴다.
	3. 이를 포인터 변수라고 한다. (오로지 변수의 주소, 즉 포인터만 저장하는 함수
	4. 선언법칙

		타입 *변수 = 주소;
		int *pVal = 0;
		int *pData = NULL;
		double *pAvg = 0;  //포인터는 정수 값이다. double형이라고 속지말자!!!
						   //주소만 들어온다.
		char *pCh = NULL;  //NULL은 포인터의 초기값을 상징하는 단어이다. 0으로 해도 된다!

		포인터변수의 목적은 기존 변수의 주소값을 담기 위한 변수다.
		만약 기존변수가 존재하지 않으면 포인터변수도 만들 필요없다.
		참조할 값이 없는데, 참조변수가 필요없다!!!

*/


int changeVal(int myAge)
{
	return myAge=20;
}


/*
void main()
{
	int myAge = -3;
	//저장소(포인터 변수) = &myAge;
	
	int *pAge = &myAge;
	int* p, a, c; //p만 포인터 변수, a, c는 정수형 변수
	//int *p, *pA, *pC

	myAge=changeVal(myAge);
	printf("%d\n",myAge);
}*/
//void changeValPtr(열쇠!! == 포인터)
void changeValPtr(int *pNai)
{
	// pNai에는 키값이 들어있다  그 키(key)는 바로 age의 주소이다.
	// pNai에 * 연산을 붙이면 변수를 만들수 있다.
	// *pNai 즉, age가 된다.
	*pNai = 23;
	//pAge 는 age 의 주소값 -> pNai에 pAge 값을 대입 -> *pNai(pNai라는 변수에 있는 주소값)에 23 데이터값을 입력 -> *pNai는 age의 변수값
}
void main()
{
	int age = -1;
	int *pAge = &age;

	changeValPtr(pAge); //함수(주소? 데이터?);

	printf("age: %d\n",age); // *pNai = 23 에 의해서 age의 값이 23으로 변경된 것을 알 수 있다.
							 // 굳이 return을 시키고 값 대입하는 과정을 쓰지 않아도 된다


}