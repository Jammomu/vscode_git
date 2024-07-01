
public class Q3 {

	/*
	 직사각형의 가로길이와 세로길이를 입력받아서 면적을 계산하고, 정사각형인지 판정하세요.
	직사각형 넓이는 “가로길이*세로길이” 로 하면 됩니다.
	사용하는 변수는
	width, height	#가로길이, 세로길이
       area			#면적

	 */
	
	public static void main(String[] args) {
		int width = 0 , height = 0;
		int area = 0;
		
		width = 8;
		height = 9;
		
		area = width*height;
		
		if(width == height) {
			System.out.println("사각형의 넓이는"+area+"cm^2이고 정사각형입니다!");
		}else {
			System.out.println("사각형의 넓이는"+area+"cm^2이고 직사각형입니다!");
		}

	}

}
