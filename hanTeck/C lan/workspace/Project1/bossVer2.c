#include<stdio.h>
//보스레이드
//함수 이용(플레이어정보,보스정보,데미지계산)
//보스가 잡혔을 때 창 종료
//선택지 5개(공격,스킬사용,회피,아이템사용(개수제한있음),도망가기(도망갔을시 창종료)
//매턴마다 보스공격(단, 회피하면 다음턴 공격 안함)
//포인터 이용할 것
//ver2 스텟들 공식으로 만들것
//level 시스템 넣을것(level(단계), stat)
//랭킹 시스템(아직 모름)(인터넷에서 찾아볼것)
//반복되는 것들 다 함수로 넣을것
//상점 시스템 넣을것(골드,물약)
int Level()
{

}


int Dam(int *pPlayD, int *pBossD) //공격력 함수
{
	int level = 0;
	int stat = 0;
	*pPlayD = 5+(stat*2);	//플레이어 공격력
	*pBossD = 10+(2*level);	//보스공격력
}

int Skill(int *pskill1, int *pskill2)//스킬 사용 함수 (skill1 공격스킬 , skill2 방어스킬)
{
	int playD = 0;
	int bossD = 0;
	int *pPD = &playD;
	int *pBD = &bossD;

	Dam(pPD, pBD);

	*pskill1 = playD + 6;
	*pskill2 = bossD - 5;



}

void main()
{
	int stat = 0;
	int life = 1;
	int choice = 0; // 선택지
	int pos = 10; //아이템포션(10)
	int playHP = 100; //플레이어 체력(100)
	int bossHP = 200; //보스 체력(200)
	int skill = 0; //스킬 사용 선택지
	int playDam = 0; //플레이어 데미지
	int bossDam = 0; //보스 데미지
	int *pPlayD = &playDam; //포인터 변수(플레이어 데미지)
	int *pBossD = &bossDam; //포인터 변수(보스 데미지)
	int level = 0; // 레벨 단계
	int mChoice = 0;
	Dam(pPlayD, pBossD);
	//skill(pSA, pSA);

	puts("=======보스 레이드========");
	
	while (1) {
		/*if (level > 0) {
			puts("마을입니다. 어디로 갈까요?");
			puts("1.잡화상점  2.장비상점");
			puts("3.보스도전 4.나가기"); scanf("%d", &mChoice);

		}*/
			puts("보스가 나타났다!");
			puts("어떻게 하시겠습니까?");
			puts("1.공격하기   2.스킬사용");
			puts("3.아이템사용  4.도망가기");
			scanf_s("%d", &choice);
		
		if (choice == 4) {	//도망
			puts("도망가셨습니다. 게임을 종료합니다");
			return;
		}
		else if (choice > 0 && choice < 4) {
			while (1)
			{
				switch (choice) {

				case 1:	//공격

					bossHP = bossHP - playDam;
					printf("공격하셨습니다. 보스에게 %d데미지를 줍니다.\n보스체력: %d\n", playDam, bossHP);
					playHP = playHP - bossDam;
					printf("보스가 공격하였습니다. %d피해를 입었습니다.\n플레이어체력: %d\n", bossDam, playHP);
					break;
				case 2:;		//스킬

					int skill1 = 0, skill2 = 0; //스킬들
					int *pSkillA = &skill1;
					int *pSkillD = &skill2;

					Skill(pSkillA, pSkillD);

					puts("어떤스킬을 사용하시겠습니까?\n 스킬1: 씨게공격, 스킬2: 살살맞기"); scanf_s("%d", &skill);

					if (skill == 1) {
						bossHP = bossHP - skill1;
						printf("스킬 씨게공격을 사용하셨습니다. %d 데미지를 줍니다.\n보스체력: %d\n", skill1, bossHP);
						playHP = playHP - bossDam;
						printf("보스가 공격하였습니다. %d피해를 입었습니다.\n플레이어체력: %d\n", bossDam, playHP);
					}
					else if (skill == 2) {
						playHP = playHP - skill2;
						printf("스킬 살살맞기를 사용하셨습니다 선공이 보스에게 돌아갑니다.\n 보스가 공격하였습니다. %d피해를 입었습니다.\n플레이어 체력: %d\n", skill2, playHP);
						bossHP = bossHP - playDam;
						printf("공격하셨습니다 보스에게 %d데미지를 줍니다.\n보스체력: %d\n", playDam, bossHP);
					}
					else {
						puts("스킬을 잘못 사용하셨습니다");
					}
					break;
				case 3:		//아이템사용
					if (pos > 0) {
						pos--;
						playHP = playHP + 25;
						printf("포션을 사용하셨습니다. 25체력을 회복합니다.\n플레이어 체력: %d 남은 포션 개수: %d\n", playHP, pos);
						playHP = playHP - bossDam;
						printf("보스가 공격하였습니다. %d피해를 입었습니다.\n플레이어체력: %d\n", bossDam, playHP);
					}
					else {
						puts("포션 개수가 모자랍니다.");
						break;
					}
					break;
				default:  //잘못 선택
					puts("잘못선택하셨습니다.");
					break;
				}
				if (bossHP <= 0) {  //보스 죽음(단계 클리어, 레벨업)
					level++;
					stat=stat+3;
					puts("보스를쓰러트렸습니다.");
					puts("Level up!\n1.공격력 2.체력 3.스킬");
					
					
					break;
				}
				else if (playHP <= 0) {  //플레이어 죽음(랭킬 반영 아직 못함)
					puts("당신은 죽었습니다");
					life--;
					break;
				}

				break;
			}
		}
		
		
	}
	
}
