#include<stdio.h>
//�������̵�
//�Լ� �̿�(�÷��̾�����,��������,���������)
//������ ������ �� â ����
//������ 5��(����,��ų���,ȸ��,�����ۻ��(������������),��������(���������� â����)
//���ϸ��� ��������(��, ȸ���ϸ� ������ ���� ����)
//������ �̿��� ��


int Dam(int *pPlayD, int *pBossD) //���ݷ� �Լ�
{
	*pPlayD = 5;	//�÷��̾� ���ݷ�
	*pBossD = 10;	//�������ݷ�
	}

int Skill(int *pskill1, int *pskill2)//��ų ��� �Լ� (skill1 ���ݽ�ų , skill2 ��ų)
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
	int choice = 0; // ������
	int pos = 10; //����������(10)
	int playHP = 100; //�÷��̾� ü��(100)
	int bossHP = 200; //���� ü��(200)
	int skill = 0; //��ų ��� ������
	int playDam = 0; //�÷��̾� ������
	int bossDam = 0; //���� ������
	int *pPlayD = &playDam; //������ ����(�÷��̾� ������)
	int *pBossD = &bossDam; //������ ����(���� ������)
	
	Dam(pPlayD, pBossD);
							//skill(pSA, pSA);

	puts("=======���� ���̵�========");
	puts("������ ��Ÿ����!");
	while (1) {
		puts("��� �Ͻðڽ��ϱ�?");
		puts("1.�����ϱ�   2.��ų���");
		puts("3.�����ۻ��  4.��������");
		scanf_s("%d", &choice);
		if (choice == 4) {	//����
			puts("�������̽��ϴ�. ������ �����մϴ�");
			return;
		}
		else if (choice > 0 && choice < 4) {
			while (1)
			{
				switch (choice) {

				case 1:	//����

					bossHP = bossHP - playDam;
					printf("�����ϼ̽��ϴ�. �������� %d�������� �ݴϴ�.\n����ü��: %d\n", playDam, bossHP);
					playHP = playHP - bossDam;
					printf("������ �����Ͽ����ϴ�. %d���ظ� �Ծ����ϴ�.\n�÷��̾�ü��: %d\n", bossDam, playHP);
					break;
				case 2:;		//��ų

					int skill1 = 0, skill2 = 0; //��ų��
					int *pSkillA = &skill1;
					int *pSkillD = &skill2;

					Skill(pSkillA, pSkillD);

					puts("���ų�� ����Ͻðڽ��ϱ�?\n ��ų1: ���԰���, ��ų2: ���±�"); scanf_s("%d", &skill);

					if (skill == 1) {
						bossHP = bossHP - skill1;
						printf("��ų ���԰����� ����ϼ̽��ϴ�. %d �������� �ݴϴ�.\n����ü��: %d\n", skill1, bossHP);
						playHP = playHP - bossDam;
						printf("������ �����Ͽ����ϴ�. %d���ظ� �Ծ����ϴ�.\n�÷��̾�ü��: %d\n", bossDam, playHP);
					}
					else if (skill == 2) {
						playHP = playHP - skill2;
						printf("��ų ���±⸦ ����ϼ̽��ϴ� ������ �������� ���ư��ϴ�.\n ������ �����Ͽ����ϴ�. %d���ظ� �Ծ����ϴ�.\n�÷��̾� ü��: %d\n", skill2, playHP);
						bossHP = bossHP - playDam;
						printf("�����ϼ̽��ϴ� �������� %d�������� �ݴϴ�.\n����ü��: %d\n", playDam, bossHP);
					}
					else {
						puts("��ų�� �߸� ����ϼ̽��ϴ�");
					}
					break;
				case 3:		//�����ۻ��
					if (pos > 0) {
						pos--;
						playHP = playHP + 25;
						printf("������ ����ϼ̽��ϴ�. 25ü���� ȸ���մϴ�.\n�÷��̾� ü��: %d ���� ���� ����: %d\n", playHP, pos);
						playHP = playHP - bossDam;
						printf("������ �����Ͽ����ϴ�. %d���ظ� �Ծ����ϴ�.\n�÷��̾�ü��: %d\n", bossDam, playHP);
					}
					else {
						puts("���� ������ ���ڶ��ϴ�.");
						break;
					}
					break;
				default:  //�߸� ����
					puts("�߸������ϼ̽��ϴ�.");
					break;
				}
				if (bossHP <= 0) {  //���� ����
					puts("����������Ʈ�Ƚ��ϴ�.");
					return;
				}
				else if (playHP <= 0) {  //�÷��̾� ����
					puts("����� �׾����ϴ�");
					return;
				}
				break;
			}
		}
	}
}
