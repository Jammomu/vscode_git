#include<stdio.h>
//�������̵�
//�Լ� �̿�(�÷��̾�����,��������,���������)
//������ ������ �� â ����
//������ 5��(����,��ų���,ȸ��,�����ۻ��(������������),��������(���������� â����)
//���ϸ��� ��������(��, ȸ���ϸ� ������ ���� ����)
//������ �̿��� ��
int hp(int *pPlayHP, int *pBossHP)
{
	*pPlayHP = 100; //�÷��̾� ü��
	*pBossHP=200; //����ü��	
}

int Dam(int *pPlayD, int *pBossD)
{
	*pPlayD=5;	//�÷��̾� ���ݷ�
	*pBossD = 10;	//�������ݷ�
}


void main()
{
	//����(������(choice),������(pos),ȸ��(h),������(dam),
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

	printf("��ų1:%d, ��ų2: %d\n", skill1, skill2);

	puts("=======���� ���̵�========");
	while(1){
		puts("������ ��Ÿ����!");
		puts("��� �Ͻðڽ��ϱ�?");
		puts("1.�����ϱ�   2.��ų���");
		puts("3.�����ۻ�� 4.ȸ���ϱ�\n5.��������");
		scanf("%d",&choice);
		if(choice==5){	//����
			printf("�������̽��ϴ�. ������ �����մϴ�\n");
			return;
		}
		else if (choice < 6 && choice>0) {
			while (1)
			{
				switch (choice) {

				case 1:	//���� 
					break;
				case 2:		//��ų
					break;
				case 3:		//�����ۻ��
					break;
				case 4:		//ȸ��
					break;
				}
			}
		}
	}
}
