#include <stdio.h>

void inputScore(int cnt, int *pAr)
{
	int i = 0;
	int hap =0;
	for(i=0; i<cnt; i++)
	{
		printf("%d번째 과목점수는?\n",i+1); scanf_s("%d",pAr+i);
	}
}
int getHap(int cnt, int *pAr)
{
	int i=0;
	int hap=0;
	for(i=0; i<cnt; i++)
	{
		hap += pAr[i];
	}
	return hap;  //총합을 리턴시켜 주자		
}

double getAvg(int cnt, int hap)
{
	return hap/(double)cnt;
}
void printScore(int cnt, int *pAr)
{
	//1번   2번	3번	4번	5번 총점	평균
	int i = 0;
	int hap = 0;
	int avg = 0;
	for(i=0; i<cnt; i++){
		printf("%d번 과목 점수 : %d점\n",i+1 ,pAr[i]);
	}
	hap = getHap(cnt,pAr);
	avg = getAvg(cnt,hap);
	puts("");
	printf("총점: %d  평균: %d\n",hap,avg);	
}

void main()
{
	int ar[6] = {0};
	int cnt=0;
	
	//동적 메모리 할당의 함수를 참조할 것!!!!
	//cnt 담아 볼것.. 어디에?
	cnt = sizeof(ar)/sizeof(int);// 배열갯수
	puts("과목수는?"); scanf_s("%d",&cnt); //3~5과목
	if(cnt > 2 && cnt < 6){
	inputScore(cnt, ar);
	printScore(cnt, ar);
	}else{
		puts("잘못됨");
		return main();
	}
}
