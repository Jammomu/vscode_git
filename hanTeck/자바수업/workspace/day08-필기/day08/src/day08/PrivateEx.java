package day08;

class A{
	private int a;
	int b;
	
// 메서드를 이용해서 private한 변수에 접근
	int getA(){
		return a;
	}

}
class B{
	private String name;
	private int age;
	private double hei;

	public B(String name,int age, double hei) {
		this.name = name;
		this.age = age;
		this.hei = hei;
	}
	// 데이터 수정
	void setName(String name) {
		this.name = name;
	}
	void setAge(int age) {
		this.age = age;
	}
	void setHei(double hei) {
		this.hei = hei;
	}
	String getName() {
		return this.name;
	}
	int getAge() {
		return this.age;
	}
	double getHei() {
		return this.hei;
	}
}


public class PrivateEx {

	public static void main(String[] args) {
	
		A a1 = new A();
		a1.b = 5;
		
		System.out.println(a1.getA());
		
		
		//private
		// 선언 된 클래스에서만 접근이 가능하다
		// 외부 클래스에서는 접근이 불가능
		// 초기화 진행 x 데이터 변경 x 데이터를 확인 x
		// 자식클래스도 접근 불가능
	}

}
