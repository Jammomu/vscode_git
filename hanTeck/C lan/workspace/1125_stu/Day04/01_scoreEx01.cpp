#include <iostream>
using namespace std;

class Score
{
private: 
	int m_iKorScore;	// ��������
	int m_iEngScore;	// ��������
	int m_iMathScore;	// ��������
	int m_iTotalScore;	// ����
	double m_dAvg;		// ���

public:
	Score()
	{
		cout << "Score(), ��ü ���� �� ȣ��Ǵ� ������" << endl;
	}

	// ���� ��Ģ�̴�. �Լ� �̸��� Ŭ������� ������ '������'
	// ������ �̸��� ���� ������ '�Ҹ���'
	~Score()
	{
		cout << "~Score(), ������ �̸� �տ� ���� ������ �Ҹ���!" << endl;
		cout << "��ü�� �Ҹ�(����)�� �� �ڵ����� ȣ��Ǵ� �Լ�" << endl;
	}

	void SetKor( int iKor )
	{
		if( iKor < 0 || iKor > 100 )
		{
			iKor = 0;
		}

		m_iKorScore = iKor;
	}

	int GetKor() {	return m_iKorScore;	}
	void SetEng(int iEng)	{ m_iEngScore = iEng; }
	void SetMath(int iMath) { m_iMathScore = iMath; }
	int GetEng()	{ return m_iEngScore; }
	int GetMath()	{ return m_iMathScore; }

	int GetTotal()
	{
		m_iTotalScore = m_iKorScore + m_iEngScore + m_iMathScore;
		return m_iTotalScore;
	}

	double GetAvg()
	{
		m_dAvg = GetTotal() / 3.;
		return m_dAvg;
	}

	void PrintScore()
	{
		cout << "���� : " << GetTotal() << "��" << endl;
		cout << "��� : " << GetAvg() << "��" << endl;
	}
};

void main()
{
	cout << "main() �Լ� ����, ���α׷��� �����߽��ϴ�." << endl;

	Score hong;

	// �����Ҵ� (new)
	// �츮�� ���� delete ���� ������, �������� �ʴ´�.
	Score * lee = new Score;
	// new Score; �� ���� ��ü�� ���������,
	// ������ ������ ��ü�� �ٷ� �� �ֵ��� ���� �޴´�.
	//     Score hong;    ==   int a;    ������� ����(�����Ҵ�)�� ������ ���
	
	//	   Score * lee = new Score;     ==   int * p = new int;
	//     �����Ҵ�� ������ ������ ������ ���

	delete lee;

	cout << "main() �Լ� ����, �� ���α׷��� �����մϴ�." << endl;

	//�׳� ���� hong�� (�����Ҵ�) ����������
	//main �Լ��� ������ ��, �ڵ����� �Ҹ��� (�׷��� main ������ �Ҹ��ڰ� ȣ���)
	//lee�� '������ ����'�̴�. (Score Ÿ���� ��ü �ּҸ� ���常 �� ��)
	//lee�� main�Լ��� ���������� main�Լ� ���� �� ��������
	//�׷����� lee�� ������ �ּ��� '��ü'�� new�����ڵ� ������� ������
	//delete�� ���� �������� ������ �������� �ʴ´�.(delete ���ϸ� ��� ��������)

} // ������ ���α׷��� �����ϴ� ����! (�̶� main���� ���� �������� ���ŵȴ�.)

//���α׷��� �����ϸ�, �����Ҵ�/�����Ҵ� ���� ����
// �� ���α׷����� ���� �������� ��� ���ŵȴ�.
