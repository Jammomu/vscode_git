
class Tv{
	
	boolean power = true;
	int channel;
	
	void power() {
		power = !power;
		//		 참이 아니다 -> 거짓
		//		 거짓이 아니다 -> 참
		// not 연산자 ( ! ) ~아니다.
		System.out.println(power);
	}
	void channelUp() { channel++; }
	void channelDown() {channel--;}
}
class CaptionTv extends Tv{
	String txt;
	
	// 캡션기능
	void caption() {}
}

class Cake{
	public Cake() {	System.out.println("기본케이크");}
}

class CheeseCake extends Cake{
	public CheeseCake() {
		System.out.println("치즈케이크");
	}
}
// 딸기 치즈케이크
class sawbChCake extends CheeseCake{
	public sawbChCake() {
		System.out.println("딸기치즈케이크");
	}
}
class BlueberryCake{
	public BlueberryCake() {
		System.out.println("블루베리케이크");
	}
}

public class polymorphismEx {
	public static void main(String[] args) {

		// 형변환 할 수있는 개수 : 
		Cake c1 = new Cake();
		CheeseCake c2 = new CheeseCake();
		
		// 형변환할 수있는 개수: 
		// 참조변수로 선언할 수있는 개수:
		
		sawbChCake c3 = new sawbChCake();
		CheeseCake c4 = new sawbChCake();
		Cake c5 = new sawbChCake();
		
		// 상관관계가 없다.
		// 상속 받은 것도 아니고 참조변수 선언 X
//		BlueberryCake c6 = new sawbChCake();
		
		if(c3 instanceof Cake) {
			System.out.println("가능");
		}else {
			System.out.println("불가능");
		}
		if(c3 instanceof CheeseCake) {
			System.out.println("가능");
		}else {
			System.out.println("불가능");
		}
		if(c5 instanceof sawbChCake) {
			System.out.println("가능");
		}else {
			System.out.println("불가능");
		}
		
		if(c2 instanceof sawbChCake) {
			System.out.println("가능");
		}else {
			System.out.println("불가능");
		}
		
		
		
		
		
		
		
		//		
//		CaptionTv t1 = new CaptionTv();
//		t1.caption();
//		t1.channelUp();
//		t1.power();
//		
//		Tv t2 = new CaptionTv();
//		t2.channelDown();
//		t2.power();
//		t2.channelUp();
////		t2.caption(); 에러!
//		
//		
//		// instanceof연산자
//		// 참조변수가 참조하는 인스턴스의 실제 타입을 체크하는 경우
//		// instanceof의 연산결과가 true이면 해당타입으로 형변환가능
//		// false 형변환 불가능
//		// 객체가 특정 클래스나 인터페이스로 부터 생성된 객체인지 
//		// 판별하여 true , false값으로 반환한다.
//		
//		// 참조변수 instanceof 클래스명(인터페이스명)
//		
//		String oba = "홍길동";
//		
//		
//		if(oba instanceof String) {
//			System.out.println("oba는 string클래스의 객체입니다.");
//		}
//		
////		if(t1 instanceof String) {
////			System.out.println("oba는 string클래스의 객체입니다.");
////		}
//		
//		if(t2 instanceof Tv) {
//			System.out.println(" 맞다");
//		}else {
//			System.out.println("아니다.");
//		}
//		
//		if(t2 instanceof Object) {
//			System.out.println(" 맞다");
//		}else {
//			System.out.println("아니다.");
//		}
//		
			
	}
}
