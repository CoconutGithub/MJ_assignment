package firstproject;

import java.util.Scanner;



public class assignment {
	
	
	public static int repeat(int num10)
	{
		int num8=0,i;
		
		for(i=1;num10>0;num10/=8)
		{
			if(num10%8==0)
			{
				i*=10;
				continue;
			}
			num8+=(num10%8)*i;
			i*=10;
		}
		return num8;
	}
	public static int recursion(int num10)
	{	
		int num8=0;
		
		if(num10/8<=0)
		{
			num8 =num10%8;
			return num8 ;
		}
		else
		{
			num8 = recursion(num10/8)*10+(num10%8);
			return num8;
		}
	}
	
	public static void main (String[]args)
	{
		//변수들 선언
		int num;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("양의 정수를 입력하세요 : ");
		num= scan.nextInt();
		System.out.println("재귀를 이용하여 구한 8진수 = "+recursion(num));	
		System.out.println("반복을 이용하여 구한 8진수 = "+repeat(num));		
	}
}