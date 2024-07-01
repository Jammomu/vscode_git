
public class Q1 {

	/*
태어난 년도를 입력받고, 이 입력 값으로 미성년자인지 판별하세요.
나이 계산은 “2018 – 태어난 년도 + 1” 로 하면 되고, 20세 미만은 미성년자입니다.
사용하는 변수는
	birth_year #태어난 년도
       age		   #나이
	 */
	public static void main(String[] args) {
		
		int birth_year = 0;
		int age = 0;

		birth_year = 1996;
		age = 2018 - birth_year + 1;
		
		if(age<20) {
			System.out.println("미성년자입니다!");
		}else {
			System.out.println("술 마실 수 있어요!");
		}

	}

}
