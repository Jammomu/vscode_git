#include <stdio.h>
#define STD_NUM 3
#define SUB_NUM 4

/*
	 2���� �迭����
		�ϰ�ó�� - for�� ������    �࿡��  ������ ����ȭ, ����ȭ �������� �ຯȭ

	�ຯȭ for��
		����ȭ for��

	2���� �迭->2�� for��
				
*/
void main()
{
	//3���� �л��� 4���� ����ô�.
	int i=0;  // row ��  �л�
	int j=0;  // col(oum)    ��(=�л�)����->����(0~3)��
	int arr[STD_NUM][SUB_NUM]={0};
	int arHap[STD_NUM] ={0};

	//�л� ���� 0~2 <3  
	for(i=0; i<STD_NUM; i++)
	{
		//���� ���� �Է�
		for(j=0; j<SUB_NUM; j++)
		{
			printf("%d�� �л� %d�� ���� : ", i+1, j+1);
			scanf("%d", &arr[i][j]);

			arHap[i] += arr[i][j];  //�� 0�ึ��(�л�����) ������
									//������ ����
		}
	}
	puts("=========== ���� ��� =============");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			/*
				��ȣ	��	��	��	�� �� ��
				1	x	x	x	x	x x
				2	x	x	x	x	x x
				3	x	x	x	x	x x

			*/

		}

	}

}