
//���Ŭ���� �θ�Ŭ����
// ����Ŭ���� ���Ŭ������ ��ӹ޾Ƽ� ����

class Avg{
	int avg;
	
	void average(int tot) {
		avg = tot/2;
	}	
}
class Total extends Avg{
	int tot;
	int kor;
	int eng;
	
	Total(){} // �⺻������ �ۼ�
	
	public Total(int kor, int eng) {
		this.kor = kor;
		this.eng = eng;
		this.tot = this.kor + this.eng;
		
		average(this.tot);
		System.out.println("����,���:"
						   +this.tot+this.avg);
		}
	
	void total(int kor,int eng) {
		this.kor = kor;
		this.eng = eng;
		
		this.tot = this.kor + this.eng;
	}	
	
}
public class InheritanceEx3 {

	public static void main(String[] args) {
//		Total st1 = new Total();
//		
//		st1.total(100,98);
//		st1.average(st1.tot);
		
//		Total st2 = new Total(100,90);
//		st2.average(st2.tot);
//		
//		
//		System.out.println("����:"+ st2.tot 
//						   +"���:"+st2.avg);
		Total st3 = new Total(90,80);
	}
}
