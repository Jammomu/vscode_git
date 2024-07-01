//package game;
//
//import java.util.Random;
//import java.util.Scanner;
//
//class Card1{
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
//		//리턴지움 해결
//		//수업에서 설명을 들었지만 아직까지도 리턴을 왜써야되는지 이해안됨..
//	}
//	//덱을 셔플해주는 메서드 완성
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
//
//	//게임배팅시스템
//	class CGameSys{
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
//	}
//
//}
//
//public class BlackJack_day02 {
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
//		while(true) {
//			Scanner choi = new Scanner();
//			
//			
//			
//		}
//		
//	}

//}
