package assignment;

public class Tiger extends Animal{
	int weight;
	
	public Tiger(String n_color,int n_weight) {
		super(n_color);
		weight=n_weight;
	}
	public int getWeight() {
		return weight;
	}
	public void setWeight(int n_weight) {
		weight=n_weight;
	}
	public String Print() {
		return "호랑이의 색깔 = "+super.getColor()+"	몸무게 = "+getWeight();
	}
	public void Sound() {
		System.out.println("어흥이라고 포효한다");
	}
}
