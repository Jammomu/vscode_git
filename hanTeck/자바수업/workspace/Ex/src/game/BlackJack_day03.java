//package game;
//
//import java.util.Random;
//
////String �� ��ü �� �ν��Ͻ�����?
////		�̶���  String �迭�� �������ִ� clone()�̶�� �޼ҵ带
////	 	�̿��ؼ� ���縦 ������ �Ѱܾߵ˴ϴ�. 
////		cardDeck.clone(); �̷� �޼��尡 �ִ��� Ȯ���Ͻð�
////		���� �� �޼��尡 �ִٸ� �������̵��� ���ؼ� � Ÿ������
////	 	Ȯ���غ��ø� �� �����������ϴ�.
////		���� ���õ��� StringŬ�����̱⶧���� ���� �ִ� �� �ذ�
////		�ϸ� �� ���Դϴ�. 
//// clone ����.....(����� ���ϰڽ��ϴ�..)
//class Card implements Cloneable
//{
//	char[] cardShape = new char[] {'��','��','��','��'};
//	String[] cardNumber = new String[] {" Ace"," Two"," Three"," Four"," Five"," Six"," Seven"," Eight"
//										," Nine"," Ten"," Jack"," Queen"," King"};
//	String[] cardDeck = new String[52];
//	String[] shuffleDeck = new String[52];
//
//	//ī�� �����ϴ� �޼���(Ȯ��)
//	void showInfo() {
//		int i=0;
//		int j=0;
//		System.out.println("ī�� ������ ����մϴ�!");
//		while(i<4) {
//			while(j<13) {
//				System.out.println(this.cardShape[i]+this.cardNumber[j]);
//				j++;
//			}
//			j = 0;
//			i++;
//			System.out.println("ī�幮���� �ٲٰڽ��ϴ�!");
//		}
//	}
//	//ī�嵦�� ����� �ִ� �޼���
//	 
//	void cardDeck() {
//		int i = 0;
//		int j = 0;
//		int k = 0;
//		System.out.println("ī������Դϴ�!");
//		while(k<52) {
//			while(i<4) {
//				while(j<13) {
//					cardDeck[k] = this.cardShape[i]+this.cardNumber[j]; 
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
//	
//
//	
//	//���� �������ִ� �޼���(�̿�)
//		void cardShuffle() {
//			Random ran = new Random();
//			int[] i = new int[52];
//
//			for(int j=0;j<52;j++) {
//				i[j] = ran.nextInt(52); //�迭�� �ּ��̱⶧���� 0���� ������(+1 ���ص���)
//				System.out.println(this.cardDeck[i[j]]); //�ʱⰪ
//				
//				for(int u=0;u<j;u++) { //�� �ߺ�Ȯ��
//					if(i[u] == i[j]) {
//						System.out.println(this.cardDeck[i[j]]+"�ߺ��˴ϴ�.ī�带 ��ȯ�մϴ�");
//						i[j]--;
//						System.out.println("��ȯ�� ī��: "+this.cardDeck[i[j]]);	
//						u=0;
//						break;
//					}
//					
//				}
//			}
//			//�ϴ� �ߺ����ڵ��� ���ְ� shuffleDeck�� �ֱ�� ����
//			for(int j = 0;j<52;j++) {
//				this.shuffleDeck[j]=this.cardDeck[i[j]];
//				System.out.println(this.shuffleDeck[j]);
//			}
//	}
//
//	//���ӹ��ýý���
//	class CGameSys{
//	String User;
//	int chip=30;
//	int bat=3;
//	boolean die;
//	boolean hit;
//	
//		void gameMain() {
//			System.out.println("********************");
//			System.out.println("�����袼");
//			System.out.println("1.���ӽ���");
//			System.out.println("2.��������");
//			System.out.println("********************");
//		}
//	}
//
//}
//
//public class BlackJack_day03 {
//
//	
//	public static void main(String[] args) {
//		//Ȯ���۾�
//		//ī����̸� �迭�� ������ ���������(ī�带 �� ����ϸ� �ٸ� ī����̸� ��)
//		//1���� user �÷��̾�,n���� com �÷��̾�,1���� com ������ ����Ǵ� ������ ���������
//		//�ο����� �Է� ������ user�� �̸��� �Է¹ް�, com �÷��̾��� �̸����� �̸� ����Ǿ� �ִ� �̸��� �Է� ����
//		//boolean���� die�� hit�� �����Ϸ��� ��
//		//class�� ī�� Ŭ������ ���ӽý��� Ŭ������ �������� ��
//		//���ӽý��ۿ����� ���ýý��۰� ���нý��۸� ������ ������ �ϴµ� �����ʿ䰡 �ִ���..
//		//random ���� �̾Ƴ� ���ڸ� �ߺ��ȵǰ� �̴� ���� �ذ��� �ȵǾ ���ͳ����� �˻��غôµ�
//		//for������ ���� (���� 1,2)
//		//(�̷��� ������ �ƴ϶� ��Ģ���� ���� �����ʳ� ��� ������ ����µ�..)X
//		int i = 1;
//		Card[] c = new Card[i];
//		c[0] = new Card();
//		//c[0].showInfo();
//		
//		c[0].cardDeck(); //ī�嵦 ����
//		System.out.println(c[0].cardDeck[0]); // ���� �ߵ����� Ȯ��
//		c[0].cardShuffle();//ī�嵦 ������ �������� ����
//		
//	}
//
//}
