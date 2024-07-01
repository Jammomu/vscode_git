#include <iostream>
using namespace std;

void main(){

	//할당이란?
	// 메모리에 사용할 공간을 만드는 행위
	int n = 0; //4byte 정수 저장 공간 생성 : 정적할당
	int arr[10] ={0, };//4byte*10개 = 40byte 생성 : 정적할당

	int count = 5; //입려된 값이라고 가정 5개의 공간을 만들고 싶다.
	//int arr2[count] = {0, }; //불가능! 배열 길이에 변수 사용 X
	// C언어 계열에서는 안됨!!(씨발 ㅠㅠ)

	// 이걸 할 수 있는게 동적할당 --> C언어에서는 malloc() 함수 -> c++이상에서는 안쓰인다.
	int *ptr = (int*)malloc(sizeof(int) *count);
	// (1) malloc() 함수로 4*5 = 20byte 공간을 만든다.
	// (2) 만들어진 공간을 사용할 수 있게, 시작 주소 값을 변환해준다.
	// (3) 반드시 포인터 변수가 있어야, 동적할당한 공간을 다룰 수 있다.
	//		- 정적할당은 해당 변수로 그냥 사용하면 됨
	ptr[0] = 10;
	cout << ptr[0] << endl;
	free(ptr); //동적할당한 공간은, free() 로 직접 소멸시켜줘야만 소멸된다.
			// 그러지 않으면 프로그램 종료될때까지 소멸되지 않는다.

	// C++ - new/delete 연산자
	int c = 10; // 4byte 공간 생성 및, 그 공간을 사용할 수 있는 이름(변수명)이 c이다.

	// new 에 의해 동적으로 만들어진 공간을 사용할 수 있게, 주소 값이 반환
	int *a = new int;
	*a = 20;
	cout << *a << endl;
	
	// 정적할당된 변수는 자동으로 공간이 소멸
	//		지역변수 : 해당 지역 { }이 끝나면 소멸

	// 동적할당은 자동으로 제거 되지 않음
//	{
//		int *b = new int;
//	}
	// 4byte 포인터변수 b는 제거가 된다. (지역이 끝나면서)
	// 동적할당된 공간은 남아있게 된다..
	
	//delete b; // 오류! 포인터 변수 b는 이미 제거된 상태
	// 절대 못 지우는 공간이 되어 버린다.. (접근 불가)

	int * pNum	= new int;		// 공간만 생성 (쓰레기 값)
	int * pNum2 = new int(5);	// 생성과 동시에 초기화

	*pNum = 4; // 만들어진 공간의 주소를 참조하여 정수 4대입
	cout << *pNum << endl;
	cout << *pNum2 << endl;

	delete pNum;
	delete pNum2;

	int num1 = 10;
	int num2(20); // 변수의 또다른 초기화 방법

	cout << num1 << ", " << num2 << endl;

	///////////////////////////////////////
	// 동적할당으로 여러 공간 다루기 (배열처럼)
	int *pArr1 = new int[5]; // int * 5개 ->20byte
	int *pArr2 = new int[count]; //변수 사용가능 (동적할당을 사용하는 이유)

	//초기화 되지않음
	//memset 으로 초기화 진행!
	// *memory setting(주소값,일괄적용될값,크기);
	memset(pArr1,0,5*sizeof(int));
	memset(pArr2,0,count*sizeof(int));

	for(int i = 0; i<count;i++){
		// 포인터변수로 배열의 인덱스를 사용하는 문법을 사용 가능
		//	배열명, 포인터변수명 --> 둘 다 동일하게 주소를 의미하는 이름
		cout <<(i+1)<<"번 값 : "<<pArr1[i]<<endl;

	}
	
	// 여러 공간을 동적할당한 경우,
	delete [] pArr1;
	delete [] pArr2;
	// 1개면		delete pNum1;
	// 여러개	delete [] pArr1;

	// 동적할당을 많이 쓰는 경우 : 문자열 다루기
	char * name	= NULL; // 포인터 변수는 NULL로 초기화!!
	int nameLen = 20;
	name = new char[nameLen+1]; // 널문자를 고려해서 1 더크게 !!
	// char name[20+1]; 이렇게 정적할당 한것과 동일하게 공간이 생성됨

	memset(name , 0, (nameLen+1)*sizeof(char)); //char는 1바이트라 생략가능

	cout << "이름입력 : ";
	cin >> name;
	cout << name << "님 환영합니다!" <<endl;
	delete [] name;

	//한글은 2바이트들어감
	// 배열크기 넉넉하게 만들어서 사용하면 되지 않나요?
	// -> 불필요한 공간이 생성되기 떄문에
	// 필요한 크기를 구해서 그만큼만 할당하여 사용한다.

	// ex) 특정 파일의 내용을 읽어오고 싶다.
	//	   파일 크기 구해서, +1 만큼 할당해서 사용 후 해제


}
