#include <stdio.h>
#include <malloc.h>  //stdlib.h 를 써도 되고 malloc.h 를 써도 된다.

void inputScore(int num, int *pS)
{
	int i=0;  //갯수는 num에 있는데.. 그 갯수만큼 for로 돌려야한다.
	
	puts("***점수 입력***");
	for(i=0; i<num; i++)
	{
		printf("%d번 점수 : ", i+1); scanf_s("%d", pS+i);
	}
	puts("***점수 입력 종료***");

}
int getHap(int num, int *pS)
{
	int i=0;
	int hap=0;
	for(i=0; i<num; i++)
	{
		hap += pS[i];
	}
	return hap;  //총합을 리턴시켜 주자!
}
double getAvg(int num, int hap)
{
	return hap/(double)num ;
}
void printScore(int num,int *pS,int hap,double avg)
{
	int i = 0;
	for(i=0;i<num; i++)
	{
		printf("%d번째 과목 점수: %d점   ",i+1,pS[i]);
	}
	puts("");
	printf("%d개의 과목 총점: %d점  %d의 과목평균: %.lf점\n", num,hap,num,avg);
}
void main()
{
	//메인에서 heap에 메모리 할당 n개 받는다.
	// inputScore() 에 주소 보낸다!
	// 데이터 입력받고  getHap() 에서 총점 구한다.
	// getHap()에서 계산된 총점을 getAvg()에서 평균 구하고
	// 점수, 총점, 평균 출력하자!
	int *pScore=0;
	int subNum=0;  //과목수!!!
	int hap=0;
	double avg = 0;
	printf("과목 수 입력 : "); scanf_s("%d", &subNum);// 3~5과목 까지만...
	if(subNum<6 && subNum>2){
	pScore = (int *)malloc(sizeof(int) * subNum);
	
	inputScore(subNum, pScore);  //갯수와 위치를 함께 보내자!!!
	hap = getHap(subNum,pScore);
	avg = getAvg(subNum,hap);
	printf("중간점검 >>>총점 : %d\n",hap);
	printf("중간 점검>>>평균 : %.1f\n",avg );

	puts("\n\n");

	puts("*** 성적표 출력 ***");
	// 1번 2번 3번 ..  n번  총점  평균
	// xx  xx  xx ..  xx   xxx   xx.x

	printScore(subNum,pScore,hap,avg);
	}else{
		puts("과목수를 잘못 입력하셨습니다.(3~5과목)");
		return main();
	}


	free(pScore);

}