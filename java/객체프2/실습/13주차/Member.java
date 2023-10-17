package assignment;

public class Member {
	int ID,total;
	String name;
	
	public Member(int n_ID,String n_name) {
		ID=n_ID;
		name=n_name;
		total=0;
	}
	public String getName() {
		return name;
	}
	public int getID() {
		return ID;
	}
	public int getTotal() {
		return total;
	}
	public String toString() {
		return ID+"	"+name+"	"+total;
	}
	public void setName(String n_name) {
		name=n_name;
	}
	public void setID(int n_ID) {
		ID=n_ID;
	}
	public void setNum(int n_total) {
		total=n_total;
	}

}
