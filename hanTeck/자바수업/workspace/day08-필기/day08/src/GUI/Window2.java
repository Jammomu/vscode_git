package GUI;

import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class GuiTest2 extends Frame{

	Button btn1 = new Button("첫번째");
	Button btn2 = new Button("두번째");
	Button btn3 = new Button("세번째");
	Button btn4 = new Button("네번째");
	Button btn5 = new Button("다섯번째");
	Button btn6 = new Button("여섯번째");
	
	//BorderLayout
	// 5개의 영역 가지고 있는 레이아웃
	// 동,서,남,북,중앙
	// 하나의 컴포넌트밖에 올라갈 수 없다.
	
	BorderLayout border = new BorderLayout();
	
	
	
	public GuiTest2() {
	
		setBounds(100, 100, 300, 300);
	
		setLayout(border);
		
		add(btn1,BorderLayout.CENTER);
		add(btn2,BorderLayout.EAST);
		add(btn3,BorderLayout.NORTH);
		add(btn4,BorderLayout.SOUTH);
		add(btn5,BorderLayout.WEST);
		add(btn6,BorderLayout.SOUTH);
		
		addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
				System.exit(0); // 프로그램 종료
			}
		});		
		
		setVisible(true);
	}
}
public class Window2 {

	public static void main(String[] args) {
		GuiTest2 n = new GuiTest2(); 

	}

}
