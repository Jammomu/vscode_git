#include <stdio.h>

/*

 여러가지 자료형 입력받기
 double 형 실수 -> %1f
 float  형 실수 -> %f

 char 형 문자 -> %c
 문자열       -> %s


 scanf("%lf", &실수변수);  1: long의 약자 긴 float : double을 상징한다.
 scnaf("%f", &실수변수);
 scanf("%c", &문자변수);
 scanf("%s" 문자열변수); ????
 */

void main()
{
	double a=0.0;
	float b=0.0f;
	//문자를 초기화 할떄는 '\0' 를 쓴다.(' ' 공백문자로도 초기화가 가능하다)
	// \0 널 문자 NULL
	char c=' ';

	printf("따불:");scanf("%lf", &a);
	printf("실수:");scanf("%f", &b); 
	scanf("%c", &c);
	printf("문자:");scanf("%c", &c); // 윗줄에 엔터값 처리해줘야함
									// 한번더 입력문장을 쓰자!!(한번의 입력문장에 2번쓰는게 표준방식) 
	                                // 비표준 방식 fflush(stdin) 마이크로소프트 윈도우 계열만 쓴다.
	printf("double: %lf \nfloat: %f \nchar: %c", a, b, c);

	puts("============"); // 출력하기 put: 나타내다, s: string을
						 // put() 문자열만 출력하는 문자열 전용 출력 함수

}