package Gui;

import java.awt.Frame;

class CellPhone{
	String model;
	String number;
	int chord;
	
	void setNumber() {
		System.out.println("��ȭ�ɱ�");
	}
	void getNumber() {
		System.out.println("��ȭ�ޱ�");
	}
	void getModel() {
		System.out.println("�𵨸�:"+ this.model);
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
		System.out.println("���ǵ��");
	}	
}

public class Guitest extends Frame {

	public static void main(String[] args) {
		// �ǽ�
		
		
		
		
		
		
		
		
	}

}
