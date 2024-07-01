
public class Q4 {

	/*
	 아파트 분양면적을 제곱미터(m^2)로 받아 평형(x평) 단위로 변환하고, 소형인지 대형인지 판정하세요.
	평형계산은 제곱미터/3.305 로 하면 됩니다. 30 평 미만이면 작은 아파트입니다.
	사용하는 변수는
	m2_area		#면적(제곱미터)
       pyung_area	#면적(평수)
	 */
	
	public static void main(String[] args) {
		
		double m2_area = 0.0f;
		double pyung_area = 0.0f;
		
		m2_area = 100;
		pyung_area = m2_area/3.305;
		
		if(pyung_area < 30) {
			System.out.println("당신의 아파트 평수는"+pyung_area+"입니다. \n소형아파트(너무 작아서 개미도 못살겠네요 ㅋㅋ)");
		}else {
			System.out.println("당신의 아파트 평수는"+pyung_area+"입니다. \n대형아파트(와 엄청 크네요! 나중에 놀러가도 되죠?) ");
		}

	}

}
