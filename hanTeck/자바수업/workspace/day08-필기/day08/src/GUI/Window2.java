package GUI;

import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class GuiTest2 extends Frame{

	Button btn1 = new Button("ù��°");
	Button btn2 = new Button("�ι�°");
	Button btn3 = new Button("����°");
	Button btn4 = new Button("�׹�°");
	Button btn5 = new Button("�ټ���°");
	Button btn6 = new Button("������°");
	
	//BorderLayout
	// 5���� ���� ������ �ִ� ���̾ƿ�
	// ��,��,��,��,�߾�
	// �ϳ��� ������Ʈ�ۿ� �ö� �� ����.
	
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
				System.exit(0); // ���α׷� ����
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
