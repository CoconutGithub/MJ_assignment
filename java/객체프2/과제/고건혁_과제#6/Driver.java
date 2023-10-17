package assignment;

public class Driver {//실행클래스
	
	public static void main(String args[]) {
		itemSales 도시락 = new itemSales();
		
		도시락.set단가(1000);
		도시락.set대량판매량(10);
		도시락.set대량할인율(30);
		
		도시락.set판매수(1);
		System.out.println("도시락 한 개를 팔았다.");
		도시락.Sale();
		
		도시락.set판매수(9);
		System.out.println("도시락 9 개를 팔았다.");
		도시락.Sale();
		
		도시락.set판매수(10);
		System.out.println("도시락 10 개를 팔았다.");
		도시락.Sale();
		
		도시락.set판매수(50);
		System.out.println("도시락 50 개를 팔았다.");
		도시락.Sale();
	}
}
