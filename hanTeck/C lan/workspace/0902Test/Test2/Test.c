#include<stdio.h>
//�������̵�
//�Լ� �̿�(�÷��̾�����,��������,���������)
//������ ������ �� â ����
//������ 5��(����,��ų���,ȸ��,�����ۻ��(������������),��������(���������� â����)
//���ϸ��� ��������(��, ȸ���ϸ� ������ ���� ����)
//������ �̿��� ��
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
	//����(������(choice),������(pos),ȸ��(h),������(dam),
	int choice=0;
	int pos=10;
	int h=0;
	int dam=0;
	puts("=======���� ���̵�========");
	while(1){
		puts("������ ��Ÿ����!");
		puts("��� �Ͻðڽ��ϱ�?");
		puts("1.�����ϱ�   2.��ų���");
		puts("3.�����ۻ�� 4.ȸ���ϱ�\n5.��������");
		scanf("%d",&choice);
		if(choice==5){
			printf("�������̽��ϴ�. ������ �����մϴ�\n");
			return;
		}else if(choice>5 || choice<1){
			puts("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���");
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
