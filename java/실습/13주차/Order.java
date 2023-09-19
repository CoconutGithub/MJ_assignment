package assignment;

public class Order {
	static int order_num;
	Member mem;
	Item item;
	int num;
	
	public Order(Member n_mem,Item n_item,int n_num) {
		mem=n_mem;
		item=n_item;
		num=n_num;
		if(num<=item.getNum()) {
			item.num-=num;
			mem.total+=item.price*num;
			order_num++;
		}
		else {
			System.out.println("재고가 부족하여 주문을 처리할 수 없다.");
		}
	}
	public String toString() {
		return mem.name+": "+item.name+" "+num+"개 주문한다.";
	}
	public int getOrderNum() {
		return order_num;
	}

}
