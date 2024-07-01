#include <stdio.h>
/*
   문자열 입력
   1) 배열 방식
       char 배열명[10];

   2) 포인터 방식
       char *변수명;
*/
void main()
{

	/*
	printf("알파벳 한글자 byte 수 : %d바이트\n", sizeof("a"));
	        //알파벳, 특수문자, 숫자는 1바이트이다.

	printf("한글 한글자 byte 수 : %d바이트\n", sizeof("강"));
	       //알파벳등을 제외한 모든글자는 2바이트이다

	printf("한글 두글자 byte 수 : %d바이트\n", sizeof("강남"));
	*/

	//1. 배열방식
	//char name[20]={0}; // ={0} 배열 초기화 방식
	//char title[7];

	//printf("이름 입력: "); scanf("%s", name);
   // printf("이름 : %s\n", name);

	//printf("책 제목: "); scanf("%s" , title);
	//printf("책 제목: %s\n", title);


	//2. 포인터 방식

	//char *title;  초기화가 안되서 사용이 안됨
	//char *btitle=NULL;
	char *btitle=0;

	printf("책 제목: "); scanf("%s" , btitle); //배열방식으로 당분가 문자열을 입력받자
	printf("책 제목: %s\n", btitle);           // deep copy 방식으로 문자열을 입력받아야한다.
	// 키보드에서 발생한 문자열의 위치값을 btitle 변수에 넣을 수 없다.

}