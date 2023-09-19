package assignment;

public class Cat extends Animal{
	String kind;
	
	public Cat(String n_color,String n_kind) {
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
		return "고양이의 색깔 = "+super.getColor()+"	품종 = "+getKind();
	}
	public void Sound() {
		System.out.println("야옹이라는 소리를 낸다");
	}
}
