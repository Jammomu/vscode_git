#include<stdio.h>
//보스레이드
//함수 이용(플레이어정보,보스정보,데미지계산)
//보스가 잡혔을 때 창 종료
//선택지 5개(공격,스킬사용,회피,아이템사용(개수제한있음),도망가기(도망갔을시 창종료)
//매턴마다 보스공격(단, 회피하면 다음턴 공격 안함)
//포인터 이용할 것
int hp(int *pPlayHP, int *pBossHP)
{
	*pPlayHP = 100; //플레이어 체력
	*pBossHP=200; //보스체력	
}

int Dam(int *pPlayD, int *pBossD)
{
	*pPlayD=5;	//플레이어 공격력
	*pBossD = 10;	//보스공격력
}


void main()
{
	//변수(선택지(choice),아이템(pos),회피(h),데미지(dam),
	int choice=0;
	int pos=10;
	int h=0;
	int dam=0;
	int skill1 = 0;
	int skill2 = 0;
	int playD = 0;
	int bossD = 0;
	int *pPD = &playD;
	int *pBD = &bossD;

	Dam(pPD, pBD);

	skill1 = playD + 5;
	skill2 = bossD - 5;

	printf("스킬1:%d, 스킬2: %d\n", skill1, skill2);

	puts("=======보스 레이드========");
	while(1){
		puts("보스가 나타났다!");
		puts("어떻게 하시겠습니까?");
		puts("1.공격하기   2.스킬사용");
		puts("3.아이템사용 4.회피하기\n5.도망가기");
		scanf("%d",&choice);
		if(choice==5){	//도망
			printf("도망가셨습니다. 게임을 종료합니다\n");
			return;
		}
		else if (choice < 6 && choice>0) {
			while (1)
			{
				switch (choice) {

				case 1:	//공격 
					break;
				case 2:		//스킬
					break;
				case 3:		//아이템사용
					break;
				case 4:		//회피
					break;
				}
			}
		}
	}
}
