import java.util.Random;

public class rottoEx {

	static void rotto(int a,int n) {
		Random ran = new Random();
		while(n<7) {
		a = ran.nextInt(44)+1;
		System.out.println((n+1)+"번쨰: "+a);
		n++;
		}
	}
	
	public static void main(String[] args) {
		// 정수를 뽑는다. 
				// 1~45까지 로또 숫자뽑는것!
				// nextInt() 0부터 int값(음수와 양수)
				// nextInt(개수) 0부터 개수-1
				// nextInt(개수) + 시작수;

		int num = 0;
		int n = 0;
		
		System.out.println("이번주 로또 추천번호!");
		System.out.println("*******************");
		rotto(num,n);
		
		
			}

}
