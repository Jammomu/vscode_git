package day08;

class A{
	private int a;
	int b;
	
// �޼��带 �̿��ؼ� private�� ������ ����
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
	// ������ ����
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
		// ���� �� Ŭ���������� ������ �����ϴ�
		// �ܺ� Ŭ���������� ������ �Ұ���
		// �ʱ�ȭ ���� x ������ ���� x �����͸� Ȯ�� x
		// �ڽ�Ŭ������ ���� �Ұ���
	}

}
