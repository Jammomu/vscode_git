import java.util.Scanner;

public class ArrayScanEx {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		// 정수를 입력해서 5개의 점수를 받으세요
		int[] a = new int[5];
		int num = 0;
		
		while(num<5) {
			System.out.print((num+1)+"번 점수>");
			a[num] = sc.nextInt();
			num++;
		}
		num = 0;
		while(num<5) {
			System.out.print((num+1)+"번 점수:"
							+a[num]);	
			num++;
		}
//		System.out.print(num+"번 점수>");
//		a[1] = sc.nextInt();
//		num++;
//		
//		System.out.print(num+"번 점수>");
//		a[2] = sc.nextInt();
//		num++;
//		
//		System.out.print(num+"번 점수>");
//		a[3] = sc.nextInt();
//		num++;
//		
//		System.out.print(num+"번 점수>");
//		a[4] = sc.nextInt();
		
		
	}

}
