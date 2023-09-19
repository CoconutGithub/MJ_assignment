package assignment;

public class Driver {//실행클래스
	
	public static void main(String args[]) throws BalException {
		Account a = new Account(101,"선남",100);
		Account b = new Account(201,"선녀",200);
		System.out.println("번호	이름	잔고");
		System.out.println(a.toString());
		System.out.println(b.toString());
		System.out.println("101계좌로부터 50원을 출금한다");
		a.subMoney(50);
		System.out.println(a.toString());
		System.out.println("201계좌에서 101 계좌로 300원을 계좌이체한다.");
		b.movMoney(a, 300);
		System.out.println("201계좌에서 101 계좌로 100원을 계좌이체한다.");
		b.movMoney(a, 100);
		System.out.println(a.toString());
		System.out.println(b.toString());
	}
}