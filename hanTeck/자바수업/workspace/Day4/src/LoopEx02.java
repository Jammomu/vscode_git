import java.util.Scanner;

public class LoopEx02 {

	public static void main(String[] args) {
		// 내가 원하는 결과까지 반복
		Scanner input = new Scanner(System.in);
		
		// 횟수입력: 2
		// 이서희
		// 이서희
		
		System.out.print("횟수>");
		int s = input.nextInt();
		
		int a = 1;
		
		while(a <= s) {
			System.out.println("이서희");
			a++;
		}
		
		// 무한반복 
//		while(true) {
//			System.out.println("배고파!");
//		}
		//System.out.println("반복문끝!");
		
		// 정수를 무한적으로 계속 입력 받다가
		// 0을 입력하면 반복문을 종료하는 문장 작성하세요
		
		while(true) {
			System.out.print("정수>");
			int b = input.nextInt();
			
			if(b == 0) {
				break;
			}			
		}	
	}
	// 정수를 무한적으로 입력받다가 
	// 5의 배수가 3개 입력되면 반복문을 멈추는 프로그램
	// 작성하세요
	
	// 시작값은 1부터 내가 입력한 횟수까지의 
	// 합을 구하세요
	
	// 정수를 계속 입력 받다가 총합이 100이 넘으면
	// 반복문을 멈추고 최종 합을 출력하세요
	
	// 출력상태
	// 지금까지 입력된 숫자들의 총합은 *** 입니다.
	}
