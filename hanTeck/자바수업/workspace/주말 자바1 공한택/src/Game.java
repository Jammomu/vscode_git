import java.util.Random;
import java.util.Scanner;

public class Game {

	static void comP(int c) {
		//��ǻ�� �� ���
		switch(c) {
		case 1:
			System.out.println("��ǻ��> ����!");
			break;
		case 2:
			System.out.println("��ǻ��> ����!");
			break;
		case 3:
			System.out.println("įǻ��> ��!");
			break;
		}
	}
	
	//return���� ���� �������� int�� �����
	static int vsSys(int u ,int c, int uW, int cW, int dw) {
		//���нý���
		// ���и� Ȯ�� O, ���� �� ���� X
		if(u == c) {
		 System.out.println("���º�!");
		 dw++;
		}else if (u > c) {
			if(u != 3 || c == 2) {
				System.out.println("����� �¸�!");
				return ++uW;
			}else {
				System.out.println("��ǻ�� �¸�!");
				return cW++;
			}
		}else if(c != 3 || u == 2){
			System.out.println("��ǻ�� �¸�!");
			cW++;
			return cW;
		}else {
			System.out.println("����� �¸�!");
			//�ּҸ� ����ų�� �ִ� ����� �ʿ���!
		}
	}
	
	public static void main(String[] args) {
		//���� ����� ���ϸ� �����̸� 
		//���Ͼȿ� �����̸� �ۼ� 
		
		// ������ ������ �̴� ���� Ŭ���� 
		Random ran = new Random();
		Scanner sc = new Scanner(System.in);
		// ���������� ����
		// ��� ��ǻ�� , user
		// user �Է� 
		// com ������ 
		// 1. ���� 2. ���� 3.�� 4.��������
		int user = 0;		// �� ����
		int com = 0;		// com ����
		int uWin = 0;
		int cWin = 0;
		int draw = 0;
		while(true) {
			// ����� �Է�
			System.out.println("����������!");
			System.out.println("**********************");
			System.out.println("1.���ӽ��� \n2.��������");
			System.out.println("**********************");
			System.out.print(">>");
			user = sc.nextInt();
			if(user == 1) {
				while(true) {
					System.out.println("**********************");
					System.out.println(" 1.����");
					System.out.println(" 2.����");
					System.out.println(" 3.��");
					System.out.println(" 4.����Ȯ��");
					System.out.println(" 5.��������");
					System.out.println("**********************");
					System.out.print(">>>");
				
					user = sc.nextInt();
					com = ran.nextInt(3) + 1;
					
					//���
					switch(user) {
					case 1://����� ����
						System.out.println("�����> ����!");
						comP(com);
						vsSys(user, com, uWin, cWin, draw);
						break;
					case 2://����� ���� 
						System.out.println("�����> ����!");
						comP(com);
						vsSys(user, com, uWin, cWin, draw);
						break;
					case 3://����� ��
						System.out.println("�����> ��!");
						comP(com);
						vsSys(user, com, uWin, cWin, draw);
						break;
					case 4://���� Ȯ�� X
						//������ �����Ϸ� �Լ����� ���� ������ ���� �������� �Լ� ������ ���������鼭 ���� �����
						//return���� ���� �ҷ��÷��� ������ ��������
						//������ �ּҸ� ����ų�� �ִ� ����� �ʿ�(������)
						System.out.println("����� ����\n*************\n"+(uWin+cWin+draw)+" ��\n"
								+uWin+" ��\n"+cWin+" ��\n"+draw+" ��\n�·�: "+(uWin+cWin+draw)/(double)uWin*100.0+" %");
						break;
					case 5://���� ����
						System.out.println("������ �����մϴ�!");
						return; // main�� �����Ѵ�.(���α׷��� ����)
							// �޼��带 �����Ѵ�.
					default: //1~5�� �����ϰ� �ٸ� ������
						System.out.println("�߸� �Է��ϼ̽��ϴ�.");
					}
				}
			}else if(user == 2) {
				System.out.println("������ �����մϴ�.");
				return;
			}
			else {
				System.out.println("�߸��Է��ϼ̽��ϴ�.");
			}
		}
		
		// ��� ����! ���и� �����غ�����!
		// ���ڿ��� X 
		
		// ������ �̴´�. 
		// 1~45���� �ζ� ���ڻ̴°�!
		// nextInt() 0���� int��(������ ���)
		// nextInt(����) 0���� ����-1
		// nextInt(����) + ���ۼ�;
		
		//System.out.println(ran.nextInt(45)+1);		
//		System.out.println(ran.nextInt());		
//		System.out.println(ran.nextInt());	
		
		
		
		
		
	}
}
