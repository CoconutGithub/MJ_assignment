package assignment;


public class Driver {//실행클래스
	
	public static void main(String args[]) {
		OverPayCalculator over = new OverPayCalculator(8000);
		over.plusTime(50);
		over.setSattime(6);
		over.setSuntime(2);
		over.calPay();
		System.out.println("주말 근무 직원의 주급: "+over.pay);
		
		DangerPayCalculator danger =new DangerPayCalculator(10000);
		danger.plusTime(36);
		danger.setDangertime(6);
		danger.calPay();
		System.out.println("위험 근무 직원의 주급: "+danger.pay);
	}
}