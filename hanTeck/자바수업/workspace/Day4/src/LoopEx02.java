import java.util.Scanner;

public class LoopEx02 {

	public static void main(String[] args) {
		// ���� ���ϴ� ������� �ݺ�
		Scanner input = new Scanner(System.in);
		
		// Ƚ���Է�: 2
		// �̼���
		// �̼���
		
		System.out.print("Ƚ��>");
		int s = input.nextInt();
		
		int a = 1;
		
		while(a <= s) {
			System.out.println("�̼���");
			a++;
		}
		
		// ���ѹݺ� 
//		while(true) {
//			System.out.println("�����!");
//		}
		//System.out.println("�ݺ�����!");
		
		// ������ ���������� ��� �Է� �޴ٰ�
		// 0�� �Է��ϸ� �ݺ����� �����ϴ� ���� �ۼ��ϼ���
		
		while(true) {
			System.out.print("����>");
			int b = input.nextInt();
			
			if(b == 0) {
				break;
			}			
		}	
	}
	// ������ ���������� �Է¹޴ٰ� 
	// 5�� ����� 3�� �ԷµǸ� �ݺ����� ���ߴ� ���α׷�
	// �ۼ��ϼ���
	
	// ���۰��� 1���� ���� �Է��� Ƚ�������� 
	// ���� ���ϼ���
	
	// ������ ��� �Է� �޴ٰ� ������ 100�� ������
	// �ݺ����� ���߰� ���� ���� ����ϼ���
	
	// ��»���
	// ���ݱ��� �Էµ� ���ڵ��� ������ *** �Դϴ�.
	}
