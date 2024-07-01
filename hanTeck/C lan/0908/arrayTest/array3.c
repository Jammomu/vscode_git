#include <stdio.h>
/*
	배열과 포인터

	배열의 규칙 - 배열명은 "포인터 상수" 다!!   p(%d, 배열)  주소값이 나왔다!!!

	포인터 변수 = 배열명    :  배열이 주소니까 바로 포인터 변수에 넣을 수 있다.
*/
void main()
{
	int *pAr=0;
	int ar[3] = {10, 20, 30};
	int i=0;
	//배열을 포인터에 담을 수 있다.
	pAr = ar;

	for(i=0; i<3; i++)
	{
		printf("포인터 pAr+%d:%d번지, ar+%d:%d번지\n", i, pAr+i, i, ar+i);
	}

	//  pAr로 20을 출력해 보자!!!
	printf("*(pAr+1) : %d\n", *(pAr+1) );
	printf("*(pAr+2) : %d\n", *(pAr+2) );
	puts("");
	printf("pAr[1] : %d\n", pAr[1]) ;
	printf("pAr[2] : %d\n", pAr[2]) ;

	puts("");
	//ar[1]   <--->    *(ar+1)
	//ar[2]   <--->    *(ar+2)
	printf("ar[1]<--> *(ar+1) : %d\n", *(ar+1) ) ;
	printf("ar[2]<--> *(ar+2) : %d\n", *(ar+2) ) ;

	
	
}