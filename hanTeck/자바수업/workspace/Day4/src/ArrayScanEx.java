import java.util.Scanner;

public class ArrayScanEx {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		// ������ �Է��ؼ� 5���� ������ ��������
		int[] a = new int[5];
		int num = 0;
		
		while(num<5) {
			System.out.print((num+1)+"�� ����>");
			a[num] = sc.nextInt();
			num++;
		}
		num = 0;
		while(num<5) {
			System.out.print((num+1)+"�� ����:"
							+a[num]);	
			num++;
		}
//		System.out.print(num+"�� ����>");
//		a[1] = sc.nextInt();
//		num++;
//		
//		System.out.print(num+"�� ����>");
//		a[2] = sc.nextInt();
//		num++;
//		
//		System.out.print(num+"�� ����>");
//		a[3] = sc.nextInt();
//		num++;
//		
//		System.out.print(num+"�� ����>");
//		a[4] = sc.nextInt();
		
		
	}

}
