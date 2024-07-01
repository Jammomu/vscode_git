#include <iostream>
using namespace std;

class Score
{
private: 
	int m_iKorScore;	// 국어점수
	int m_iEngScore;	// 영어점수
	int m_iMathScore;	// 수학점수
	int m_iTotalScore;	// 총점
	double m_dAvg;		// 평균

public:
	Score()
	{
		cout << "Score(), 객체 생성 시 호출되는 생성자" << endl;
	}

	// 나는 규칙이다. 함수 이름이 클래스명과 같으면 '생성자'
	// 생성자 이름에 물결 붙으면 '소멸자'
	~Score()
	{
		cout << "~Score(), 생성자 이름 앞에 물결 붙으면 소멸자!" << endl;
		cout << "객체가 소멸(제거)될 때 자동으로 호출되는 함수" << endl;
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
		cout << "총점 : " << GetTotal() << "점" << endl;
		cout << "평균 : " << GetAvg() << "점" << endl;
	}
};

void main()
{
	cout << "main() 함수 시작, 프로그램이 시작했습니다." << endl;

	Score hong;

	// 동적할당 (new)
	// 우리가 직접 delete 하지 않으면, 지워지지 않는다.
	Score * lee = new Score;
	// new Score; 에 의해 객체가 만들어지고,
	// 포인터 변수가 객체를 다룰 수 있도록 대입 받는다.
	//     Score hong;    ==   int a;    만들어진 공간(정적할당)을 변수가 사용
	
	//	   Score * lee = new Score;     ==   int * p = new int;
	//     동적할당된 공간을 포인터 변수로 사용

	delete lee;

	cout << "main() 함수 종료, 곧 프로그램이 종료합니다." << endl;

	//그냥 만든 hong은 (정적할당) 지역변수임
	//main 함수가 종료할 때, 자동으로 소멸함 (그래서 main 끝날때 소멸자가 호출됨)
	//lee는 '포인터 변수'이다. (Score 타입의 객체 주소를 저장만 할 뿐)
	//lee도 main함수의 지역변수라서 main함수 끝날 떄 지워진다
	//그렇지만 lee가 지정한 주소의 '객체'는 new연산자도 만들었기 때문에
	//delete로 직접 제거하지 않으면 지워지지 않는다.(delete 안하면 계속 남아있음)

} // 실제로 프로그램이 종료하는 시점! (이때 main에서 만든 변수들이 제거된다.)

//프로그램이 종료하면, 동적할당/정적할당 구분 없이
// 이 프로그램에서 만든 공간들은 모두 제거된다.
