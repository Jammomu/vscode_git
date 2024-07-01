
// 동물
class Dog{	
	String name;
	int age;
	
	// 기능 
	void cry() {}
}
class Cat{
	String name;
	int age;
	
	void cry() {}
}
class Chart{ // 기본클래스
			 
	String id;
	int hp;
	int mp;
	
	void attack() {}	
}

class Wiz extends Chart{
			
}
class War extends Wiz{
		
}
class Arc{
			
}

// 자바는 다중상속 X
// 상속은 무조건 부모가 한명
// 인터페이스기능 다중 상속의 문제점을 해결

class WizWar extends War{
	
}

public class InheritanceEx {

	public static void main(String[] args) {
		// 기본적으로 자바는 Object클래스를 자동적으로
		// 상속받는다.
		
		Wiz w1 = new Wiz();
		
		w1.hp = 1000;
		w1.mp = 1000;
		w1.id = "설난";
		
		
		
		// 상속 
		
		// 기존 클래스를 재사용해서 새로운 클래스를 작성
		// 두 클래스를 조상과 자손으로 관계를 맺어준다.
		// 부모클래스, 상위클래스 , 기본클래스
		// 자식클래스, 하위클래스 , 파생클래스
		// class 클래스명 extends 부모클래스명
		// 물려받은 범위 : 메서드,변수 단! 초기화(생성자) 제외
		// 자식클래스는 부모클래스의 멤버개수가 적을 수없다.
		
		
		
		
	}
}
