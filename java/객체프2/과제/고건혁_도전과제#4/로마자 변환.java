package firstproject;

import java.util.Scanner;



public class assignment {
	
	
	public static void main (String[]args)
	{
		//변수들 선언
		int 연도,천의자리=0,백의자리=0,십의자리=0,일의자리=0;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("연도를 입력하세요 : ");
		연도 = scan.nextInt();
		if(연도<1||연도>=5000)//1미만,5000이상이면 끝내기
		{
			System.out.println("잘못 입력된 연도");
			return;
		}
		if(연도/1000>=1)//각 자릿수들의 숫자 구하기
			for(;연도>=1000;천의자리++)
				연도-=1000;
		if(연도/100>=1)
			for(;연도>=100;백의자리++)
				연도-=100;
		if(연도/10>=1)
			for(;연도>=10;십의자리++)
				연도-=10;
		일의자리 = 연도;
		
		if(천의자리==4)//4000대면 MF, 아니면 M반복 출력
			System.out.print("MF");
		else
			for(;천의자리>0;천의자리--)
				System.out.print("M");
		if(백의자리==9)//400또는 900이면 두자릿수 출력, 아니면 500또는 100출력
			System.out.print("CM");
		else if(백의자리==4)
			System.out.print("CD");
		else
			for(;백의자리>0;백의자리--)
			{
				if(백의자리>=5) 
				{
					System.out.print("D");
					백의자리 -=4;
				}
				else
					System.out.print("C");
			}
		if(십의자리==9)//40또는 90이면 두자릿수 출력, 아니면 50또는 10 출력
			System.out.print("XC");
		else if(십의자리==4)
			System.out.print("XL");
		else
			for(;십의자리>0;십의자리--)
			{
				if(십의자리>=5) 
				{
					System.out.print("L");
					십의자리 -=4;
				}
				else
					System.out.print("X");
			}
		if(일의자리==9)//4또는 9이면 두자릿수 출력, 아니면 5또는 1출력
			System.out.print("IX");
		else if(일의자리==4)
			System.out.print("IV");
		else
			for(;일의자리>0;일의자리--)
			{
				if(일의자리>=5) 
				{
					System.out.print("V");
					일의자리 -=4;
				}
				else
					System.out.print("I");
			}
	}
}