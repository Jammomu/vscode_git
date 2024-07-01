#include <stdio.h>
#include <string.h>
/*
	 typedef  기존단어  바꿀단어;
*/
/*struct ReportStudentCard
{

};
//typedef struct ReportStudentCard 를  Card 로;
typedef struct ReportStudentCard  Card;
*/
typedef struct ReportCard
{
	char name[20];
	int kor;
	int eng;
	int math;

} Card ;		//위에 선언한 이름을 Card라고 불러야 겠다.
void inputCard(Card *pM)
{
	//man에서 끝->main에서 연결 안됨
	//주소값을 받아서 처리하자!!!
	//pM 에는 &kcs가 들어있다
	//1. pM을 변수로 만들어라 ->  *pM
	//2. 그렇게 만든 변수(*pM)에서 멤버를 불러보자 -> *pM의 쩜!!!
	//				*pM.멤버변수
	//3. 근데 에러!!! 왜?   연산자 우선 순위
	//				(*pM). 소괄호로 묶어야 멤버변수를 부를 수 있다.
	//4. 배열에서  (* + ) 을  [] 로 변경했었다.
	//5. 구조체에서도   (*구조체 주소).  을  "->" 화살표 연산자로 
	//		치환 할 수 있다.
	//6.  구조체주소->멤버변수   이 형태로 쓰자

	printf("이름 입력 : "); scanf("%s", pM->name); //pM 주소가 가리키고 있는~   문자열(배열)앞에는 & 안붙이기!!!
	printf("국어 입력 : "); scanf("%d", &pM->kor); //kor의 위치에 넣어!!  일반 변수를 가리켰다. &를 붙이자!
	printf("영어 입력 : "); scanf("%d", &pM->eng); 
	printf("수학 입력 : "); scanf("%d", &pM->math); 
}
void printCard(Card man)
{
	printf("*** 출력 ***\n");
	printf("이름 : %s\n", man.name);
	printf("국어 : %d\n", man.kor);
	printf("영어 : %d\n", man.eng);
	printf("수학 : %d\n", man.math);
}
void main()
{
	Card kcs = {0};
	inputCard(&kcs);
	printCard(kcs);
}







