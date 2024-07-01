#include <stdio.h>
/*





*/
void main()
{
	//입력받은 num의 값이 0보다 작으면 num에 두배를 하고
	// 0보다 크면 num을 제곱 할 것!
	//if문 이용
	int num = 0;

	printf("정수 입력: "); 
	scanf("%d", &num);

	if(num<0)
	{
		num *= 2;
	}
	else if(num>0)
	{
		num *= num;
	}
	printf("결과값: %d\n" , num);
}