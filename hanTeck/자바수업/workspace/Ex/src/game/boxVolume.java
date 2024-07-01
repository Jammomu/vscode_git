package game;

import java.util.Scanner;

class Box{
	int x;
	int y;
	int z;
	
	 Box() {
		Scanner sc = new Scanner(System.in); 
		System.out.print("가로길이 입력: ");
		this.x =sc.nextInt();  
		System.out.print("세로길이 입력: ");
		this.y =sc.nextInt(); 
		System.out.print("높이길이 입력: ");
		this.z =sc.nextInt(); 
		System.out.println("상자의 가로는 "+this.x+"Cm\n상자의 세로는 "+this.y+"Cm\n상자의 높이는 "+this.z+"Cm");
	 }
		
	
	
	void getVolume(){
		int volume;
		System.out.println("상자의 부피를 출력합니다.");
		volume = this.x*this.y*this.z;
		System.out.println("상자의 부피: "+volume);
		}
	
}


public class boxVolume {

	public static void main(String[] args) {
		
		Box a = new Box();
		
		a.getVolume();
		
	}

}
