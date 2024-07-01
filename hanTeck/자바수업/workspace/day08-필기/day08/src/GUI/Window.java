package GUI;

import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class GuiTest1 extends Frame{

	Button btn1 = new Button("첫번째");
	Button btn2 = new Button("두번째");
	
	FlowLayout flow = new FlowLayout();
	// FlowLayOut 배치관리자
	// 컴포넌트를 컴포넌트의 원래 크기대로 차례대로 배치
	// 왼쪽으로 정렬
	// 오른쪽으로 정렬
	// 가운데부터 정렬 -> 기본값
	public GuiTest1() {
		// 윈도우의 크기와 위치를 변경한다.
		setBounds(100, 100, 300, 300);
		
		//실제 윈도우 창에 flowlayout 배치관리자로 적용
		// setLayout(참조변수);
		//setLayout(flow.RIGHT);
		
		// flow 참조변수를 이용해서 정렬
		//setAlignment(정렬방식);
		//flow.setAlignment(FlowLayout.LEFT);
		setLayout(flow);
		
		add(btn1);
		add(btn2);		
		
		addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
				System.exit(0); // 프로그램 종료
			}
		});		
		
		setVisible(true);
	}
}
public class Window {

	public static void main(String[] args) {
		GuiTest1 n = new GuiTest1(); 

	}

}
