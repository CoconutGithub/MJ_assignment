package assignment;

public class Driver {//실행클래스
	
	public static void main(String args[]) {
		Course c1 = new Course("자바프로그래밍");
		System.out.println("교과목명: "+c1.subject+"\n");
		c1.addStudent(7101, "홍길동", 96, 87, 92);
		c1.addStudent(7106, "김갑돌", 72, 90, 78);
		c1.addStudent(7132, "이갑순", 63, 84, 82);
		c1.printAll();
		System.out.print(c1.getAverage());
	}
}
