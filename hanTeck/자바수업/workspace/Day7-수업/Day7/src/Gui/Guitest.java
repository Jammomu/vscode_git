package Gui;

import java.awt.Frame;

class CellPhone{
	String model;
	String number;
	int chord;
	
	void setNumber() {
		System.out.println("전화걸기");
	}
	void getNumber() {
		System.out.println("전화받기");
	}
	void getModel() {
		System.out.println("모델명:"+ this.model);
	}
}
class D_caPhone extends CellPhone{
	int pixel;
	
	public D_caPhone(String m,String n,int c,int p) {
		this.chord = c;
		this.model = m;
		this.pixel = p;
		this.number = n;
	}	
}
class MP3Phone extends CellPhone{
	int size;
	
	void Listening() {
		System.out.println("음악듣기");
	}	
}

public class Guitest extends Frame {

	public static void main(String[] args) {
		// 실습
		
		
		
		
		
		
		
		
	}

}
