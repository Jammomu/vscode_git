
public class Do_WhileEx {

	public static void main(String[] args) {
		// while() ���� -> ����
		// do~while() ���� �ѹ� �����ϰ� -> ����
//		do {
//			//���ΰ�� ����;
//		}while(���ǽ�);
		
		int i = 1;
		
		while( i < 1) {
			System.out.println("while����");
		}
		
		i = 0;
		
		do {
			System.out.println("do~while ����");
			i++;
		}while(i < 1);
		// �޴� ùȭ�� (������ �ѹ��� ��ɹ��� �����ؾߵɶ� ���)
		
		// 1~5���� ���
		int a1 = 1;
		
		do {
			System.out.println(a1);
			a1++;
		}while(a1<6);
		
		// for�� while�����ϴ� ��� �Ȱ���!
		// ���� ����ϴ� ���� �ٸ���!
		// for ���Ѱ��� : while �ڵ带 �о�� �������� �ʹ� ������
	}
}
