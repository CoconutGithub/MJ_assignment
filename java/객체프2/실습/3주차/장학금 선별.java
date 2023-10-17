package firstproject;

import java.util.Scanner;



public class assignment {
	
	public static void main (String[]args)
	{
		
		Double 평점;
		
		Scanner scan = new Scanner(System.in);
		System.out.print("평점을 입력하세요 : ");
		평점 = scan.nextDouble();
		
		if(평점 >= 4.3)
		{
			System.out.print("전액장학금이다.");
		}
		else if((평점 >= 4.0)&&(평점 < 4.3))
		{
			System.out.print("반액장학금이다.");
		}
		else if((평점 >= 3.7)&&(평점 < 4.0))
		{
			System.out.print("모범장학금이다.");
		}
		else
		{
			System.out.print("장학금을 받을 수 없다.");
		}
	}

}