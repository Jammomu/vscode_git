
// 계단식 상속 가능하다.
class A{
	void show() {
		System.out.println("A클래스");
	}
}

class B extends A{
	// 자식은 새로운 기능 추가할 수있다.
	void show1() {
		System.out.println("B클래스");
	}
}
class C extends B{
	
	void show2() {
		System.out.println("C클래스");
	}	
}

public class InheritanceEx2 {

	public static void main(String[] args) {
		C c1 = new C();

		
		// 다형성 
		// 기본클래스를 이용해서 다양한 형태로 새로운
		// 클래스를 만들었다.
		
		// 접근할 수있는 범위를 가지고 참조변수선언
		
	
	}
}
