
public class LoopEx03 {

	public static void main(String[] args) {
		// 중첩반복문
		// while안에 while이 들어간 상태.
//		while() {
//			while() {
//				
//			}
//		}
		
		// 구구단 출력
		// 2단 1~9까지 출력
		// 2~9단까지 출력 8번 반복
		
		int g = 1;  //곱하는 변수
		int d = 2;  // 단을 저장하는 변수 

		// 내부 반복문은 항상 초기화!
		
		while(d<10) {// 밖
			
			while(g<10) { // 안
				// 출력 상태 : 2 * 1 = 2
				System.out.println(d+"*"+g+"="+(d*g));
				g++;
			}
			d++; // 단수를 증감식!
			g = 0; // 내부반복문의 초기화!		
		}
		
		//*
		//**
		//***
		
		// 외부 3번
		// 내부 반복은 1씩 증가
		
		// *****
		// ****
		// ***
		// **
		// *
		
		// 123A
		// 45BC
		// 6DEF
		
		//      *
		//     ***
		//    *****
		//   *******
		//    *****
		//     ***
		//      *
			
	}
}
