#include <stdio.h>
/*
	논리 연산 : & | ^ && ||

	비트 논리 연산 : & | ^ (산술 연산)
	관계 논리 연산 : && || (관계 연산)

	관계식  &&  관계식
	  T			 F
	  1		*	 0  =  0(거짓)

	관계식  ||  관계식
	  T			 F
	  1     +    0  =  1(참)


*/
void main()
{
	//비트 논리 연산
	printf(" 12 &(AND곱) 6 : %d\n", 12&6); //12와 6을 이진수로 풀어난 후
									// 각 자리값을 * 연산으로 처리

	printf(" 12 |(OR합) 6 : %d\n", 12|6); //12와 6을 이진수로 풀어난 후
									// 각 자리값을 + 연산으로 처리
									//2진수이기 때문에 1+1은 같은 참(그래서 1로 나온다)

	printf(" 12 ^(XOR배타오어합) 6 : %d\n", 12^6); //12와 6을 이진수로 풀어난 후
									// 각 자리값을 not OR 연산으로 처리
									// 자리값이 같으면 거짓0, 다르면 참1


	// 0  0과 곱하면 무조건 0이기때문에 계산(컴파일)을 안한다.(컴파일 속도를 빠르게 하기 때문에)
	printf("&& 논리 결과 값: %d\n", 5<3 && 6>3);
	
	// 1 덧셈
	printf("|| 논리 결과 값: %d\n", 5<3 || 6>3);

}