#include <stdio.h>
/*
	�迭�� ������

	�迭�� ��Ģ - �迭���� "������ ���" ��!!   p(%d, �迭)  �ּҰ��� ���Դ�!!!

	������ ���� = �迭��    :  �迭�� �ּҴϱ� �ٷ� ������ ������ ���� �� �ִ�.
*/
void main()
{
	int *pAr=0;
	int ar[3] = {10, 20, 30};
	int i=0;
	//�迭�� �����Ϳ� ���� �� �ִ�.
	pAr = ar;

	for(i=0; i<3; i++)
	{
		printf("������ pAr+%d:%d����, ar+%d:%d����\n", i, pAr+i, i, ar+i);
	}

	//  pAr�� 20�� ����� ����!!!
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