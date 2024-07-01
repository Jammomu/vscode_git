#include <stdio.h>
#include <stdlib.h> //malloc(), free() 함수 사용하기
/*

malloc 함수 사용하는 방법

	포인터 변수 =  malloc(할당받고 싶은 메모리 byte수);

	*포인터  <-- 포인터(주소)를 변수로 만들어(*)서
				값을 입력할 수 있다.
	
	free(포인터 변수);


*/

void main()
{
	//메모리 할당 받으면 주소가 발생하는데..
	//미리 포인터 변수를 만들어서 그 주소를 저장해 놓자
	
	//(음..  정수 2개 저장소를 heap 에 만들자.. 그럴려면 포인터변수를
	//  int 형으로 만들어야 해~)
	int *pVal = 0;
	int hap = 0;
	double avg = 0;

	//malloc(8);			|  4byte |  4byte  |
	pVal = (int *)malloc(sizeof(int)*2);

	//데이터 입력 작업
	//pVal 은 주소다-->이걸 변수로 만들려면 *가 필요하다!
	*pVal = 100;  //첫번째 할당받은 곳에 100값을 넣어놨다.

	//두번째 공간으로 포인터값을 변경하려면
	// 주소+1   "+1" 연산을 통해 두번째 변수 영역으로 이동할 수 있다.
	// 이를 "포인터 연산" 이라고 한다.
	// 주소에 +1  +2  +3  을 하게 되면,,  해당 포인터변수의 타입만큼
	// byte수가 이동한다.
	//	|  4byte |  4byte  |
	// pVal     pVal+1
	//	   첫번째    두번째 <-- 두번째 표시는 +1   이렇게 연산을 통해
	//						   이동가능!!!!
	
	//두번째 주소  pVal+1
	//두번째 주소에 가서 변수 만들기 * pVal+1
	//그대신 + 덧셈을 먼저 :   *(pVal+1)
	//그 다음 대입 : *(pVal+1) = 200


	*(pVal + 1)  =  200;		//*는 주소를 변수로 만들어 주는 연산자다!!!

	//합 구하기
	hap = *pVal  +   *(pVal+1) ;

	avg = hap / (double)2;   // 또는  / 2.0

	printf("합 : %d\, 평균 : %.1f\n", hap, avg);

	free(pVal);  // 8byte 메모리 지워라!!!


	//그리고 다시 만들자
	pVal = NULL;   //아까 기억해 놨던 주소 없애자!!!
				   // "동적 메모리 초기화"
	
	//그리고 새로 다시 받자!
	pVal = (int *) malloc(sizeof(int) *3);
	//문제)  점수 3개 입력받고 합, 평균 구하기!!!

	// scanf("%d", 주소)    pVal    첫번째   주소
	//						pVal+1  두번째  주소
	//						pVal+2  세번째  주소

	printf("1번 점수 : "); scanf("%d", pVal+0);
	printf("2번 점수 : "); scanf("%d", pVal+1);  //pVal에서 다음칸
	printf("3번 점수 : "); scanf("%d", pVal+2);  //pVal에서 다 다음칸

	hap = *(pVal +0) +  *(pVal+1)  + *(pVal+2);
	avg = hap/3.0;
	printf("합 : %d\, 평균 : %.1f\n", hap, avg);

	free(pVal); // heap에 가서 지워
	pVal = 0;  // =NULL;     <--  pVal에 있는 주소 지워
}