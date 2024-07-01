//package game;
//
//import java.util.Random;
//
//class Card{
//	char[] cardShape= new char[] {'♤','◆','♥','♧'};
//	String[] cardNumber =new String[] {" Ace"," Two"," Three"," Four"," Five"," Six"," Seven"," Eight"
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
//	String cardDeck() {
//		int i = 0;
//		int j = 0;
//		int k = 0;
//		System.out.println("카드더미입니다!");
//		while(k<52) {
//			while(i<4) {
//				while(j<13) {
//					cardDeck[k] = this.cardShape[i]+this.cardNumber[j];//이값들을 리턴하려고 하였지만 실패 
//					System.out.println(this.cardDeck[k]);
//					j++;
//					
//					k++;
//				}
//				j = 0;
//				i++;
//			}
//		}	
//		return this.cardDeck[52]; //리턴으로 값을 하나만 받을수 있다고 했음
//		//그럼 여러값을 받을려고 하면 어떻게 받을수 있는지..
//		//해결하려고 한 방법: 1. 배열을 만들어 배열을 주소값을 받아와 쓰려고 했음
//		//문제점 주소에 들어있는 값들이 하나도 안들어옴
//		//2.배열 자체가 하나의 변수라고 생각하고 배열변수 전체를 리턴시키려고 함 
//		//역시 안됨
//		
//	}
//	//덱을 셔플해주는 메서드(미완)
//		String cardShuffle() {
//			Random u = new Random();
//			int i = u.nextInt(52);
//			int j = 0;
//			while(j<52){
//				System.out.println(this.cardDeck[i]);
//				this.shuffleDeck[j] = this.cardDeck[i];
//				j++;
//			}
//		return this.shuffleDeck[52];
//	}
//	//게임배팅시스템
//	class CGameSys{
//	String User;
//	int chip=30;
//	int bat=3;
//	boolean die;
//	boolean hit;
//	}
//
//}
//
//public class BlackJack {
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
//		//random 으로 뽑아낸 숫자를 중복안되게 뽑는 것을 해결이 안되어서 인터넷으로 검색해봤는데
//		//for문으로 돌림 (사진 1,2)
//		//(이러면 랜덤이 아니라 규칙적인 수가 되지않나 라는 생각이 들었는데..)X
//		int i = 1;
//		Card[] c = new Card[i];
//		c[0] = new Card();
//		//c[0].showInfo();
//		
//		c[0].cardDeck();
//		System.out.println(c[0].cardDeck[0]);
//		//c[0].cardShuffle();
//		
//	}
//
//}
