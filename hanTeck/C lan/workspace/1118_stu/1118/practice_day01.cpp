/*
	�Ű������� ���޵� ���ڵ��� ��(sum)�� ���Ͽ�,
	1���� sum������ ��(sum2)�� ���ϰ�, 
	sum2�� ¦������ Ȧ������ ����ϴ� �Լ�

		- ��ȯŸ�� : void
		- �Ű������� �ٸ����Ͽ� �Լ��� 2�� �̻� �����ε�
			> ��, double(�Ǽ�)�� �Ű��������ϴ� �Լ� ����
			> �Ǽ��� �� sum������ �Ҽ����� ������ ������ ������ ���
*/

#include <iostream>
using namespace std;

//�޼��� ����
void Func(int a, int b);
void Func(double a, double b);

void main()
{
	Func(3, 4); // 3+4=7, 1~7������ ��=28, "¦��" ���
}

//�޼��� ����
void Func(int a, int b) {
	int sum = a + b;
	for (int i = 1; i < sum; i++;) {
		int sum2 = 0;
		sum2+=i;
		
	}
	if (sum2 % 2 == 0)	cout << sum2 << "�� ¦���Դϴ�!" << endl;
	else cout << sum2 << "�� Ȧ���Դϴ�!" << endl;
}
void Func(double a, double b) {

}