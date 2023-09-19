package assignment;

public class Circle extends Shape{
	double radius;
	
	public Circle(String new_c,double new_r) {
		super(new_c);
		radius=new_r;
	}
	public double getRadius() {
		return radius;
	}
	public void setRadius(double new_r) {
		radius = new_r;
	}
	public String getAll() {
		return "색 = "+getColor()+", 반지름 = "+getRadius();
	}
	public void calculateArea() {
		area = 3.14*radius*radius;
	}
	public void calculatePerimeter() {
		perimeter = 2*3.14*radius;
	}
}
