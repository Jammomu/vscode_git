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
	
		cout<<"Person(char * pName,int iAge)생성자 호출"<<endl;
		//(1) 복사하고 싶은 문자열의 길이를 구한다.
		int iNameLen = strlen(pName); //length
		//(2) 길이만큼 공간을 할당
		m_pName = new char[(iNameLen+1)*sizeof(char)]; 
		//(3) m_pName 포인터가 저장한 주소 값 (new로 할당한 공간의 시작 주소)
		memset(m_pName,0,(iNameLen+1)*sizeof(char) );
		//(4) 만들어놓은 공간(m_pName)에 전달된 문자열(pName)을 복사
		strcpy(this->m_pName,pName);
		m_iAge = iAge;
	}
	~Person(){
		cout<<"~Person() 소멸자 호출!!"<<endl;
		if(m_pName != NULL){
			cout<<"지워지는 객체명 "<<m_pName<<endl;
			delete [] m_pName; 
			
		}
	}	
	void showInfo(){
		cout << "[정보 출력]" << endl;
		if( m_pName == NULL )
		{
			cout << "정보가 없습니다." << endl;
			return; 
		}

		cout << "이름 : " << m_pName << "님" << endl;
		cout << "나이 : " << m_iAge << "세" << endl;
	}
	
};

void main(){

	//cout<<"step-1"<<endl;
	
	//Person han("공한택",23); //정적할당 (new를 사용 안함) --> main() 끝날때 자동 소멸
	//Person *lee = new Person("이소룡",304);//동적할당 (delete해야 소멸됨)
	//delete lee; // 배열(여러 개)이 아니기 때문에 [] 붙이지 않는다.
	
	cout <<"step-2"<<endl;

	//[객체배열 동적생성] --> new Person[개수]
	int count = 0;
	cout<<"생성할 객체 개수 입력 : ";
	cin>>count;
	Person * pAr = new Person[count]; //동적생성
	//정적 생성 : Person Arr[2]; 이런 형태였음
	// 동적으로 하는 이유? Person Arr[count]; 처럼 변수를 사용하지 못함!!!

	delete [] pAr;

	cout<<"step-3"<<endl;

	Person * pArr2[3]; //객체 배열 아님!
	//그냥 포인터 변수일뿐이다. 
	//포인터변수는 가리키는는 기능을 가진다!!(가리키는 곳이 없음)

	cout<<"step-4"<<endl;

	//각 포인터 변수가 저장할 객체를 따로 만들어줘야한다.
	pArr2[0] = new Person("rhaks",123);
	pArr2[1] = new Person("raks",23);
	pArr2[2] = new Person("rhks",12);

	for(int i = 0;i<3;i++){
		pArr2[i]->showInfo();
		delete pArr2[i];
	}

	cout<<"step-5"<<endl;
}