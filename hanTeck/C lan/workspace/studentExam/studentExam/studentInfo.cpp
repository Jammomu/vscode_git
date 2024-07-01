#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
// 00고등학교 학생들의 정보등록
// 3개학년 3개반 반인원 10명 (총원 90명) //이건 그냥 배열로 처리하자
// 분류 가능해야함
// 국어 영어 수학점수 입력 (랜덤으로 돌림)
// 각 과목 점수와 총점과 평균 점수 출력 가능해야함
// 각학년 석차 별로 나열 가능해야함 ex) 1등 000 2등 000 3등 000....
//(학년별로 석차 나열 구현하면 반별로도 구현할것)
class student {
	char *pName;
	//int grade;	int cLass;	int number; // 수정해야될것(배열로처리)
	int kor;	int eng;	int math;
	int tot;	double avg;

public:
	student() {//기본 생성자
		pName = NULL;
		//grade = 0;  cLass = 0;  number = 0; //수정해야될것(배열로처리)
		kor = 0;	eng = 0;	math = 0;
		tot = kor + eng + math;	avg = tot / (double)3;
	}
	//필요한 함수들
	// 학생 정보출력 함수
	// 학년별로 석차 출력 함수(이거는 따로 함수로 빼야될듯)
	


};



void main() {
	student stu[3][3][10];
	int choose = 0;
	int g = 0;	int c = 0;	int n = 0; //학년,반,번호
	while (1) {
		cout << "===재수고등학교===" << endl;
		cout << "1. 학생정보등록" << endl;
		cout << "2. 학생정보출력" << endl;
		cout << "3. 학년별석차목록" << endl;
		cout << "4. 프로그램 종료" << endl;
		cout << "선택 : ";	cin >> choose;
		switch (choose) {
		case 1://정보등록
			cout << "학년 입력 : ";	cin >> g;
			if (g < 1 || g > 3) {
				cout << "잘못된 학년!" << endl;
				break;
			}
			cout << "반 입력 : ";	cin >> c;
			if (c < 1 || c > 3) {
				cout << "잘못된 반!" << endl;
				break;
			}
			cout << "번호 입력 : ";	cin >> n;
			if (n < 1 || n > 10) {
				cout << "잘못된 번호!" << endl;
				break;
			}
			stu[g][c][n] = student();
			break;
		case 2://정보출력

			break;
		case 3://학년별석차출력

			break;
		case 4://프로그램 종료
			cout << "프로그램 종료" << endl;
			return;
		default ://잘못된 선택지
			cout << "잘못된 선택지" << endl;
			break;
		}

	}

}
