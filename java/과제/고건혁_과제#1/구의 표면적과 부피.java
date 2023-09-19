package firstproject;

import java.util.Scanner;



public class assignment {
	
	public static void main (String[]args)
	{
		
		double 부피,표면적,PI=3.14159;
		
		Scanner scan = new Scanner(System.in);
		System.out.print("구의 반지름을 입력하세요 : ");
		double r = scan.nextDouble();
		
		표면적 = 4*PI*r*r;
		부피 = 표면적/3*r;
		
		System.out.println("부피 = "+부피);
		System.out.println("표면적 = "+표면적);
		
	}

}
