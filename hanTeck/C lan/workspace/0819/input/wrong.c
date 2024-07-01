#include <stdio.h>

// 오답 노트
/*
학생이름 국어 영어 수학 입력받은 후
총점 평균 구하기!

*/



void main()
{
	char name[20];
	int kor = 0, eng = 0, math = 0;
	int tot = 0;
	double avg = 0.0; // 평균은 소수점 한자리까지 구해라 (형변환 이용)


					  //입력
	printf("총점과 평균점수\n\n\n");
	printf("학생이름은?"); scanf("%s", name);
	printf("국어점수는?"); scanf("%d", &kor);
	printf("영어점수는?"); scanf("%d", &eng);
	printf("수학점수는?"); scanf("%d", &math);






	//처리

	tot = kor + eng + math;
	avg = tot / ((double)3);
	// 형변환      정수/정수 -> 결과값 정수!!!
	//            정수/실수 -> 결과값 상수
	//            예) 10/3 -> 3   10/3.0 -> 3.333333
	//            
	//
	//출력
	printf("\n%s의 총점과 평균점수\n\n", name);
	// '&' 는 주소값을 불러오는것이므로 scanf 때 쓰이는 것이지 씨부랄 printf 에 쓰지말자 절대!!
	printf("국어점수: %d\n", &kor/*답:kor*/);
	printf("영어점수: %d\n", &eng/*답:eng*/);
	printf("수학점수: %d\n", &math/*답:math*/);
	printf("총점: %d      평균: %0.1lf\n", &tot/*답:tot*/, &avg/*답:avg*/);

}