package game;

import java.util.Scanner;

public class sosu {

	public static void sosu(int b) {
		for(int i=1;i<=b;i++) {
			for(int j=1;j<=i;j++) {
				if(i%j==0) {
					if(i==j) {
						System.out.println("�Ҽ�: "+i);
					}else if(j!=1) {
						System.out.println("�Ҽ��� �ƴմϴ� �Ҽ��� �ƴѼ�: "+i);
						break;
					}
				}
			}
			
		}
		
		
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); 
		System.out.print("�Է�: ");
		int a = sc.nextInt();
		sosu(a);
	}

}
