package assignment;

public class Dog extends Animal{
	String kind;
	
	public Dog(String n_color,String n_kind) {
		super(n_color);
		kind=n_kind;
	}
	public String getKind() {
		return kind;
	}
	public void setKind(String n_kind) {
		kind=n_kind;
	}
	public String Print() {
		return "개의 색깔 = "+super.getColor()+"	품종 = "+getKind();
	}
	public void Sound() {
		System.out.println("멍멍하고 짓는다");
	}
}
