#include <stdio.h>
/*
	���ǹ� : if �׸��� switch ��!!!

		switch�� if ������
		switch�� break ���ο� ���� �������鼭 �������� ������ �����Ҽ� �ִ�.(���ߺб���)
		if(��������)

	switch(����,����)
	{
	case 1;
	case 2;
				break;
	case 3;


				break;
	case 4;
	case �����;

	default:
	
	}
*/
void main()
{
	// ���� ����
	// 1. ��� 2. ���� 3. ���� 4. ������
	int pick = 0;
	puts("1.���\n2.����\n3.����\n4.������\n");
	printf("���� ��ȣ ����: "); scanf("%d", &pick);

	switch(pick)
	{
	case 1:   //case ���� label �� ����� ����.  ���� ��� ����, ���Ļ�� ����
		puts("���");
		break;
	case 2:
		puts("����");
		break;
	case 3:
		puts("����");
		break;
	case 4:
		puts("������");
		break;
	
	default:  //case���ǿ� �ش� ������ ���� �� �����Ѵ�.
		puts("�߸��� ��ȣ");
	}

}