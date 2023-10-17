package assignment;

public class Shape {
	String color;
	double area,perimeter;
	
	public Shape(String new_c) {
		color = new_c;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String new_c) {
		color = new_c;
	}
	public String getAll() {
		return getColor();
	}
	public void calculateArea() {
		area = 0.0;
	}
	public void calculatePerimeter() {
		perimeter = 0.0;
	}
}
