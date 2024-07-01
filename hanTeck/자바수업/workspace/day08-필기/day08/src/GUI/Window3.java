package GUI;

import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class GuiTest3 extends Frame{

	Button btn1 = new Button("첫번째");
	Button btn2 = new Button("두번째");
	Button btn3 = new Button("세번째");
	Button btn4 = new Button("네번째");
	Button btn5 = new Button("다섯번째");
	Button btn6 = new Button("여섯번째");
	
	//frame 클래스는 기본적으로 배치
	// borderlayout -> center
	
	//Gridlayout
	// 행열을 이용해서 순서대로 올리는 배치
	// 바둑판 배치
	// 컴포넌트의 위치는 고정, 크기는 모두 동일한 것!
	
	GridLayout grid = new GridLayout(100,20); //지뢰찾기 만들수 있겠다
	
	
	public GuiTest3() {
	
		setBounds(100, 100, 300, 300);
	
		setLayout(grid);
		add(btn1);		add(btn2);
		add(btn3);		add(btn4);
		add(btn5);		add(btn6);
		
		addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
				System.exit(0); // 프로그램 종료
			}
		});		
		
		setVisible(true);
	}
}
public class Window3 {

	public static void main(String[] args) {
		GuiTest3 n = new GuiTest3(); 

	}

}
