
public class Q4 {

	/*
	 ����Ʈ �о������ ��������(m^2)�� �޾� ����(x��) ������ ��ȯ�ϰ�, �������� �������� �����ϼ���.
	��������� ��������/3.305 �� �ϸ� �˴ϴ�. 30 �� �̸��̸� ���� ����Ʈ�Դϴ�.
	����ϴ� ������
	m2_area		#����(��������)
       pyung_area	#����(���)
	 */
	
	public static void main(String[] args) {
		
		double m2_area = 0.0f;
		double pyung_area = 0.0f;
		
		m2_area = 100;
		pyung_area = m2_area/3.305;
		
		if(pyung_area < 30) {
			System.out.println("����� ����Ʈ �����"+pyung_area+"�Դϴ�. \n��������Ʈ(�ʹ� �۾Ƽ� ���̵� ����ڳ׿� ����)");
		}else {
			System.out.println("����� ����Ʈ �����"+pyung_area+"�Դϴ�. \n��������Ʈ(�� ��û ũ�׿�! ���߿� ����� ����?) ");
		}

	}

}
