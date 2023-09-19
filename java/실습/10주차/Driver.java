package assignment;


public class Driver {//실행클래스
	
	public static void main(String args[]) {
		Dog d = new Dog("갈색","진돗개");
		System.out.println(d.Print());
		d.Sound();
		System.out.println();
		
		Cat c =new Cat("흑색","페르시안");
		System.out.println(c.Print());
		c.Sound();
		System.out.println();
		
		Tiger t =new Tiger("황색",300);
		System.out.println(t.Print());
		t.Sound();
		System.out.println();
	}
}