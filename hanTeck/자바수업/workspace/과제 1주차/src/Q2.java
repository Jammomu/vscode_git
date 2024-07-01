
public class Q2 {

	/*
 	   온도를 입력받고, 두번째 입력 값으로 종류 (‘C’면 섭씨, ‘F’면 화씨)를 받고, 이 두 입력값을 이용해 각 각의 온도변환을 하세요.
	화씨온도는 “섭씨온도 *1.8 + 32”, 섭씨온도는 “(화씨온도-32)/1.8” 입니다.
	사용하는 변수는
	input_degree		#입력온도
	kind				#온도의 종류 (‘C’면 섭씨, ‘F’면 화씨)
       output_degree	#변환온도

	 */
	public static void main(String[] args) {
		
		double input_degree = 0.0f;
		char kind;
		double output_degree = 0.0f;
		
		input_degree = 36.5;
		kind = 'C';
		
		if(kind == 'C') {
			output_degree = input_degree * 1.8 + 32; 
		}else if(kind == 'F'){
			output_degree = (input_degree-32)/1.8;
		}
		
		System.out.println("변환된 온도는:"+ output_degree);
		
		
	}

}
