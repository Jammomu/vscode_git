package GUI;

import java.awt.Button;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.Panel;

public class PanelEx {

	public static void main(String[] args) {
		
		//윈도우창 만드는 frame
		Frame win = new Frame();
		GridLayout grid = new GridLayout(4,1);
		
		//패널클래스 추가
		Panel pan = new Panel();
		pan.setLayout(new GridLayout(1,2));
		
		
		Button btn1 = new Button("1.집가기");
		Button btn2 = new Button("2.잠");
		Button btn3 = new Button("3.놀러가기");
		Button btn4 = new Button("4.나가기");
		Button btn5 = new Button("5.자야겠다");
		
		win.setLayout(grid);
		//각각의 버튼을 윈도우 창에 올리기
		pan.add(btn1);
		pan.add(btn5);		
		// 나눠진 패널영역위에 버튼을 추가
		win.add(pan);
		win.add(btn2);
		win.add(btn3);
		win.add(btn4);
		win.setBounds(0, 0, 1920, 1080);
		win.setVisible(true);
		
		//panel 클래스
		// 하나의 영역안에 여려개의 영역으로 나눠서 사용할 수 있는 클래스
		// 그룹을 만들어준다.

	}

}
