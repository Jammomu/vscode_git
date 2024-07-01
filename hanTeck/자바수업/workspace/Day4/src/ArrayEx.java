
public class ArrayEx {

	public static void main(String[] args) {
		// 배열 : 같은 타입의 변수들로 이루어진 집합
		// 배열 만드는 방법
		// 자료형[] 배열명 = new 자료형[길이];
		
		int num;
		// 3개의 정수를 저장하는 배열 선언
		int[] Arr = new int[3];
		
		// 인덱스번호 0부터 시작
		// 인덱스 = 길이-1 
		// 저장법
		// 배열명[index] = 값;
		// index 번호를 변수에 저장할수있다.
		// 변수에 저장하고 간단한 연산도 가능하다.
		// 배열명[변수명];
		// 배열명[변수명+정수];
		// 단! 실수X ,문자 X
		
		Arr[0] = 1000;
		Arr[1] = 2000;
		Arr[2] = 3000;
		
		System.out.println(Arr[0]);
		System.out.println(Arr[1]);
		System.out.println(Arr[2]);
		
		// 배열을 선언하면 변수는 여러곳에 생성
		// 배열은 동일한 공간이 나란하게 선언
			
		int[] Arr2 = new int[5]; 
		
		// 실수를 저장하는 3개의 배열 선언
		double[] dArr = new double[3];
		
		dArr[0] = 1.1;
		dArr[1] = 1.2;
		dArr[2] = 1.3;
				
		System.out.println(dArr[0]);
		System.out.println(dArr[1]);
		System.out.println(dArr[2]);
		
		// 문자열을 저장하는 3개의 배열을 선언
		String[] name = new String[3];
		
		name[0] = "설난";
		name[1] = "페이소";
		name[2] = "뽀로로";
		
		System.out.println(name[0]);
		System.out.println(name[1]);
		System.out.println(name[2]);
	}
}
