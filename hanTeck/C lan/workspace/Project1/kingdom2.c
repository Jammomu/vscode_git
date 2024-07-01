#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 아직 미정 동적메모리 사용예정
typedef struct PlayerStat
{
	char jobName[40];
	int hp;
	int str;
	int dex;
	int tec;
	int wiz;

} pStat;

pStat pickJob();
void loadGame();

void main()
{
	pStat player = { 0 };
	int ch = 0;
	puts("==============Middle Age=================\n");
	puts("1.새로하기 2.이어하기 3.게임종료"); scanf_s("%d", &ch);
	
	switch(ch)
	{
	case 1:
		player = pickJob();
		printf("직업: %s  체력: %d  힘: %d  민첩: %d  솜씨: %d  지혜: %d\n",
			player.jobName,player.hp,player.str,player.dex,player.tec,player.wiz);
		break;
	case 2:
		loadGame();
		break;
	case 3:
		puts("게임을 종료합니다");
		break;
	default:
		puts("잘못된 입력입니다");
		break;
	}
}

pStat pickJob()
{
	pStat pick = { 0 };
	int jobPick = 0;
	puts("직업을 선택해주세요.");
	puts("1.농부 2.대장장이 3.사냥꾼 4.채집가");	scanf_s("%d", &jobPick);
	switch (jobPick) {
	case 1:
		puts("농부를 선택하셨습니다.");
		puts("농부는 농사를 짓고, 가축을키우는 직업입니다.");
		strcpy_s(pick.jobName, "농부"); 
		pick.hp = 14;
		pick.str = 15;
		pick.dex = 8;
		pick.tec = 8;
		pick.wiz = 4;
		break;
	case 2:
		puts("대장장이를 선택하셨습니다.");
		puts("대장장이는 광석을 제련하고, 도구를 제작하는 직업입니다.");
		strcpy_s(pick.jobName, "대장장이"); 
		pick.hp = 15;
		pick.str = 16;
		pick.dex = 4;
		pick.tec = 10;
		pick.wiz = 4;
		break;
	case 3:
		puts("사냥꾼를 선택하셨습니다.");
		puts("사냥꾼은 여러 도구와 활을 가지고 사냥하는 직업입니다.");
		strcpy_s(pick.jobName, "사냥꾼"); 
		pick.hp = 8;
		pick.str = 7;
		pick.dex = 15;
		pick.tec = 7;
		pick.wiz = 12;
		break;
	case 4:
		puts("채집가를 선택하셨습니다.");
		puts("채집가는 여러 재료와 약초를 채집하는 직업입니다.");
		strcpy_s(pick.jobName, "채집가"); 
		pick.hp = 6;
		pick.str = 8;
		pick.dex = 10;
		pick.tec = 15;
		pick.wiz = 10;
		break;
	default:
		puts("잘못된 선택지입니다");
		break;
	}
	return pick;
}

void loadGame()
{

}