package B;

import A.main2;//붙여라(스캐너,랜덤, 이딴거(클래스) 임포트 시키고 사용가능 ㅇㅇ)
//폴더의 경로(길)

public class main {

	public static void main(String[] args) {
		//E e1 = new E();
		
		main2 m = new main2();
		m.show();
		m.b = 3;
		System.out.println(m.b);
	}

}
