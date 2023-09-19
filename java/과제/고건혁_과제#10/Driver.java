package assignment;


public class Driver {//실행클래스
	
	public static void main(String args[]) {
		Simple Ds = new Simple("선남",100,12,0.05,10000000);
		System.out.println("정기예금(단리)");
		System.out.println(Ds.printAll());
		
		Compound Dc = new Compound("선녀",200,12,0.05,10000000);
		System.out.println("정기예금(복리)");
		System.out.println(Dc.printAll());
		
		Saving s = new Saving("길동",300,12,0.05,100000);
		System.out.println("정기적금");
		System.out.println(s.printAll());
	}
}