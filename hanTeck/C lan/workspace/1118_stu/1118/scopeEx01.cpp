#include <iostream>
using namespace std;

typedef struct _KOREA
{
// public: �� �����ֱ���!
	int value;
	void PrintValue(); // ����Լ� ����! (����/���� �и�)
} KOREA;

//KOREA ����ü�� �ɹ� �Լ��� PrintValue() �� '����'
void KOREA::PrintValue() //�Լ� �̸� �տ� '�ҼӸ��'
{

}

// �ڵ��� �帧 �ٱ� (�Լ� ��)�� ����� ���� = ��������
// ��� ��ġ������ ��� ����, ���α׷� ���� �� ����, ���� �� �Ҹ�
// ���ϱ� �ѵ�.. �ʹ� ���� ����ϸ� �ڵ尡 ��������

int value = 100;

void main()
{
	KOREA ko;
	ko.PrintValue();

	cout << value << endl;

	int value = 50; // ��������
	cout << value << endl; // �̸��� ���� ��, ���������� ���� ���ٵȴ�.
	cout << ::value << endl;

	// ���� �̸��� ���� ��, ���� ���� ã������ ������
	// ���� ���߿� ������� '��������'
	{
		int value = 30;
		cout << value << endl;
	}

}