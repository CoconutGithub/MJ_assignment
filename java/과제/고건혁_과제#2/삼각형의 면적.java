package firstproject;

import java.util.Scanner;

public class assignment {
	
	public static void main (String[]args)
	{
		
		double a,b,c,s,area;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("세 변의 길이를 입력하라 : ");
		a = scan.nextDouble();
		b = scan.nextDouble();
		c = scan.nextDouble();
		
		s = (a+b+c)/2;
		
		area = Math.sqrt(s*(s-a)*(s-b)*(s-c));
		
		System.out.print("삼각형의 면적은 : "+ area);
	}

}
