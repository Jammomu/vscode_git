#include <iostream>

// �ڵ忡 �ּ� �ޱ�

// ���α׷� �ؼ�
//  > 
//�޼��� ����
void check_money( char* address, int &money );

void main()
{
	char *name	= new char[20]; //�����͹迭 ���(�̸�)
	char *address = NULL; //������ ���� NULL ���ʱ�ȭ(�ּ�)
	address = new char[40]; //�ʱ�ȭ �� �����͹迭��
	int  money	= 0; //����

	//�����Ҵ� 
	memset( name, 0, 20*sizeof(char) ); //name�� 20���� char ���������� �Ҵ�(20byte)?
	memset( address, 0, 40*sizeof(char) ); //address�� 40���� char ���������� �Ҵ�(40byte)?

	//�Է¹�(�̸��� �ּ� ������ �Է¹޾ƶ�)
	std::cin >> name >> address >> money;
	//�޼��� ��
	check_money( address, money );
	//��¹�(address�� ��� �ִ� name���� ������ money�� �Դϴ�.(������ ��))
	std::cout << address << "�� ��� �ִ� " << name << "���� ������ " << money << "�� �Դϴ�." << std::endl;

	//�����Ҵ� ������ ����
	delete [] name;
	delete [] address;
}

//�޼��� ����
void check_money( char* address, int &money )
{
	// strcmp : ���ڿ� �� �Լ�. 2���� ���ڿ��� ���Ͽ� ������ 0�� ��ȯ�ȴ�.

	if ( strcmp(address, "�����") == 0 ) // address�� ���� "�����"�� ���ٸ�,
	{
		money *= 2; //money�� 2���ϰ� money�� �ٽ� ����־��
	}
	else if ( strcmp(address, "��⵵") == 0 ) // address�� ���� "��⵵"�� ���ٸ�,
	{
		money *= 3; //money�� 3���ϰ� money�� �ٽ� ����־��
	}
}
