package assignment;


public class Driver {//실행클래스
	
	public static void main(String args[]) {
		Shape[] s=new Shape[3];
		
		s[0] = new Circle("빨강",2.5);
		System.out.println("원: "+s[0].getAll());
		s[0].calculateArea();
		s[0].calculatePerimeter();
		System.out.println("면적: "+s[0].area);
		System.out.println("둘레: "+s[0].perimeter);
		
		s[1] = new Rectangle("파랑",3.0,4.0);
		System.out.println("직사각형: "+s[1].getAll());
		s[1].calculateArea();
		s[1].calculatePerimeter();
		System.out.println("면적: "+s[1].area);
		System.out.println("둘레: "+s[1].perimeter);
		
		s[2] = new Circle("초록",3.0);
		System.out.println("원: "+s[2].getAll());
		s[2].calculateArea();
		s[2].calculatePerimeter();
		System.out.println("면적: "+s[2].area);
		System.out.println("둘레: "+s[2].perimeter);
	}
}
