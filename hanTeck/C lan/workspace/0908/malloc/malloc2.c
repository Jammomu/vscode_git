#include <stdio.h>
#include <malloc.h>  //stdlib.h �� �ᵵ �ǰ� malloc.h �� �ᵵ �ȴ�.

void inputScore(int num, int *pS)
{
	int i=0;  //������ num�� �ִµ�.. �� ������ŭ for�� �������Ѵ�.
	
	puts("***���� �Է�***");
	for(i=0; i<num; i++)
	{
		printf("%d�� ���� : ", i+1); scanf_s("%d", pS+i);
	}
	puts("***���� �Է� ����***");

}
int getHap(int num, int *pS)
{
	int i=0;
	int hap=0;
	for(i=0; i<num; i++)
	{
		hap += pS[i];
	}
	return hap;  //������ ���Ͻ��� ����!
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
		printf("%d��° ���� ����: %d��   ",i+1,pS[i]);
	}
	puts("");
	printf("%d���� ���� ����: %d��  %d�� �������: %.lf��\n", num,hap,num,avg);
}
void main()
{
	//���ο��� heap�� �޸� �Ҵ� n�� �޴´�.
	// inputScore() �� �ּ� ������!
	// ������ �Է¹ް�  getHap() ���� ���� ���Ѵ�.
	// getHap()���� ���� ������ getAvg()���� ��� ���ϰ�
	// ����, ����, ��� �������!
	int *pScore=0;
	int subNum=0;  //�����!!!
	int hap=0;
	double avg = 0;
	printf("���� �� �Է� : "); scanf_s("%d", &subNum);// 3~5���� ������...
	if(subNum<6 && subNum>2){
	pScore = (int *)malloc(sizeof(int) * subNum);
	
	inputScore(subNum, pScore);  //������ ��ġ�� �Բ� ������!!!
	hap = getHap(subNum,pScore);
	avg = getAvg(subNum,hap);
	printf("�߰����� >>>���� : %d\n",hap);
	printf("�߰� ����>>>��� : %.1f\n",avg );

	puts("\n\n");

	puts("*** ����ǥ ��� ***");
	// 1�� 2�� 3�� ..  n��  ����  ���
	// xx  xx  xx ..  xx   xxx   xx.x

	printScore(subNum,pScore,hap,avg);
	}else{
		puts("������� �߸� �Է��ϼ̽��ϴ�.(3~5����)");
		return main();
	}


	free(pScore);

}