#include <stdio.h>
#include <string.h>
#include <stdlib.h> // ���� ���� �����޸� ��뿹��
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
	puts("1.�����ϱ� 2.�̾��ϱ� 3.��������"); scanf_s("%d", &ch);
	
	switch(ch)
	{
	case 1:
		player = pickJob();
		printf("����: %s  ü��: %d  ��: %d  ��ø: %d  �ؾ�: %d  ����: %d\n",
			player.jobName,player.hp,player.str,player.dex,player.tec,player.wiz);
		break;
	case 2:
		loadGame();
		break;
	case 3:
		puts("������ �����մϴ�");
		break;
	default:
		puts("�߸��� �Է��Դϴ�");
		break;
	}
}

pStat pickJob()
{
	pStat pick = { 0 };
	int jobPick = 0;
	puts("������ �������ּ���.");
	puts("1.��� 2.�������� 3.��ɲ� 4.ä����");	scanf_s("%d", &jobPick);
	switch (jobPick) {
	case 1:
		puts("��θ� �����ϼ̽��ϴ�.");
		puts("��δ� ��縦 ����, ������Ű��� �����Դϴ�.");
		strcpy_s(pick.jobName, "���"); 
		pick.hp = 14;
		pick.str = 15;
		pick.dex = 8;
		pick.tec = 8;
		pick.wiz = 4;
		break;
	case 2:
		puts("�������̸� �����ϼ̽��ϴ�.");
		puts("�������̴� ������ �����ϰ�, ������ �����ϴ� �����Դϴ�.");
		strcpy_s(pick.jobName, "��������"); 
		pick.hp = 15;
		pick.str = 16;
		pick.dex = 4;
		pick.tec = 10;
		pick.wiz = 4;
		break;
	case 3:
		puts("��ɲ۸� �����ϼ̽��ϴ�.");
		puts("��ɲ��� ���� ������ Ȱ�� ������ ����ϴ� �����Դϴ�.");
		strcpy_s(pick.jobName, "��ɲ�"); 
		pick.hp = 8;
		pick.str = 7;
		pick.dex = 15;
		pick.tec = 7;
		pick.wiz = 12;
		break;
	case 4:
		puts("ä������ �����ϼ̽��ϴ�.");
		puts("ä������ ���� ���� ���ʸ� ä���ϴ� �����Դϴ�.");
		strcpy_s(pick.jobName, "ä����"); 
		pick.hp = 6;
		pick.str = 8;
		pick.dex = 10;
		pick.tec = 15;
		pick.wiz = 10;
		break;
	default:
		puts("�߸��� �������Դϴ�");
		break;
	}
	return pick;
}

void loadGame()
{

}