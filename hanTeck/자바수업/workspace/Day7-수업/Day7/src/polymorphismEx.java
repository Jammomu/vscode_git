
class Tv{
	
	boolean power = true;
	int channel;
	
	void power() {
		power = !power;
		//		 ���� �ƴϴ� -> ����
		//		 ������ �ƴϴ� -> ��
		// not ������ ( ! ) ~�ƴϴ�.
		System.out.println(power);
	}
	void channelUp() { channel++; }
	void channelDown() {channel--;}
}
class CaptionTv extends Tv{
	String txt;
	
	// ĸ�Ǳ��
	void caption() {}
}

class Cake{
	public Cake() {	System.out.println("�⺻����ũ");}
}

class CheeseCake extends Cake{
	public CheeseCake() {
		System.out.println("ġ������ũ");
	}
}
// ���� ġ������ũ
class sawbChCake extends CheeseCake{
	public sawbChCake() {
		System.out.println("����ġ������ũ");
	}
}
class BlueberryCake{
	public BlueberryCake() {
		System.out.println("��纣������ũ");
	}
}

public class polymorphismEx {
	public static void main(String[] args) {

		// ����ȯ �� ���ִ� ���� : 
		Cake c1 = new Cake();
		CheeseCake c2 = new CheeseCake();
		
		// ����ȯ�� ���ִ� ����: 
		// ���������� ������ ���ִ� ����:
		
		sawbChCake c3 = new sawbChCake();
		CheeseCake c4 = new sawbChCake();
		Cake c5 = new sawbChCake();
		
		// ������谡 ����.
		// ��� ���� �͵� �ƴϰ� �������� ���� X
//		BlueberryCake c6 = new sawbChCake();
		
		if(c3 instanceof Cake) {
			System.out.println("����");
		}else {
			System.out.println("�Ұ���");
		}
		if(c3 instanceof CheeseCake) {
			System.out.println("����");
		}else {
			System.out.println("�Ұ���");
		}
		if(c5 instanceof sawbChCake) {
			System.out.println("����");
		}else {
			System.out.println("�Ұ���");
		}
		
		if(c2 instanceof sawbChCake) {
			System.out.println("����");
		}else {
			System.out.println("�Ұ���");
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
////		t2.caption(); ����!
//		
//		
//		// instanceof������
//		// ���������� �����ϴ� �ν��Ͻ��� ���� Ÿ���� üũ�ϴ� ���
//		// instanceof�� �������� true�̸� �ش�Ÿ������ ����ȯ����
//		// false ����ȯ �Ұ���
//		// ��ü�� Ư�� Ŭ������ �������̽��� ���� ������ ��ü���� 
//		// �Ǻ��Ͽ� true , false������ ��ȯ�Ѵ�.
//		
//		// �������� instanceof Ŭ������(�������̽���)
//		
//		String oba = "ȫ�浿";
//		
//		
//		if(oba instanceof String) {
//			System.out.println("oba�� stringŬ������ ��ü�Դϴ�.");
//		}
//		
////		if(t1 instanceof String) {
////			System.out.println("oba�� stringŬ������ ��ü�Դϴ�.");
////		}
//		
//		if(t2 instanceof Tv) {
//			System.out.println(" �´�");
//		}else {
//			System.out.println("�ƴϴ�.");
//		}
//		
//		if(t2 instanceof Object) {
//			System.out.println(" �´�");
//		}else {
//			System.out.println("�ƴϴ�.");
//		}
//		
			
	}
}
