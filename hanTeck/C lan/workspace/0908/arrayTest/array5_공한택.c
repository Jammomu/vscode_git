#include <stdio.h>

void inputScore(int cnt, int *pAr)
{
	int i = 0;
	int hap =0;
	for(i=0; i<cnt; i++)
	{
		printf("%d��° ����������?\n",i+1); scanf_s("%d",pAr+i);
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
	return hap;  //������ ���Ͻ��� ����		
}

double getAvg(int cnt, int hap)
{
	return hap/(double)cnt;
}
void printScore(int cnt, int *pAr)
{
	//1��   2��	3��	4��	5�� ����	���
	int i = 0;
	int hap = 0;
	double avg = 0;
	for(i=0; i<cnt; i++){
		printf("%d�� ���� ���� : %d��\n",i+1 ,pAr[i]);
	}
	hap = getHap(cnt,pAr);
	avg = getAvg(cnt,hap);
	puts("");
	printf("����: %d  ���: %.lf\n",hap,avg);	
}

void main()
{
	int ar[] = {0};
	int cnt=0;
	
	//���� �޸� �Ҵ��� �Լ��� ������ ��!!!!
	cnt = sizeof(ar)/sizeof(int);// �迭����
	puts("�������?"); scanf_s("%d",&cnt); //3~5����
	if(cnt > 2 && cnt < 7){
	inputScore(cnt, ar);
	printScore(cnt, ar);
	}else{
		puts("�߸���");
		return main();
	}
}
