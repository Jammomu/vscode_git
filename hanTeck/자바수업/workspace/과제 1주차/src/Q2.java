
public class Q2 {

	/*
 	   �µ��� �Է¹ް�, �ι�° �Է� ������ ���� (��C���� ����, ��F���� ȭ��)�� �ް�, �� �� �Է°��� �̿��� �� ���� �µ���ȯ�� �ϼ���.
	ȭ���µ��� �������µ� *1.8 + 32��, �����µ��� ��(ȭ���µ�-32)/1.8�� �Դϴ�.
	����ϴ� ������
	input_degree		#�Է¿µ�
	kind				#�µ��� ���� (��C���� ����, ��F���� ȭ��)
       output_degree	#��ȯ�µ�

	 */
	public static void main(String[] args) {
		
		double input_degree = 0.0f;
		char kind;
		double output_degree = 0.0f;
		
		input_degree = 36.5;
		kind = 'C';
		
		if(kind == 'C') {
			output_degree = input_degree * 1.8 + 32; 
		}else if(kind == 'F'){
			output_degree = (input_degree-32)/1.8;
		}
		
		System.out.println("��ȯ�� �µ���:"+ output_degree);
		
		
	}

}
