#include <stdio.h>
/*
	조건문 : if 그리고 switch 문!!!

		switch와 if 차이점
		switch는 break 여부에 따라서 내려가면서 실행할지 말지를 결정할수 있다.(다중분기점)
		if(다중택일)

	switch(정수,문자)
	{
	case 1;
	case 2;
				break;
	case 3;


				break;
	case 4;
	case 상수값;

	default:
	
	}
*/
void main()
{
	// 과일 고르기
	// 1. 사과 2. 수박 3. 포도 4. 복숭아
	int pick = 0;
	puts("1.사과\n2.수박\n3.포도\n4.복숭아\n");
	printf("과일 번호 고르기: "); scanf("%d", &pick);

	switch(pick)
	{
	case 1:   //case 옆에 label 은 상수만 쓴다.  변수 사용 금지, 수식사용 금지
		puts("사과");
		break;
	case 2:
		puts("수박");
		break;
	case 3:
		puts("포도");
		break;
	case 4:
		puts("복숭아");
		break;
	
	default:  //case조건에 해당 사항이 없을 때 실행한다.
		puts("잘못된 번호");
	}

}