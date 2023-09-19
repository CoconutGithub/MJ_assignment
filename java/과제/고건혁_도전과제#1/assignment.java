package firstproject;

import java.util.Scanner;



public class assignment {
	
	public static void main (String[]args)
	{
		
		int 가격,거스름돈;
		int 오백원,백원,오십원,십원,오원,일원;
		
		Scanner scan = new Scanner(System.in);
		System.out.print("물건의 가격(1,000원 이하)을 입력하세요 : ");
		가격 = scan.nextInt();
		거스름돈 = 1000 - 가격;
		System.out.println(가격 + "원 짜리 물건을 샀고, 1,000원을 내셨습니다.");
		System.out.println("거스름돈은 " + 거스름돈 + "원 입니다.");
		System.out.println("거스름돈의 내역은 다음과 같습니다 : ");
		
		오백원 = 거스름돈/500;
		거스름돈 = 거스름돈%500;
		백원 = 거스름돈/100;
		거스름돈 = 거스름돈%100;
		오십원 = 거스름돈/50;
		거스름돈 = 거스름돈%50;
		십원 = 거스름돈/10;
		거스름돈 = 거스름돈%10;
		오원 = 거스름돈/5;
		거스름돈 = 거스름돈%5;
		일원 = 거스름돈/1;
		
		System.out.println("500원 짜리 동전 갯수 = "+ 오백원);
		System.out.println("100원 짜리 동전 갯수 = "+ 백원);
		System.out.println("50원 짜리 동전 갯수 = "+ 오십원);
		System.out.println("10원 짜리 동전 갯수 = "+ 십원);
		System.out.println("5원 짜리 동전 갯수 = "+ 오원);
		System.out.println("1원 짜리 동전 갯수 = "+ 일원);
		
		
		
	}

}
