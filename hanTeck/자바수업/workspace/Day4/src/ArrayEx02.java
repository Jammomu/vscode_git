
public class ArrayEx02 {

	public static void main(String[] args) {
		// �迭 �ʱ�ȭ���
		// ���̸� ������ ������ �ڿ� �ִ� �Է°����� ������ Ȯ��
		// �ڵ������� �޸� ������ ����!
		
		int[] a1 = new int[] {10,20,30};
		int[] a2 = {100,200,300};
		
		System.out.println(a1);
		
		double[] a3 = {1.1,2.2,3.3};
		double[] a4 = new double[3];
		
		System.out.println(a4[0]);
		
		String[] a5 = {"ũ��","����","��Ƽ"};
				
		int[] a6 = new int[6];
		
				
		System.out.println(a6[0]);
		System.out.println(a6[1]);
		
		String[] a7 = {"�ź�","�̴�Ư����","����"};
		String[] a8 = new String[3];
		
		System.out.println(a8);
		System.out.println(a7);		
		
		//a8 = a7;
		// �ݺ����� �̿��ؼ� ���� ����
		
		a8[0] = a7[0];
		a8[1] = a7[1];
		a8[2] = a7[2];
					
		System.out.println(a8[0]);
		System.out.println(a7[0]);		
			
		
		// �迭���� 
		// ������ ������ �߰��ϰų� ���� ����.!
		// ArrayList , likedlist ��ü!
		
		// �迭�� �ڵ��ʱ�ȭ �ȴ�.
		// �⺻������ ������ �����ϴ� �ڷ��� int 
		// new ������ -> �޸𸮰����� �Ҵ��ϰ� �ּҸ� ��ȯ
		// �޸𸮿���
		// 1. �޼ҵ念�� (main .class)
		// 2. ��(heap)����
		//    ��κ��� �ڹ����α׷����� ���Ǵ� ��� �ν��Ͻ�����
		//	   ����Ǵ� ���� (��ü�������α׷����)
		//	  ���α׷��� �����ϰ� �ִ� ���� �޸𸮰����� �Ҵ�
		//   �ּҰ��� ��ȯ 
		// 3. stack���� 
		
		// ���� 
		// 1. �⺻�����͸� ����(�⺻�ڷ���)������
		// 2. �ּҸ� �����ϴ� ����������
		
		// �迭�� ���̸� Ȯ��
		// �迭��.����Ȯ���ϴ� �޼���
		// �迭�� ���̸� ���������� Ȯ��
		System.out.println(a8.length);
		
		// 1�����迭
			
	}
}
