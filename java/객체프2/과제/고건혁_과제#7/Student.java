package assignment;

public class Student {
	int ID;
	String name;
	int sign_credit;
	int max_credit;
	
	public Student(int new_ID,String new_name,int new_max_credit) {
		ID=new_ID;
		name=new_name;
		max_credit=new_max_credit;
		sign_credit =0;
	}
	public int getID() {
		return ID;
	}
	public String getName() {
		return name;
	}
	public int getMax_credit() {
		return max_credit;
	}
	public int getSign_credit() {
		return sign_credit;
	}
	public String getAll() {
		return getID()+"	"+getName()+"	"+getSign_credit();
	}
	public void setID(int new_ID) {
		ID = new_ID;
	}
	public void setName(String new_name) {
		name = new_name;
	}
	public void setMax_credit(int new_max_credit) {
		max_credit = new_max_credit;
	}
}
