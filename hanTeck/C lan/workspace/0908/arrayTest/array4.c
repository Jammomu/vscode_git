#include <stdio.h>
/*
	배열의 크기 : 해당함수에서  sizeof(배열)  총byte수를 알 수 있다.

*/
void main()
{
	int ar[] ={4,6,3,5,6,4,5,7,5,6,7,4,5,8,76,5,8,6,5,7,9,8,8,7,6,54,3,5,6,2,3,4,5};
	int cnt = 0;

	//ar은 몇 바이트짜리 배열이지???
	printf("ar의 크기>> sizeof(ar) : %dByte\n", sizeof(ar) );

	//몇개지?   sizeof(ar) / 4  보다는   sizeof(ar) / sizeof(자료형)   
	cnt = sizeof(ar) / sizeof(int) ; 
	printf("배열의 갯수 : %d개\n", cnt);


}

