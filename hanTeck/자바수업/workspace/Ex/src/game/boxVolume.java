package game;

import java.util.Scanner;

class Box{
	int x;
	int y;
	int z;
	
	 Box() {
		Scanner sc = new Scanner(System.in); 
		System.out.print("���α��� �Է�: ");
		this.x =sc.nextInt();  
		System.out.print("���α��� �Է�: ");
		this.y =sc.nextInt(); 
		System.out.print("���̱��� �Է�: ");
		this.z =sc.nextInt(); 
		System.out.println("������ ���δ� "+this.x+"Cm\n������ ���δ� "+this.y+"Cm\n������ ���̴� "+this.z+"Cm");
	 }
		
	
	
	void getVolume(){
		int volume;
		System.out.println("������ ���Ǹ� ����մϴ�.");
		volume = this.x*this.y*this.z;
		System.out.println("������ ����: "+volume);
		}
	
}


public class boxVolume {

	public static void main(String[] args) {
		
		Box a = new Box();
		
		a.getVolume();
		
	}

}
