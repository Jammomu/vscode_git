//package game;
//// 클래스 상속개념 질문
////게임시스템 클래스에 카드클래스를 상속시키려 하는데
////제가 생각과 다르게 많이 빼먹는것 같아서 이메일 보냅니다.
////클래스 상속 개념?
//// 클래스 상속을 하면 상속을 받은 자식 클래스가 상속한 클래스의 모든것을 사용할 수 있다.
//// 클래스는 단 한개의 상속 클래스만 가진다.
//// 꼬리물기식으로 여려클래스를 상속 받을 수 있다. 
////Ex) 클래스 a > 클래스 b > 클래스 c 상속할경우 클래스 c는 클래스 a에 있는 데이터와 클래스 b의 데이터 모두 쓸 수 있다.
////질문
//// 굳이 클래스를 쓰는이유?(간편성 외)
//// 클래스를 언제 쓰는지? 또 안쓰는데는 언제인지?
////아래 플로그램에서 게임시스템 > 카드 > 게임프로그램 클래스로 상속시켜서 메인으로 보내려고 하는데
////게임프로그램 클래스를 생성하지말고 메인블랙잭 클래스에 상속해도 문제가 없는건지..
////카드덱을 새로받는 시스템 같은경우 원래 클래스 배열로 받아서 사용하려고 하였는데 상속으로 처리할경우 어떻게 사용해야 되는지
////Ex)
////for(int i = 0; true; i++) { //카드 뽑는곳(원래하려고한 방법 c[i].shuffleDeck[j];)
////	for(int j = 0; j<52;j++) {
////	
////	
////	}
////}
//import java.util.Random;
//import java.util.Scanner;
//
//class Card{
//	char[] cardShape = new char[] {'♤','◆','♥','♧'};
//	String[] cardNumber = new String[] {" Ace"," Two"," Three"," Four"," Five"," Six"," Seven"," Eight"
//										," Nine"," Ten"," Jack"," Queen"," King"};
//	String[] cardDeck = new String[52];
//	String[] shuffleDeck = new String[52];
//	//카드 나열하는 메서드(확인)
//	void showInfo() {
//		int i=0;
//		int j=0;
//		System.out.println("카드 종류를 출력합니다!");
//		while(i<4) {
//			while(j<13) {
//				System.out.println(this.cardShape[i]+this.cardNumber[j]);
//				j++;
//			}
//			j = 0;
//			i++;
//			System.out.println("카드문양을 바꾸겠습니다!");
//		}
//	}
//	//카드덱을 만들어 주는 메서드
//	void cardDeck() {
//		int i = 0;
//		int j = 0;
//		int k = 0;
//		System.out.println("카드더미입니다!");
//		while(k<52) {
//			while(i<4) {
//				while(j<13) {
//					cardDeck[k] = this.cardShape[i]+this.cardNumber[j];//이미 값이 들어가있는 상태(리턴을 넣을 필요가 없다.) 
//					System.out.println(this.cardDeck[k]);
//					j++;
//					
//					k++;
//				}
//				j = 0;
//				i++;
//			}
//		}	
//
//	}
//	//덱을 셔플해주는 메서드 완성
//	//클론은 찾아서 공부하다가 결국 쓰지 못했습니다..
//		void cardShuffle() {
//			Random ran = new Random();
//			int[] i = new int[52];
//
//			for(int j=0;j<52;j++) {
//				i[j] = ran.nextInt(52); //배열의 주소이기때문에 0부터 시작함(+1 안해도됨)
//				System.out.println(this.cardDeck[i[j]]); //초기값
//				
//				for(int u=0;u<j;u++) { //값 중복확인
//					if(i[u] == i[j]) {
//						//System.out.println(this.cardDeck[i[j]]+"중복됩니다.카드를 변환합니다");
//						i[j]--;
//						if(i[j]==-1) i[j]=51; //만약에 i[j] 의 값이 -1로 내려가면 51로 만든다.
//						//System.out.println("변환된 카드: "+this.cardDeck[i[j]]);	
//						u=0;
//					}
//				}
//			}
//			//일단 중복숫자들을 없애고 shuffleDeck에 넣기로 했음
//			for(int j = 0;j<52;j++) {
//				this.shuffleDeck[j]=this.cardDeck[i[j]];
//				System.out.println(this.shuffleDeck[j]);
//			}
//	}
//		void cardDraw(int i ,int j) {
//			System.out.println("카드 두장을 받습니다.");			
//		}
//}
//
//	//게임시스템
//	class CGameSys {
//	String User;
//	int chip=30;
//	int bat=3;
//	boolean die;
//	boolean hit;
//	
//		void gameMain() {
//			System.out.println("********************");
//			System.out.println("♤블랙잭♠");
//			System.out.println("1.게임시작");
//			System.out.println("2.게임종료");
//			System.out.println("********************");
//		}
//		void join() {
//			Scanner sc = new Scanner(System.in);
//			System.out.println("플레이어 이름을 입력하세요.. ");
//			this.User = sc.nextLine();
//			System.out.println(this.User+" 플레이어님 환영합니다.");
//			System.out.println("기본칩 "+this.chip+"개 드립니다.");
//			
//		}
//		void rule() {
//			System.out.println("설명을 듣는다.");
//			System.out.println("블랙잭은 딜러와 플레이어 중 카드의 합이 21 또는 "
//					+ "21에 가장 가까운 숫자를 가지는 쪽이 이기는 게임입니다.");
//			System.out.println("베팅(3chip)을 한 후 모든 플레이어와 딜러는 두 장의 카드를 받습니다.\n" + 
//					"딜러는 자신의 카드 중 한 장을 오픈합니다.\n" + 
//					"딜러는 카드의 합이 17이 될 때까지 반드시 추가 카드를 뽑아야 합니다.\n" + 
//					"플레이어는 카드의 합이 21을 넘지 않는 범위 내에서 추가 카드를 받을 수도(Hit),받지 않을 수도(Stay)있습니다.");
//			System.out.println("J, Q, K 카드는 모두 10으로 계산되며 A는 1과 11로 계산이되고\n"
//					+ "나머지카드는 표기된 숫자로 계산합니다.\n");
//			System.out.println("BlackJack \n" + 
//					"처음 두 장의 카드 합이 21일 경우를 말하며 베팅 금액의  2배의 chip을 받습니다.");
//			System.out.println("Bust \n"+"카드 합이 21을 초과하면 베팅 금액을 잃게 됩니다.");
//			System.out.println("Push\n"+"플레이어와 딜러의 각각의 카드 합이 같을 경우 서로 비기게 됩니다.");
//			System.out.println("Stay\n"
//			+"플레이어가 추가 카드를 원하지 않을 경우를 말하며, 딜러는 카드의 합이 17 이상이면 추가 카드를 받을 수 없습니다.");
//			System.out.println("Hit\n"+"플레이어가 처음 두 장의 카드 외에 딜러에게 추가카드를 요청하는 경우를 말합니다.");
//			System.out.println("Die\n"+"플레이어가 처음 두 장의 카드로 딜러의 카드를 이길 수 없다고 판단한 경우 게임을 포기하는 것을 말합니다.\n" + 
//					"이 경우 배팅액 중 2개의 chip을 잃게 됩니다.");
//		}
//		void GStart(){//클래스로 따로 뺴려고함
//			//진행순서
//			//-> 칩배팅 -> 카드두장받기(전판에 c[i].shuffleDeck[j](if j == 51 -> j=0, i++) User카드(출력) 딜러카드 1장(출력)
//			//-> Hit메서드 콜(if User 카드합 > 21 -> User Bust!\n Dealer Win!(출력) 마지막문단으로)
//			//-> if 딜러 카드의 합 17이하면 17이상일때까지 히트(if Dealer 카드합 > 21 -> Dealer Bust!\n User Win!(출력) User get 6chip 마지막문단으로)
//			//->WantDie메서드 콜(if User Die -> User Get 1 chip 마지막문단으로)
//			//-> 카드오픈(if User==Dealer Push!(출력) User get 3chip)
//			//(else if User/Dealer 블랙잭 -> User/Dealer BlackJack!\n User/Dealer Win!(출력) User get 9chip/Lost 6chip)
//			//(else 카드합 계산(출력) (if Dealer > User -> Dealer Win!(출력)(else User Win!(출력) User get 6chip)
//			//-> 마지막문단!!!(게임 더할건지 말건지 선택)
//			this.chip = this.chip - this.bat;
//			System.out.println("기본배팅을합니다\n"+this.bat+"\n남은칩: "+this.chip);
//			
//			
//		}
//	}
//
//
//
//public class BlackJack05 {
//
//	
//	public static void main(String[] args) {
//		//확인작업
//		//카드더미를 배열로 여러개 만들생각임(카드를 다 사용하면 다른 카드더미를 씀)
//		//1명의 user 플레이어,n명의 com 플레이어,1명의 com 딜러로 진행되는 게임을 만들려고함
//		//인원수를 입력 받으면 user의 이름은 입력받고, com 플레이어의 이름들은 미리 저장되어 있는 이름을 입력 받음
//		//boolean으로 die와 hit를 구현하려고 함
//		//class를 카드 클래스와 게임시스템 클래스로 나누려고 함
//		//게임시스템에서도 배팅시스템과 승패시스템를 나누어 보려고 하는데 나눌필요가 있는지..		
////		int i = 1;
////		Card1[] c = new Card1[i];
////		c[0] = new Card1();
////		//c[0].showInfo();
//		
////		c[0].cardDeck(); //카드덱 생성
////		System.out.println(c[0].cardDeck[0]); // 값이 잘들어갔는지 확인
////		c[0].cardShuffle();//카드덱 순서를 무작위로 만듬
//		Scanner sc = new Scanner(System.in);
//		int choose = 0;
//		CGameSys sys = new CGameSys();
//		while(true) {
//			sys.gameMain();
//			System.out.print("선택하세요.. ");
//			choose = sc.nextInt();
//			if(choose == 1) {
//				sys.join();
//				System.out.println("블랙잭게임에 대한 설명을 드릴까요?");
//				System.out.println("1.듣는다.   2.설명없이도 다 이길 수 있다");
//				choose = sc.nextInt();
//				switch(choose) {
//				case 1: sys.rule();
//				case 2:
//					System.out.println("게임을 시작합니다!");
//					sys.GStart();
//					break;
//				default : 
//					System.out.println("잘못된 선택지!!");
//					break;
//				}
//			}else if(choose==2) return;
//			else System.out.println("잘못된 선택지!!");
//		}
//				
//			
//			
//	}
//		
//}