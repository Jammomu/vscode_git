package GUI;

import java.awt.Button;
import java.awt.Frame;
import java.awt.GridLayout;

class Wins extends Frame{
	Button[] btn1 = new Button[16];
	String[] bName = {"1","2","3","4","5","6","7","8","9","10","11"
			,"12","13","14","15","16"};
	
	public Wins() {
		for(int i =0;i<16;i++) {
			this.btn1[i] =new Button((i+1)+"");
		}
		setBounds(100, 100, 300, 300);
		GridLayout grid = new GridLayout(4,4);
		setLayout(grid);
	
		for(int i = 0;i<16;i++) {
		add(btn1[i]);
		}
		
		
	
		setVisible(true);
	
	}
}


public class Test {

	public static void main(String[] args) {
		
		Wins s = new Wins();
		
		
		
	}

}
