//package game;
//
//import java.util.Random;
//
//class Card{
//	char[] cardShape= new char[] {'��','��','��','��'};
//	String[] cardNumber =new String[] {" Ace"," Two"," Three"," Four"," Five"," Six"," Seven"," Eight"
//										," Nine"," Ten"," Jack"," Queen"," King"};
//	String[] cardDeck = new String[52];
//	String[] shuffleDeck = new String[52];
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
//	String cardDeck() {
//		int i = 0;
//		int j = 0;
//		int k = 0;
//		System.out.println("ī������Դϴ�!");
//		while(k<52) {
//			while(i<4) {
//				while(j<13) {
//					cardDeck[k] = this.cardShape[i]+this.cardNumber[j];//�̰����� �����Ϸ��� �Ͽ����� ���� 
//					System.out.println(this.cardDeck[k]);
//					j++;
//					
//					k++;
//				}
//				j = 0;
//				i++;
//			}
//		}	
//		return this.cardDeck[52]; //�������� ���� �ϳ��� ������ �ִٰ� ����
//		//�׷� �������� �������� �ϸ� ��� ������ �ִ���..
//		//�ذ��Ϸ��� �� ���: 1. �迭�� ����� �迭�� �ּҰ��� �޾ƿ� ������ ����
//		//������ �ּҿ� ����ִ� ������ �ϳ��� �ȵ���
//		//2.�迭 ��ü�� �ϳ��� ������� �����ϰ� �迭���� ��ü�� ���Ͻ�Ű���� �� 
//		//���� �ȵ�
//		
//	}
//	//���� �������ִ� �޼���(�̿�)
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
//	//���ӹ��ýý���
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
//		c[0].cardDeck();
//		System.out.println(c[0].cardDeck[0]);
//		//c[0].cardShuffle();
//		
//	}
//
//}
