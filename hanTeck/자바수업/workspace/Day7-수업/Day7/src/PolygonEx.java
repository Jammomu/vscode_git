
class AA{
	
	Object show() {
		System.out.println("AA클래스");
	}
}
class BB extends AA{
	void show1() {
		System.out.println("BB클래스");
	}	
}
public class PolygonEx {

	public static void main(String[] args) {
		
		BB b1 = new BB();
		b1.show();
		b1.show1();
		
		// 참조변수 : 부모명
		// 인스턴스 : 자식명
		
		AA b2 = new BB();
		b2.show();
		//b2.show1();
		
		Object b3 = new BB();
						
		// 다형성 
		// 여러가지 형태를 가질 수 있는 능력
		// 하나의 참조변수로 여러개의 인스턴스를 참조
		// 할 수있는 것
		
	}
}
