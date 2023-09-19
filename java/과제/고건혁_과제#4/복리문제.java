package firstproject;

import java.util.Scanner;



public class assignment {
	
	
	public static void main (String[]args)
	{
		//변수들 선언
		int 연도수=1;
		double 원금,원리금,연이율;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("원금을 입력하세요 : ");
		원금 = scan.nextDouble();
		System.out.print("연이율을 입력하세요 : ");
		연이율 = scan.nextDouble();
		System.out.println("연도수 원리금");
		원리금 = 원금;
		for(;원리금<=원금*2;연도수++)
		{
			원리금 = 원리금*(1+연이율/100);
			System.out.println(연도수+"	"+원리금);
		}
		연도수=연도수-1;
		System.out.println("필요한 연도수 = "+연도수);
	}
}