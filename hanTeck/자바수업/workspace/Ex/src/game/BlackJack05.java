//package game;
//// Ŭ���� ��Ӱ��� ����
////���ӽý��� Ŭ������ ī��Ŭ������ ��ӽ�Ű�� �ϴµ�
////���� ������ �ٸ��� ���� ���Դ°� ���Ƽ� �̸��� �����ϴ�.
////Ŭ���� ��� ����?
//// Ŭ���� ����� �ϸ� ����� ���� �ڽ� Ŭ������ ����� Ŭ������ ������ ����� �� �ִ�.
//// Ŭ������ �� �Ѱ��� ��� Ŭ������ ������.
//// ������������� ����Ŭ������ ��� ���� �� �ִ�. 
////Ex) Ŭ���� a > Ŭ���� b > Ŭ���� c ����Ұ�� Ŭ���� c�� Ŭ���� a�� �ִ� �����Ϳ� Ŭ���� b�� ������ ��� �� �� �ִ�.
////����
//// ���� Ŭ������ ��������?(���� ��)
//// Ŭ������ ���� ������? �� �Ⱦ��µ��� ��������?
////�Ʒ� �÷α׷����� ���ӽý��� > ī�� > �������α׷� Ŭ������ ��ӽ��Ѽ� �������� �������� �ϴµ�
////�������α׷� Ŭ������ ������������ ���κ��� Ŭ������ ����ص� ������ ���°���..
////ī�嵦�� ���ι޴� �ý��� ������� ���� Ŭ���� �迭�� �޾Ƽ� ����Ϸ��� �Ͽ��µ� ������� ó���Ұ�� ��� ����ؾ� �Ǵ���
////Ex)
////for(int i = 0; true; i++) { //ī�� �̴°�(�����Ϸ����� ��� c[i].shuffleDeck[j];)
////	for(int j = 0; j<52;j++) {
////	
////	
////	}
////}
//import java.util.Random;
//import java.util.Scanner;
//
//class Card{
//	char[] cardShape = new char[] {'��','��','��','��'};
//	String[] cardNumber = new String[] {" Ace"," Two"," Three"," Four"," Five"," Six"," Seven"," Eight"
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
//	void cardDeck() {
//		int i = 0;
//		int j = 0;
//		int k = 0;
//		System.out.println("ī������Դϴ�!");
//		while(k<52) {
//			while(i<4) {
//				while(j<13) {
//					cardDeck[k] = this.cardShape[i]+this.cardNumber[j];//�̹� ���� ���ִ� ����(������ ���� �ʿ䰡 ����.) 
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
//	//���� �������ִ� �޼��� �ϼ�
//	//Ŭ���� ã�Ƽ� �����ϴٰ� �ᱹ ���� ���߽��ϴ�..
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
//						//System.out.println(this.cardDeck[i[j]]+"�ߺ��˴ϴ�.ī�带 ��ȯ�մϴ�");
//						i[j]--;
//						if(i[j]==-1) i[j]=51; //���࿡ i[j] �� ���� -1�� �������� 51�� �����.
//						//System.out.println("��ȯ�� ī��: "+this.cardDeck[i[j]]);	
//						u=0;
//					}
//				}
//			}
//			//�ϴ� �ߺ����ڵ��� ���ְ� shuffleDeck�� �ֱ�� ����
//			for(int j = 0;j<52;j++) {
//				this.shuffleDeck[j]=this.cardDeck[i[j]];
//				System.out.println(this.shuffleDeck[j]);
//			}
//	}
//		void cardDraw(int i ,int j) {
//			System.out.println("ī�� ������ �޽��ϴ�.");			
//		}
//}
//
//	//���ӽý���
//	class CGameSys {
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
//		void join() {
//			Scanner sc = new Scanner(System.in);
//			System.out.println("�÷��̾� �̸��� �Է��ϼ���.. ");
//			this.User = sc.nextLine();
//			System.out.println(this.User+" �÷��̾�� ȯ���մϴ�.");
//			System.out.println("�⺻Ĩ "+this.chip+"�� �帳�ϴ�.");
//			
//		}
//		void rule() {
//			System.out.println("������ ��´�.");
//			System.out.println("������ ������ �÷��̾� �� ī���� ���� 21 �Ǵ� "
//					+ "21�� ���� ����� ���ڸ� ������ ���� �̱�� �����Դϴ�.");
//			System.out.println("����(3chip)�� �� �� ��� �÷��̾�� ������ �� ���� ī�带 �޽��ϴ�.\n" + 
//					"������ �ڽ��� ī�� �� �� ���� �����մϴ�.\n" + 
//					"������ ī���� ���� 17�� �� ������ �ݵ�� �߰� ī�带 �̾ƾ� �մϴ�.\n" + 
//					"�÷��̾�� ī���� ���� 21�� ���� �ʴ� ���� ������ �߰� ī�带 ���� ����(Hit),���� ���� ����(Stay)�ֽ��ϴ�.");
//			System.out.println("J, Q, K ī��� ��� 10���� ���Ǹ� A�� 1�� 11�� ����̵ǰ�\n"
//					+ "������ī��� ǥ��� ���ڷ� ����մϴ�.\n");
//			System.out.println("BlackJack \n" + 
//					"ó�� �� ���� ī�� ���� 21�� ��츦 ���ϸ� ���� �ݾ���  2���� chip�� �޽��ϴ�.");
//			System.out.println("Bust \n"+"ī�� ���� 21�� �ʰ��ϸ� ���� �ݾ��� �Ұ� �˴ϴ�.");
//			System.out.println("Push\n"+"�÷��̾�� ������ ������ ī�� ���� ���� ��� ���� ���� �˴ϴ�.");
//			System.out.println("Stay\n"
//			+"�÷��̾ �߰� ī�带 ������ ���� ��츦 ���ϸ�, ������ ī���� ���� 17 �̻��̸� �߰� ī�带 ���� �� �����ϴ�.");
//			System.out.println("Hit\n"+"�÷��̾ ó�� �� ���� ī�� �ܿ� �������� �߰�ī�带 ��û�ϴ� ��츦 ���մϴ�.");
//			System.out.println("Die\n"+"�÷��̾ ó�� �� ���� ī��� ������ ī�带 �̱� �� ���ٰ� �Ǵ��� ��� ������ �����ϴ� ���� ���մϴ�.\n" + 
//					"�� ��� ���þ� �� 2���� chip�� �Ұ� �˴ϴ�.");
//		}
//		void GStart(){//Ŭ������ ���� ��������
//			//�������
//			//-> Ĩ���� -> ī�����ޱ�(���ǿ� c[i].shuffleDeck[j](if j == 51 -> j=0, i++) Userī��(���) ����ī�� 1��(���)
//			//-> Hit�޼��� ��(if User ī���� > 21 -> User Bust!\n Dealer Win!(���) ��������������)
//			//-> if ���� ī���� �� 17���ϸ� 17�̻��϶����� ��Ʈ(if Dealer ī���� > 21 -> Dealer Bust!\n User Win!(���) User get 6chip ��������������)
//			//->WantDie�޼��� ��(if User Die -> User Get 1 chip ��������������)
//			//-> ī�����(if User==Dealer Push!(���) User get 3chip)
//			//(else if User/Dealer ���� -> User/Dealer BlackJack!\n User/Dealer Win!(���) User get 9chip/Lost 6chip)
//			//(else ī���� ���(���) (if Dealer > User -> Dealer Win!(���)(else User Win!(���) User get 6chip)
//			//-> ����������!!!(���� ���Ұ��� ������ ����)
//			this.chip = this.chip - this.bat;
//			System.out.println("�⺻�������մϴ�\n"+this.bat+"\n����Ĩ: "+this.chip);
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
//		//Ȯ���۾�
//		//ī����̸� �迭�� ������ ���������(ī�带 �� ����ϸ� �ٸ� ī����̸� ��)
//		//1���� user �÷��̾�,n���� com �÷��̾�,1���� com ������ ����Ǵ� ������ ���������
//		//�ο����� �Է� ������ user�� �̸��� �Է¹ް�, com �÷��̾��� �̸����� �̸� ����Ǿ� �ִ� �̸��� �Է� ����
//		//boolean���� die�� hit�� �����Ϸ��� ��
//		//class�� ī�� Ŭ������ ���ӽý��� Ŭ������ �������� ��
//		//���ӽý��ۿ����� ���ýý��۰� ���нý��۸� ������ ������ �ϴµ� �����ʿ䰡 �ִ���..		
////		int i = 1;
////		Card1[] c = new Card1[i];
////		c[0] = new Card1();
////		//c[0].showInfo();
//		
////		c[0].cardDeck(); //ī�嵦 ����
////		System.out.println(c[0].cardDeck[0]); // ���� �ߵ����� Ȯ��
////		c[0].cardShuffle();//ī�嵦 ������ �������� ����
//		Scanner sc = new Scanner(System.in);
//		int choose = 0;
//		CGameSys sys = new CGameSys();
//		while(true) {
//			sys.gameMain();
//			System.out.print("�����ϼ���.. ");
//			choose = sc.nextInt();
//			if(choose == 1) {
//				sys.join();
//				System.out.println("������ӿ� ���� ������ �帱���?");
//				System.out.println("1.��´�.   2.������̵� �� �̱� �� �ִ�");
//				choose = sc.nextInt();
//				switch(choose) {
//				case 1: sys.rule();
//				case 2:
//					System.out.println("������ �����մϴ�!");
//					sys.GStart();
//					break;
//				default : 
//					System.out.println("�߸��� ������!!");
//					break;
//				}
//			}else if(choose==2) return;
//			else System.out.println("�߸��� ������!!");
//		}
//				
//			
//			
//	}
//		
//}