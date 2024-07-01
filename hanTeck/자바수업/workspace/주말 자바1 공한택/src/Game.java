import java.util.Random;
import java.util.Scanner;

public class Game {

	static void comP(int c) {
		//컴퓨터 값 출력
		switch(c) {
		case 1:
			System.out.println("컴퓨터> 가위!");
			break;
		case 2:
			System.out.println("컴퓨터> 바위!");
			break;
		case 3:
			System.out.println("캄퓨터> 보!");
			break;
		}
	}
	
	//return으로 값을 받을려고 int를 사용함
	static int vsSys(int u ,int c, int uW, int cW, int dw) {
		//승패시스템
		// 승패를 확인 O, 전적 값 누적 X
		if(u == c) {
		 System.out.println("무승부!");
		 dw++;
		}else if (u > c) {
			if(u != 3 || c == 2) {
				System.out.println("사용자 승리!");
				return ++uW;
			}else {
				System.out.println("컴퓨터 승리!");
				return cW++;
			}
		}else if(c != 3 || u == 2){
			System.out.println("컴퓨터 승리!");
			cW++;
			return cW;
		}else {
			System.out.println("사용자 승리!");
			//주소를 가리킬수 있는 방법이 필요함!
		}
	}
	
	public static void main(String[] args) {
		//과제 제출시 파일명 본인이름 
		//파일안에 본인이름 작성 
		
		// 임의의 난수를 뽑는 랜덤 클래스 
		Random ran = new Random();
		Scanner sc = new Scanner(System.in);
		// 가위바위보 게임
		// 대상 컴퓨터 , user
		// user 입력 
		// com 랜덤값 
		// 1. 가위 2. 바위 3.보 4.게임종료
		int user = 0;		// 나 변수
		int com = 0;		// com 변수
		int uWin = 0;
		int cWin = 0;
		int draw = 0;
		while(true) {
			// 사용자 입력
			System.out.println("가위바위보!");
			System.out.println("**********************");
			System.out.println("1.게임시작 \n2.게임종료");
			System.out.println("**********************");
			System.out.print(">>");
			user = sc.nextInt();
			if(user == 1) {
				while(true) {
					System.out.println("**********************");
					System.out.println(" 1.가위");
					System.out.println(" 2.바위");
					System.out.println(" 3.보");
					System.out.println(" 4.전적확인");
					System.out.println(" 5.게임종료");
					System.out.println("**********************");
					System.out.print(">>>");
				
					user = sc.nextInt();
					com = ran.nextInt(3) + 1;
					
					//출력
					switch(user) {
					case 1://사용자 가위
						System.out.println("사용자> 가위!");
						comP(com);
						vsSys(user, com, uWin, cWin, draw);
						break;
					case 2://사용자 바위 
						System.out.println("사용자> 바위!");
						comP(com);
						vsSys(user, com, uWin, cWin, draw);
						break;
					case 3://사용자 보
						System.out.println("사용자> 보!");
						comP(com);
						vsSys(user, com, uWin, cWin, draw);
						break;
					case 4://전적 확인 X
						//전적을 구현하려 함수에서 전적 변수를 누적 시켰으나 함수 밖으로 빠져나오면서 값이 사라짐
						//return으로 값을 불려올려고 했으나 마찬가지
						//변수의 주소를 가리킬수 있는 방법이 필요(포인터)
						System.out.println("사용자 전적\n*************\n"+(uWin+cWin+draw)+" 전\n"
								+uWin+" 승\n"+cWin+" 패\n"+draw+" 무\n승률: "+(uWin+cWin+draw)/(double)uWin*100.0+" %");
						break;
					case 5://게임 종료
						System.out.println("게임을 종료합니다!");
						return; // main을 종료한다.(프로그램을 종료)
							// 메서드를 종료한다.
					default: //1~5번 제외하고 다른 선택지
						System.out.println("잘못 입력하셨습니다.");
					}
				}
			}else if(user == 2) {
				System.out.println("게임을 종료합니다.");
				return;
			}
			else {
				System.out.println("잘못입력하셨습니다.");
			}
		}
		
		// 결과 도출! 승패를 구현해보세요!
		// 문자열비교 X 
		
		// 정수를 뽑는다. 
		// 1~45까지 로또 숫자뽑는것!
		// nextInt() 0부터 int값(음수와 양수)
		// nextInt(개수) 0부터 개수-1
		// nextInt(개수) + 시작수;
		
		//System.out.println(ran.nextInt(45)+1);		
//		System.out.println(ran.nextInt());		
//		System.out.println(ran.nextInt());	
		
		
		
		
		
	}
}
