package GUI;

import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class GuiTest3 extends Frame{

	Button btn1 = new Button("ù��°");
	Button btn2 = new Button("�ι�°");
	Button btn3 = new Button("����°");
	Button btn4 = new Button("�׹�°");
	Button btn5 = new Button("�ټ���°");
	Button btn6 = new Button("������°");
	
	//frame Ŭ������ �⺻������ ��ġ
	// borderlayout -> center
	
	//Gridlayout
	// �࿭�� �̿��ؼ� ������� �ø��� ��ġ
	// �ٵ��� ��ġ
	// ������Ʈ�� ��ġ�� ����, ũ��� ��� ������ ��!
	
	GridLayout grid = new GridLayout(100,20); //����ã�� ����� �ְڴ�
	
	
	public GuiTest3() {
	
		setBounds(100, 100, 300, 300);
	
		setLayout(grid);
		add(btn1);		add(btn2);
		add(btn3);		add(btn4);
		add(btn5);		add(btn6);
		
		addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
				System.exit(0); // ���α׷� ����
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
