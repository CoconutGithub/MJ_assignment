package assignment;

public class Driver {//실행클래스
	
	public static void main(String args[]) {
		
		Employee p1 = new Employee();//첫번째 객체 생성
		p1.setName("이도령");
		p1.setNum(100);
		p1.setAge(25);
		System.out.println(p1.getAll());
		
		Employee p2 = new Employee();//두번째 객체 생성
		p2.setName("성춘향");
		p2.setNum(200);
		p2.setAge(18);
		System.out.println(p2.getAll());
		p2.setNum(300);
		System.out.println(p2.getAll());
	}
}
