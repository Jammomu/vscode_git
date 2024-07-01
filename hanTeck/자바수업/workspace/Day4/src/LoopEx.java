
public class LoopEx {
	public static void main(String[] args) {
	
		//반복문
		// 프로그램내에서 똑같은 명령을 일정 횟수만큼
		// 반복하여 수행하도록 제어하는 명령문
		
		// while for
		// while ~동안
		
		// while(조건식){
		//  조건이 참인 동안 수행할 명령문;
		//}
		
		// 반복문 조건 3가지
		// 초기식: 시작값
		// 조건식 : 어떤 조건에 의해서 실행
		// 증감식 : 증가하거나 감소
		
		// 1~5까지 출력 
		// 시작 : 1
		// 조건 : 1부터 5까지 
		// 증감 : 1씩 증가
		
//		int num = 1; //초기식
//		
//		while(num <= 5) {
//			System.out.println(num);
//			++num;
//		}
		
		// 1~100까지 합을구해서 출력
		// 합: **** 입니다.
		// 시작값: 1부터
		// 조건식: 1부터 100보다 작거나같을때
		// 증감식: 1부터 100 1씩 증가
		
		int n1 = 1;
		int total = 0; // 합을 저장하는 변수
		
		while(n1<=100) {
			total = total + n1;
			n1++;
		}
		System.out.println("합:"
							+total+"입니다");
		// 1부터 100까지 홀수와 짝수 합을
		// 각각 구하세요!
		// 홀수합: **
		// 짝수합: **
		
		int n2 = 1;
		int n3 = 2;
		
		int sum1 = 0; //짝수합
		int sum2 = 0; // 홀수합
		
		while(n1 <=100 && n2<=100) {
			sum1 = sum1 + n2;
			sum2 = sum2 + n1;
			n2++; n1++;
		}
		
		int n4 = 1;
		
		while(n4 < 101) {
			if(n4 % 2 == 0) {
				sum1 = sum1 + n4;
			}else {
				sum2 = sum2 + n4;
			}
			n4++;
		}
		int n5 = 1;
		
		while(n5 < 101) {
			
			switch(n5%2) {
			case 0:
				
				break;
				
			case 1:
							
			}
			n5++;
		}
	}
}
