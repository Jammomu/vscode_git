#include<stdio.h>
//보스레이드
//함수 이용(플레이어정보,보스정보,데미지계산)
//보스가 잡혔을 때 창 종료
//선택지 5개(공격,스킬사용,회피,아이템사용(개수제한있음),도망가기(도망갔을시 창종료)
//매턴마다 보스공격(단, 회피하면 다음턴 공격 안함)
//포인터 이용할 것
int boss(int bossD, int bossHP)
{
	bossHP=200;
	bossD=10;
}

int player(int playD, int playHP)
{
	playHP=100;
	playD=5;
}

void main()
{
	//변수(선택지(choice),아이템(pos),회피(h),데미지(dam),
	int choice=0;
	int pos=10;
	int h=0;
	int dam=0;
	puts("=======보스 레이드========");
	while(1){
		puts("보스가 나타났다!");
		puts("어떻게 하시겠습니까?");
		puts("1.공격하기   2.스킬사용");
		puts("3.아이템사용 4.회피하기\n5.도망가기");
		scanf("%d",&choice);
		if(choice==5){
			printf("도망가셨습니다. 게임을 종료합니다\n");
			return;
		}else if(choice>5 || choice<1){
			puts("잘못입력하셨습니다. 다시 입력해주세요");
			break;
		}
		
		while(1)
		{
			switch(choice){

			case 1: 
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			}
		}
	}
}
