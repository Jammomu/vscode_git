package GUI;

import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class GuiTest1 extends Frame{

	Button btn1 = new Button("ù��°");
	Button btn2 = new Button("�ι�°");
	
	FlowLayout flow = new FlowLayout();
	// FlowLayOut ��ġ������
	// ������Ʈ�� ������Ʈ�� ���� ũ���� ���ʴ�� ��ġ
	// �������� ����
	// ���������� ����
	// ������� ���� -> �⺻��
	public GuiTest1() {
		// �������� ũ��� ��ġ�� �����Ѵ�.
		setBounds(100, 100, 300, 300);
		
		//���� ������ â�� flowlayout ��ġ�����ڷ� ����
		// setLayout(��������);
		//setLayout(flow.RIGHT);
		
		// flow ���������� �̿��ؼ� ����
		//setAlignment(���Ĺ��);
		//flow.setAlignment(FlowLayout.LEFT);
		setLayout(flow);
		
		add(btn1);
		add(btn2);		
		
		addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
				System.exit(0); // ���α׷� ����
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
