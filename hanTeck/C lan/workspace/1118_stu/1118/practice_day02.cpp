#include <iostream>

// 코드에 주석 달기

// 프로그램 해석
//  > 
//메서드 정의
void check_money( char* address, int &money );

void main()
{
	char *name	= new char[20]; //포인터배열 사용(이름)
	char *address = NULL; //포인터 변수 NULL 값초기화(주소)
	address = new char[40]; //초기화 후 포인터배열로
	int  money	= 0; //월급

	//동적할당 
	memset( name, 0, 20*sizeof(char) ); //name에 20개의 char 동적데이터 할당(20byte)?
	memset( address, 0, 40*sizeof(char) ); //address에 40개의 char 동적데이터 할당(40byte)?

	//입력문(이름과 주소 월급을 입력받아라)
	std::cin >> name >> address >> money;
	//메서드 콜
	check_money( address, money );
	//출력문(address에 살고 있는 name님의 월급은 money원 입니다.(문장의 끝))
	std::cout << address << "에 살고 있는 " << name << "님의 월급은 " << money << "원 입니다." << std::endl;

	//동적할당 데이터 삭제
	delete [] name;
	delete [] address;
}

//메서드 선언
void check_money( char* address, int &money )
{
	// strcmp : 문자열 비교 함수. 2개의 문자열을 비교하여 같으면 0이 반환된다.

	if ( strcmp(address, "서울시") == 0 ) // address의 값이 "서울시"와 같다면,
	{
		money *= 2; //money에 2곱하고 money에 다시 집어넣어라
	}
	else if ( strcmp(address, "경기도") == 0 ) // address의 값이 "경기도"와 같다면,
	{
		money *= 3; //money에 3곱하고 money에 다시 집어넣어라
	}
}
