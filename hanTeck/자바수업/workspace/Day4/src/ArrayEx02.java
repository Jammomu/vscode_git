
public class ArrayEx02 {

	public static void main(String[] args) {
		// 배열 초기화방법
		// 길이를 써주지 않으면 뒤에 있는 입력값들의 개수를 확인
		// 자동적으로 메모리 공간을 선언!
		
		int[] a1 = new int[] {10,20,30};
		int[] a2 = {100,200,300};
		
		System.out.println(a1);
		
		double[] a3 = {1.1,2.2,3.3};
		double[] a4 = new double[3];
		
		System.out.println(a4[0]);
		
		String[] a5 = {"크롱","루피","패티"};
				
		int[] a6 = new int[6];
		
				
		System.out.println(a6[0]);
		System.out.println(a6[1]);
		
		String[] a7 = {"신비","미니특공대","허팝"};
		String[] a8 = new String[3];
		
		System.out.println(a8);
		System.out.println(a7);		
		
		//a8 = a7;
		// 반복문을 이용해서 각각 복사
		
		a8[0] = a7[0];
		a8[1] = a7[1];
		a8[2] = a7[2];
					
		System.out.println(a8[0]);
		System.out.println(a7[0]);		
			
		
		// 배열단점 
		// 각각의 변수를 추가하거나 삭제 없다.!
		// ArrayList , likedlist 대체!
		
		// 배열은 자동초기화 된다.
		// 기본적으로 정수를 저장하는 자료형 int 
		// new 연산자 -> 메모리공간을 할당하고 주소를 반환
		// 메모리영역
		// 1. 메소드영역 (main .class)
		// 2. 힙(heap)영역
		//    대부분의 자바프로그램에서 사용되는 모든 인스턴스변수
		//	   저장되는 영역 (객체지향프로그램언어)
		//	  프로그램이 동작하고 있는 동안 메모리공간을 할당
		//   주소값을 반환 
		// 3. stack영역 
		
		// 변수 
		// 1. 기본데이터를 저장(기본자료형)변수들
		// 2. 주소를 저장하는 참조변수들
		
		// 배열의 길이를 확인
		// 배열명.길이확인하는 메서드
		// 배열의 길이를 정수값으로 확인
		System.out.println(a8.length);
		
		// 1차원배열
			
	}
}
