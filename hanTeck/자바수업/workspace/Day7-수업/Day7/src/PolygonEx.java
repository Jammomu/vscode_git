
class AA{
	
	Object show() {
		System.out.println("AAŬ����");
	}
}
class BB extends AA{
	void show1() {
		System.out.println("BBŬ����");
	}	
}
public class PolygonEx {

	public static void main(String[] args) {
		
		BB b1 = new BB();
		b1.show();
		b1.show1();
		
		// �������� : �θ��
		// �ν��Ͻ� : �ڽĸ�
		
		AA b2 = new BB();
		b2.show();
		//b2.show1();
		
		Object b3 = new BB();
						
		// ������ 
		// �������� ���¸� ���� �� �ִ� �ɷ�
		// �ϳ��� ���������� �������� �ν��Ͻ��� ����
		// �� ���ִ� ��
		
	}
}
