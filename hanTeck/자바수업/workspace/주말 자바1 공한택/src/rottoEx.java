import java.util.Random;

public class rottoEx {

	static void rotto(int a,int n) {
		Random ran = new Random();
		while(n<7) {
		a = ran.nextInt(44)+1;
		System.out.println((n+1)+"����: "+a);
		n++;
		}
	}
	
	public static void main(String[] args) {
		// ������ �̴´�. 
				// 1~45���� �ζ� ���ڻ̴°�!
				// nextInt() 0���� int��(������ ���)
				// nextInt(����) 0���� ����-1
				// nextInt(����) + ���ۼ�;

		int num = 0;
		int n = 0;
		
		System.out.println("�̹��� �ζ� ��õ��ȣ!");
		System.out.println("*******************");
		rotto(num,n);
		
		
			}

}
