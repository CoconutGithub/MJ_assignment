package assignment;

public class Rectangle extends Shape{
	double height,width;
	
	public Rectangle(String new_c,double new_w,double new_h) {
		super(new_c);
		width =new_w;
		height=new_h;
	}
	public double getWidth() {
		return width;
	}
	public double getHeight() {
		return height;
	}
	public void setWidth(double new_w) {
		width=new_w;
	}
	public void setHeight(double new_h) {
		height=new_h;
	}
	public String getAll() {
		return "색 = "+getColor()+", 가로 = "+getWidth()+", 세로 = "+getHeight();
	}
	public void calculateArea() {
		area = width*height;
	}
	public void calculatePerimeter() {
		perimeter = (2*width)+(2*height);
	}
}
