
// ��ܽ� ��� �����ϴ�.
class A{
	void show() {
		System.out.println("AŬ����");
	}
}

class B extends A{
	// �ڽ��� ���ο� ��� �߰��� ���ִ�.
	void show1() {
		System.out.println("BŬ����");
	}
}
class C extends B{
	
	void show2() {
		System.out.println("CŬ����");
	}	
}

public class InheritanceEx2 {

	public static void main(String[] args) {
		C c1 = new C();

		
		// ������ 
		// �⺻Ŭ������ �̿��ؼ� �پ��� ���·� ���ο�
		// Ŭ������ �������.
		
		// ������ ���ִ� ������ ������ ������������
		
	
	}
}
