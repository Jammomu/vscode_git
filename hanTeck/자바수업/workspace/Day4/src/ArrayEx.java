
public class ArrayEx {

	public static void main(String[] args) {
		// �迭 : ���� Ÿ���� ������� �̷���� ����
		// �迭 ����� ���
		// �ڷ���[] �迭�� = new �ڷ���[����];
		
		int num;
		// 3���� ������ �����ϴ� �迭 ����
		int[] Arr = new int[3];
		
		// �ε�����ȣ 0���� ����
		// �ε��� = ����-1 
		// �����
		// �迭��[index] = ��;
		// index ��ȣ�� ������ �����Ҽ��ִ�.
		// ������ �����ϰ� ������ ���굵 �����ϴ�.
		// �迭��[������];
		// �迭��[������+����];
		// ��! �Ǽ�X ,���� X
		
		Arr[0] = 1000;
		Arr[1] = 2000;
		Arr[2] = 3000;
		
		System.out.println(Arr[0]);
		System.out.println(Arr[1]);
		System.out.println(Arr[2]);
		
		// �迭�� �����ϸ� ������ �������� ����
		// �迭�� ������ ������ �����ϰ� ����
			
		int[] Arr2 = new int[5]; 
		
		// �Ǽ��� �����ϴ� 3���� �迭 ����
		double[] dArr = new double[3];
		
		dArr[0] = 1.1;
		dArr[1] = 1.2;
		dArr[2] = 1.3;
				
		System.out.println(dArr[0]);
		System.out.println(dArr[1]);
		System.out.println(dArr[2]);
		
		// ���ڿ��� �����ϴ� 3���� �迭�� ����
		String[] name = new String[3];
		
		name[0] = "����";
		name[1] = "���̼�";
		name[2] = "�Ƿη�";
		
		System.out.println(name[0]);
		System.out.println(name[1]);
		System.out.println(name[2]);
	}
}
