#include <iostream>
using namespace std;

//구조체는 public으로 만들어짐
//클래스는 private으로 만들어짐
class Person{//'사람'이라는 개념을 클래스로 정의하여, 객체를 만들어서 다루고 싶다!
	
	char * m_pName; //이름의 길이가 사람마다 다를 수 있다.(글자 수)
	int	   m_iAge;

public:
	Person() {
		//초기화 코드는 필수이다!!
		cout<<"Person() 생성자 호출"<<endl;
		m_pName = NULL;
		m_iAge = 0;
	} //객체를 그냥 만들것을 대비한 기본생성자
	Person(char * pName,int iAge){
		//pName 포인터 변수는 '주소 값'을 저장하는 변수이다.
		//"공한택"이라는 문자열이 main() 에서 만들어졌고, (생성자 호출시점)
		// 그 문자열의 주소 값을 저장한다. (이 값을 m_pName에 복사해줄 예정)
		cout<<"Person(char * pName,int iAge)생성자 호출"<<endl;
		//(문자열을 복사하는 코드 - 4단계) --> C언어 계열의 기본방식
		//(1) 복사하고 싶은 문자열의 길이를 구한다.
		int iNameLen = strlen(pName); //length
		//(2) 길이만큼 공간을 할당
		m_pName = new char[(iNameLen+1)*sizeof(char)]; //+1은 null문자 공간
		//원래 sizeof(자료형) 을 해줘야 하지만 char는 1byte라서 생략해도 무관함.
		// int 4개 공간을 사용하고 싶다면 4byte *4개 = 16byte가 필요함
		//	>new int[4*sizeof(int)];
		//(3) m_pName 포인터가 저장한 주소 값 (new로 할당한 공간의 시작 주소)
		//	초기화 해준다.(안해도 상관은 없는데 정말 중요한 작업!!)
		memset(m_pName,0,(iNameLen+1)*sizeof(char) ); //메모리 세팅
		//(100번지,모두0으로,크기)
		//(4) 만들어놓은 공간(m_pName)에 전달된 문자열(pName)을 복사
		strcpy(this->m_pName,pName); //string copy
		m_iAge = iAge;
	}
	//객체가 생성할때마다 소멸자 필요
	//객체가 소멸할때 지워줘야겠다!!
	~Person(){
		//아주 가끔(말도 안되는 확률) new로 할당하지 못하는 경우도 있다.
		// -> 다른 프로그램 영향,시스템(os)의 문제
		if(m_pName != NULL) delete [] m_pName; 
	}
	
	void showInfo(){
		cout << "[정보 출력]" << endl;
		if( m_pName == NULL )
		{
			cout << "정보가 없습니다." << endl;
			return; // 함수 수행 종료
		}

		cout << "이름 : " << m_pName << "님" << endl;
		cout << "나이 : " << m_iAge << "세" << endl;
	}
	
};

void main(){

	Person taek("공한택",23); //생성자를 통해 값을 전달하여 맴버변수를 세팅
	taek.showInfo();

	Person lee;
	lee.showInfo();

	cout<<"==================================="<<endl;

	//객체배열
	// 동일한 객체들을 여러 개 다루겠다!
	// 객체배열을 사용할때 기본생성자가 반드시 필요하다!!
	//	사용할려고 한다면 할 수는 있지만 굳이 쓸 필요없다(배열이 만약 100개라면?)
	// > 배열 : 같은 타입의 공간을 여러 개 만든다.

	// [객체를 배열로 만들 때, 초기값 지정 (1)]
	//		(1) private이기 때문에, 외부에서 접근 불가능
	//		(2) 생성자와 소멸자가 없어야 한다. (구조체처럼 클래스를 만들어야한다.)
	//			> 생성자,소멸자 개념은 '클래스'에만 존재한다.
	
	// 결론 : 이렇게 초기화 하지 않는다. (굳이 왜??)
	//Person pArr[2] = { {"홍길동",20}, {"임꺽정",21} };

	// [객체를 배열로 만들 때, 초기값 지정 (2)]

	 //기본생성자가 호출되는 배열!!(초기화 작업은 생성자에서 처리)
	//각개체별로 생성자를 만들어준다!!
	

}