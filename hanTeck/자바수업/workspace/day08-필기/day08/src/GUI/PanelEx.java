package GUI;

import java.awt.Button;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.Panel;

public class PanelEx {

	public static void main(String[] args) {
		
		//������â ����� frame
		Frame win = new Frame();
		GridLayout grid = new GridLayout(4,1);
		
		//�г�Ŭ���� �߰�
		Panel pan = new Panel();
		pan.setLayout(new GridLayout(1,2));
		
		
		Button btn1 = new Button("1.������");
		Button btn2 = new Button("2.��");
		Button btn3 = new Button("3.�����");
		Button btn4 = new Button("4.������");
		Button btn5 = new Button("5.�ھ߰ڴ�");
		
		win.setLayout(grid);
		//������ ��ư�� ������ â�� �ø���
		pan.add(btn1);
		pan.add(btn5);		
		// ������ �гο������� ��ư�� �߰�
		win.add(pan);
		win.add(btn2);
		win.add(btn3);
		win.add(btn4);
		win.setBounds(0, 0, 1920, 1080);
		win.setVisible(true);
		
		//panel Ŭ����
		// �ϳ��� �����ȿ� �������� �������� ������ ����� �� �ִ� Ŭ����
		// �׷��� ������ش�.

	}

}
