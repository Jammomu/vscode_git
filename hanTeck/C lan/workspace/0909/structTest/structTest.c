#include <stdio.h>
/*
	구조체 ( structure : 구조물 )
	- 내가 "자료형" 을 새로 만든다!
	- 기존에 기본형 말고  내가 만든 자료형으로 변수를 만들 수 있다.

	한 학생의 정보가  국, 영, 수  --> int형이네 배열로!!!
	그런데,
		한 학생의 정보는,  이름, 주소, 연락처, 국, 영, 수
		매 변수로 만들기에는 변수의 갯수가 어마어마 할 거다!!!
		-> 하나의 그룹 {} 로 묶어서 "자료형"을 구성하자!!!
		내가 만든 단어가 자료형이 된다.
		그 자료형으로 변수를 만들어 내면 변수 하나에
		여러가지 정보를 저장할 수 있다.
	
	- 구조체 연산자
		구조체 변수.멤버변수 = 데이터;

*/
//구조체 만들기 - 내가 만드는 "자료형"  <== 컴파일러한테 신고(알려줘야 한다)
struct ReportCard //<--내가만든_자료형  : int, char, float, double + "ReportCard라는 신설 자료형"
{
	
	//그 자료형을 구성하기 위한 멤버변수 나열(선언)
	char name[10];
	int kSc;
	int eSc, mSc;		//<--- 이런 변수들을 멤버변수들!!!

	

};

struct ReportCard inputScore(struct ReportCard person);

int calcScore(struct ReportCard person);

void printScore(struct ReportCard person);




void main()
{	
	//철수, 영희, 민수
	struct ReportCard cs={"철수", 70, 80, 90};	//구조체의 초기화!!!
	struct ReportCard yh={0}, ms={"민수"};		//영희의 정보는 아직 입력전
												//민수는 이름만 등록했고 시험 전!!!

	//철수 데이터 출력
	printf("이름 : %s\t국어 : %d\t영어 : %d\t수학 : %d\n",
			cs.name, cs.kSc, cs.eSc, cs.mSc);
	//영희는 입력
	printf("이름 입력 : ");
	//	scanf("%s", &cs.name);     cs에서 name을 호출했더니, name이 배열이더라!!!
	//								그래서 배열 앞에는 &를 붙이는게 아니다.
	scanf("%s", yh.name);
	printf("국어 영어 수학 순서대로 값 입력 : ");
	scanf("%d%d%d", &yh.kSc, &yh.eSc, &yh.mSc);

	//hap = yh.kSc + yh.eSc + yh.mSc;

	//민수는 함수로 보내자!!!
	ms = inputScore(ms);
	calcScore(ms);
	printScore(ms);
}

struct ReportCard inputScore(struct ReportCard person)
{
	puts("---입력 함수---");
	printf("학생의 이름을 입력하세요 : "); 
	scanf("%s", person.name);
	printf("국어점수 : "); scanf("%d", &person.kSc);
	printf("영어점수 : "); scanf("%d", &person.eSc);
	printf("수학점수 : "); scanf("%d", &person.mSc);
	puts("---입력 종료---");
	return person;
}
int calcScore(struct ReportCard person)
{
	return person.eSc+person.mSc+person.kSc;
}
void printScore(struct ReportCard person)
{
	puts("*** 출력 ***");
	puts("이름\t국어\t영어\t수학\t총점\t평균");
	printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", 
		person.name, person.kSc, person.eSc, person.mSc,
		calcScore(person)   , calcScore(person)/3.0);
		
}

