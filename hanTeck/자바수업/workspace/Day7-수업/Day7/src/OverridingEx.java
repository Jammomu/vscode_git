
class Point{
	// 점 위치를 표시하는 클래스
	int x,y;
	
	void getLocation(){
		System.out.println("x:"+ x +"y"+ y);
	}		
}

class Point3D extends Point{
	
	int z;
	
	@Override
	void getLocation() {
		System.out.println(x+":"+y+":"+z);
	}	
}

class Shape{
	
	int xpos;
	int ypos;
	int w;  //너비

	void draw() {
		System.out.println("그린다.");
	}
}

class Line extends Shape{
	
	@Override
	void draw() {
		System.out.println("선을 그린다.");
	}	
}

class Rect extends Shape{
	
	@Override
	void draw() {
		System.out.println("사각형그린다.");
	}	
}

class Parent{
	void a() {}	
}

class child extends Parent{
	
	void a() { // 오버라이딩
		System.out.println("부모껏!");
	}
	void a(int a) { // 오버로딩
		System.out.println("부모나이:");
	}	
	
	void b() {
		System.out.println("자식");
	}
	void b(int a) {
		System.out.println("자식나이");
	}
	
	void b(byte a) {
		System.out.println("자식나이");
	}	
}

public class OverridingEx {

	public static void main(String[] args) {
		Point3D p1 = new Point3D();
		p1.getLocation();		
		
		// 오버라이딩 
		// 부모한테 받은 메서드의 내용을 자식클래스에 
		// 맞게 재정의 (다시 정의하는것)

		//오버라이딩 조건
		// 선언부 같아야된다.(이름,매개변수,리턴(반환))
		// 접근제어자를 좁은 범위로 변경할 수없다.
	}
}
