#include <stdio.h>
/*
1. �߼��ô� �ùķ��̼�
2. ����/���/���� ���� �����ͷ� �۾��� �ѱ��
3. 


*/
int start(int Ch)
{
	puts("==============Middle Age=================\n");
	puts("1.�����ϱ� 2.�̾��ϱ� 3.��������"); scanf_s("%d",Ch);

}
int jobPick(int jobPick,int pick,int jobStat[5])
{
	// jobStat[5] = {ü��,��,��ø,�ؾ�,����);
	
	puts("������ �������ּ���.");
	puts("1.��� 2.�������� 3.��ɲ� 4.ä����");	scanf_s("%d", &jobPick);
	switch (jobPick) {
	case 1:
		puts("��δ� ��縦 ����, ������Ű��� �����Դϴ�.");
		puts("��η� �����Ͻðڽ��ϱ�?\n1.��  2.�ƴϿ�"); scanf_s("%d",&pick);
		if(pick == 1){
			puts("��θ� �����ϼ̽��ϴ�.");
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
		puts("�߸��� �������Դϴ�");
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
			puts("������ �����մϴ�.");
			return;
		default:
			puts("�߸������ϼ̽��ϴ�.");
			break;
		}
	}
}