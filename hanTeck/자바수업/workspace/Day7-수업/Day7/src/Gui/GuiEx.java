package Gui;

import java.awt.Button;
import java.awt.Frame;
// 윈도우창을 불러올 수있는 프레임클래스를 컴파일시 포함한다.
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class MyFrame extends Frame{
	
	Button btn = new Button("첫번째 버튼");
	Button btn2 = new Button("두번째 버튼");
	
	public MyFrame() {
		// 윈도우 제목창 
		setTitle("제목없는 윈도우");
		
		// 윈도우창 크기 setSize(너비 가로, 높이 세로);
		setSize(500, 300);
		
		// 윈도우창 위치 설정 setLocation(가로위치,세로위치);
		setLocation(300, 100);
		
		// 엑스버튼을 눌렀을 때 닫히는 기능을 달겠다.
		// 이벤트 : 특정한 상황이 발생했을 때 메서드를 실행
				
		addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
				System.exit(0); // 프로그램 종료
			}
		});		
		
		//윈도우창 위에 컴포넌트를 추가
		// add(컴포넌트참조변수);
		add(btn);	
		add(btn2);
		
		// 윈도우창을 보이기 true 보임 false 보이지않음
		setVisible(true);
		
		// 기본적으로 화면 배치
		// 레이아웃 설정 
		
	}	
}

public class GuiEx {

	public static void main(String[] args) {
		MyFrame my = new MyFrame();
		
		// 자바 그래픽 
		// 자바 1.0 -> awt 
		// awt -> 운영체제에 많이 의존 
		// Abstaract windowing Toolkit
		// java.awt 패키지
		
		//Frame f1 = new Frame();
		
		// 컴포넌트 : 텍스트 필드 , 버튼 , 라벨(표시)택배상자
		// 컨테이너 : 컴포넌트들을 모아주는 트럭!
		}
}
