package firstproject;

import java.util.Scanner;



public class assignment {
	
	
	public static int repeat(int num1)//반복 메소드
	{
		int temp,count;
		
		for(count=0;num1>=1;num1/=10)//num1을 10으로 나누며 1보다 작아질때까지 반복
		{
			temp=num1%10;//num1의 일의 자릿수 홀짝 판별
			if(temp%2==0)
				count++;
		}
		return count;
	}
	public static int recursion(int num2)//재귀 메소드
	{
		int count;
		for(count=0;num2>=1;num2/=10)//num2를 10으로 나누며 1보다 작아질때까지 반복
		{
			if(num2<10)//num2의 일의 자릿수 홀짝 판별
			{
				if(num2%2==0)	
				count++;
			}
			else
			{
				count+=recursion(num2%10);//뒤의 일의 자릿수를 구하기 위해 재귀 호출
			}
		}
		
		return count;
	}
	
	public static void main (String[]args)
	{
		//변수들 선언
		int num;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("양의 정수를 입력하세요 : ");
		num= scan.nextInt();
		System.out.print("반복 결과 : ");
		System.out.println(repeat(num)+"개");
		System.out.print("재귀 결과 : ");
		System.out.println(recursion(num)+"개");
		
		
	}
}