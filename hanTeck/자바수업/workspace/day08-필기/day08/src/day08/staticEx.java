package day08;

class d1{
	static int a;
}

public class staticEx {
	public static void main(String[] args) {
		// static에 접근하는 방법은
		// 클래스명.static 변수명
		// 굳이 객체를 선언ㅇ하지 않아도 먼저 메모리 공간에 올라가 있는 변수기 때문에 접근이 가능하다.
		
		//static
		// 맴버 변수
		// -모든 인스턴스에 공통적으로 사용되는 변수
		// -변수를 선언하지 않아도 사용가능하다.
		// -클래스가 메모리에 생성된다.
		
		// 메서드
		// -인스턴스 생성하지 않아도 메서드 호출이 가능하다
		// -인스턴스 멤버들은 static메서드 내에서 사용할수없다.
		d1.a=13842;
		System.out.println(d1.a);
		
		
		// static == 공유폴더
		
		//메모리를 할당
		// 프로그램 시작 전 할당 메모리
		// 지역변수,static -> 컴파일시 메모리에 할당
		//
		
		// 프로그램을 시작하고 나서 할당 메모리
		// 런타임시 메모리 할당 -> heap
	}

}
