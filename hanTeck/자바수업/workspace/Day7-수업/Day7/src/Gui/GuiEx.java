package Gui;

import java.awt.Button;
import java.awt.Frame;
// ������â�� �ҷ��� ���ִ� ������Ŭ������ �����Ͻ� �����Ѵ�.
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class MyFrame extends Frame{
	
	Button btn = new Button("ù��° ��ư");
	Button btn2 = new Button("�ι�° ��ư");
	
	public MyFrame() {
		// ������ ����â 
		setTitle("������� ������");
		
		// ������â ũ�� setSize(�ʺ� ����, ���� ����);
		setSize(500, 300);
		
		// ������â ��ġ ���� setLocation(������ġ,������ġ);
		setLocation(300, 100);
		
		// ������ư�� ������ �� ������ ����� �ްڴ�.
		// �̺�Ʈ : Ư���� ��Ȳ�� �߻����� �� �޼��带 ����
				
		addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
				System.exit(0); // ���α׷� ����
			}
		});		
		
		//������â ���� ������Ʈ�� �߰�
		// add(������Ʈ��������);
		add(btn);	
		add(btn2);
		
		// ������â�� ���̱� true ���� false ����������
		setVisible(true);
		
		// �⺻������ ȭ�� ��ġ
		// ���̾ƿ� ���� 
		
	}	
}

public class GuiEx {

	public static void main(String[] args) {
		MyFrame my = new MyFrame();
		
		// �ڹ� �׷��� 
		// �ڹ� 1.0 -> awt 
		// awt -> �ü���� ���� ���� 
		// Abstaract windowing Toolkit
		// java.awt ��Ű��
		
		//Frame f1 = new Frame();
		
		// ������Ʈ : �ؽ�Ʈ �ʵ� , ��ư , ��(ǥ��)�ù����
		// �����̳� : ������Ʈ���� ����ִ� Ʈ��!
		}
}
