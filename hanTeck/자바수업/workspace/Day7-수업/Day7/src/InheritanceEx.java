
// ����
class Dog{	
	String name;
	int age;
	
	// ��� 
	void cry() {}
}
class Cat{
	String name;
	int age;
	
	void cry() {}
}
class Chart{ // �⺻Ŭ����
			 
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

// �ڹٴ� ���߻�� X
// ����� ������ �θ� �Ѹ�
// �������̽���� ���� ����� �������� �ذ�

class WizWar extends War{
	
}

public class InheritanceEx {

	public static void main(String[] args) {
		// �⺻������ �ڹٴ� ObjectŬ������ �ڵ�������
		// ��ӹ޴´�.
		
		Wiz w1 = new Wiz();
		
		w1.hp = 1000;
		w1.mp = 1000;
		w1.id = "����";
		
		
		
		// ��� 
		
		// ���� Ŭ������ �����ؼ� ���ο� Ŭ������ �ۼ�
		// �� Ŭ������ ����� �ڼ����� ���踦 �ξ��ش�.
		// �θ�Ŭ����, ����Ŭ���� , �⺻Ŭ����
		// �ڽ�Ŭ����, ����Ŭ���� , �Ļ�Ŭ����
		// class Ŭ������ extends �θ�Ŭ������
		// �������� ���� : �޼���,���� ��! �ʱ�ȭ(������) ����
		// �ڽ�Ŭ������ �θ�Ŭ������ ��������� ���� ������.
		
		
		
		
	}
}
