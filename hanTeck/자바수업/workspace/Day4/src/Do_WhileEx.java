
public class Do_WhileEx {

	public static void main(String[] args) {
		// while() 조건 -> 실행
		// do~while() 먼저 한번 실행하고 -> 조건
//		do {
//			//참인경우 실행;
//		}while(조건식);
		
		int i = 1;
		
		while( i < 1) {
			System.out.println("while실행");
		}
		
		i = 0;
		
		do {
			System.out.println("do~while 실행");
			i++;
		}while(i < 1);
		// 메뉴 첫화면 (무조건 한번은 명령문을 실행해야될때 사용)
		
		// 1~5까지 출력
		int a1 = 1;
		
		do {
			System.out.println(a1);
			a1++;
		}while(a1<6);
		
		// for문 while실행하는 방법 똑같다!
		// 단지 사용하는 형식 다를뿐!
		// for 딱한가지 : while 코드를 읽어가는 가독성이 너무 떨어짐
	}
}
