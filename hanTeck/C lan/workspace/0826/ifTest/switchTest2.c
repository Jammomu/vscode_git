#include <stdio.h>
/*
	switch 문자 입력
*/
void main()
{
	//char pick=NULL;
	char pick = ' ';
	int num1=0, num2=0;
	int res = 0;
	
	// '+', '-', '*', '/'
	// 사칙연산 입력바아 두 정수 계산 결과 출력하기
	
	printf("+ / - * 중 하나 선택 : ");
	scanf("%c", &pick);
	printf("숫자입력: ");
	scanf("%d %d", &num1, &num2);
	
	//문제 switch 완성하기
	switch(pick)
	{
	case '*':
		res=num1*num2;
				break;
	case '/':
		res=num1/num2;
				break;
	case '+':
		res=num1+num2;
				break;
	case '-':
		res=num1-num2;	
				break;
	}
	printf("%d %c %d = %d\n", num1, pick, num2, res);
}