package firstproject;

import java.util.Scanner;



public class assignment {
	
	public static int toNum(char N)//로마자 문자 입력 받아서 10진수 숫자로 반환
	{

		if('I'==N)
			return 1;
		else if('V'==N)
			return 5;
		else if('X'==N)
			return 10;
		else if('L'==N)
			return 50;
		else if('C'==N)
			return 100;
		else if('D'==N)
			return 500;
		else if('M'==N)
			return 1000;
		else
			return -1;
		
	}
	public static int toDec(String rome)//로마자 문자열 입력 받아서 10진수 반횐
	{
		int dec=0,i,num1,num2;
		
		
		for(i=0;i<rome.length();i++)
		{
			num1 = toNum(rome.charAt(i));
			if(i+1==rome.length())
			{
				dec+=num1;
				break;
			}
			num2 = toNum(rome.charAt(i+1));
		
			if(num1<num2)
			{
				dec+=num2-num1;
				i++;
			}
			else
				dec+=num1;
		}
		return dec;
	}
	public static void toOct(int dec)//10진수를 받아서 8진수로 변환 후 출력
	{
		if(dec==0)
			return;
		
		toOct(dec/8);
		System.out.print(dec%8);
	}
	
	public static void main (String[]args)
	{
		int num;
		String rome;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("로마 숫자를 입력하세요 : ");
		rome = scan.next();
		num = toDec(rome);
		System.out.print("10진수로 변환한 숫자 : ");
		System.out.println(num);
		System.out.print("8진수로 변환한 숫자 : ");
		toOct(num);
	}
}