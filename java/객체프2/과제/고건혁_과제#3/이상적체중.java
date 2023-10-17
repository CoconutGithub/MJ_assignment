package firstproject;

import java.util.Scanner;



public class assignment {
	
	
	public static void main (String[]args)
	{
		
		Double W신장,M신장,W체중,M체중;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("여성의 신장을 입력하세요 : ");
		W신장 = scan.nextDouble();
		System.out.print("남성의 신장을 입력하세요 : ");
		M신장 = scan.nextDouble();
		
		if(W신장 > 150)
		{
			W체중 = (37.8 + 0.75 * (W신장 - 150));
		}
		else
			W체중 = 37.8;
		if(M신장 > 150)
		{
			M체중 = (40 + 0.89 * (M신장 - 150));
		}
		else
			M체중 = 40.0;
		
		System.out.println("여성의 이상적인 체중은 "+W체중+"이다.");
		System.out.println("남성의 이상적인 체중은 "+M체중+"이다.");
	}

}