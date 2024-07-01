#include <stdio.h>
/*
1. 중세시대 시뮬레이션
2. 레벨/계급/직업 각각 포인터로 작업후 넘길것
3. 


*/
int start(int Ch)
{
	puts("==============Middle Age=================\n");
	puts("1.새로하기 2.이어하기 3.게임종료"); scanf_s("%d",Ch);

}
int jobPick(int jobPick,int pick,int jobStat[5])
{
	// jobStat[5] = {체력,힘,민첩,솜씨,지능);
	
	puts("직업을 선택해주세요.");
	puts("1.농부 2.대장장이 3.사냥꾼 4.채집가");	scanf_s("%d", &jobPick);
	switch (jobPick) {
	case 1:
		puts("농부는 농사를 짓고, 가축을키우는 직업입니다.");
		puts("농부로 선택하시겠습니까?\n1.예  2.아니오"); scanf_s("%d",&pick);
		if(pick == 1){
			puts("농부를 선택하셨습니다.");
			jobStat[5] = ( 14,15,8,8,4 );
		}
		else break;
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		puts("잘못된 선택지입니다");
		break;
	}
}
int load(int Test[5])
{
	printf("1.%d 2.%d 3.%d 4.%d 5.%d\n", Test[5]);
}
void main()
{
	int ch[5] = { 0, };
	int stat[5] = { 0, };
	
	while (1) {
		start(&ch[0]);	
		switch (ch[0]) {
		case 1:
			jobPick(&ch[1],&ch[2],&stat[5]); 
			printf("0.%d 1.%d 2.%d 3.%d 4.%d\n",);
			break;
		case 2:
			load(&stat[5]);
			break;
		case 3:
			puts("게임을 종료합니다.");
			return;
		default:
			puts("잘못선택하셨습니다.");
			break;
		}
	}
}