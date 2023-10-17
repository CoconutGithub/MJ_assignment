package assignment;

public class Item {
	String name;
	int price,num;
	
	public Item(String n_name,int n_price,int n_num) {
		name=n_name;
		price=n_price;
		num=n_num;
	}
	public String getName() {
		return name;
	}
	public int getPrice() {
		return price;
	}
	public int getNum() {
		return num;
	}
	public String toString() {
		return name+"	"+price+"	"+num;
	}
	public void setName(String n_name) {
		name=n_name;
	}
	public void setPrice(int n_price) {
		price=n_price;
	}
	public void setNum(int n_num) {
		num=n_num;
	}
	public void addNum(int p_num) {
		num+=p_num;
	}
	public void subNum(int m_num) {
		num-=m_num;
	}
}
