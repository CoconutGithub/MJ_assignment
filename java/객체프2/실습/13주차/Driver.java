package assignment;

public class Driver {//실행클래스
	
	public static void main(String args[]) {
		Item it1=new Item("노트북",200000,100);
		Item it2=new Item("컴퓨터",500000,50);
		
		System.out.println("주문 전");
		System.out.println();
		System.out.println("상품명	가격	현 재고");
		System.out.println(it1.toString());
		System.out.println(it2.toString());
		System.out.println();
		
		Member mem1=new Member(2101,"선남");
		Member mem2=new Member(2102,"선녀");
		Member mem3=new Member(2103,"길동");
		
		System.out.println("변호	이름	총 구매금액");
		System.out.println(mem1.toString());
		System.out.println(mem2.toString());
		System.out.println(mem3.toString());
		System.out.println();
		
		Order ord1=new Order(mem1,it1,10);
		Order ord2=new Order(mem2,it1,20);
		Order ord3=new Order(mem2,it2,30);
		Order ord4=new Order(mem3,it1,5);
		Order ord5=new Order(mem3,it2,15);
		
		System.out.println(ord1.toString());
		System.out.println(ord2.toString());
		System.out.println(ord3.toString());
		System.out.println(ord4.toString());
		System.out.println(ord5.toString());
		System.out.println();
		
		System.out.println("주문 후");
		System.out.println();
		System.out.println("상품명	가격	현 재고");
		System.out.println(it1.toString());
		System.out.println(it2.toString());
		System.out.println();
		
		it1.addNum(20);
		it2.addNum(30);
		
		System.out.println("재고 추가 후");
		System.out.println();
		System.out.println("상품명	가격	현 재고");
		System.out.println(it1.toString());
		System.out.println(it2.toString());
		System.out.println();
		
		System.out.println("변호	이름	총 구매금액");
		System.out.println(mem1.toString());
		System.out.println(mem2.toString());
		System.out.println(mem3.toString());
	}
}

		