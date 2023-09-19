package assignment;

public abstract class Animal {
	String color;
	
	public Animal(String n_color) {
		color = n_color;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String n_color) {
		color=n_color;
	}
	public String Print() {
		return "동물의 색깔 ="+getColor();
	}
	public abstract void Sound();
}
