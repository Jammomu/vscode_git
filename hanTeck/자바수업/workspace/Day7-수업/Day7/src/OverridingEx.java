
class Point{
	// �� ��ġ�� ǥ���ϴ� Ŭ����
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
	int w;  //�ʺ�

	void draw() {
		System.out.println("�׸���.");
	}
}

class Line extends Shape{
	
	@Override
	void draw() {
		System.out.println("���� �׸���.");
	}	
}

class Rect extends Shape{
	
	@Override
	void draw() {
		System.out.println("�簢���׸���.");
	}	
}

class Parent{
	void a() {}	
}

class child extends Parent{
	
	void a() { // �������̵�
		System.out.println("�θ�!");
	}
	void a(int a) { // �����ε�
		System.out.println("�θ���:");
	}	
	
	void b() {
		System.out.println("�ڽ�");
	}
	void b(int a) {
		System.out.println("�ڽĳ���");
	}
	
	void b(byte a) {
		System.out.println("�ڽĳ���");
	}	
}

public class OverridingEx {

	public static void main(String[] args) {
		Point3D p1 = new Point3D();
		p1.getLocation();		
		
		// �������̵� 
		// �θ����� ���� �޼����� ������ �ڽ�Ŭ������ 
		// �°� ������ (�ٽ� �����ϴ°�)

		//�������̵� ����
		// ����� ���ƾߵȴ�.(�̸�,�Ű�����,����(��ȯ))
		// ���������ڸ� ���� ������ ������ ������.
	}
}
