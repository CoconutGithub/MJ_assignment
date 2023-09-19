package firstproject;

import java.util.Scanner;



public class assignment {
	
	public static void main (String[]args)
	{
		
		String binary,temp1,temp2,temp3,temp4;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("12비트의(bit)의 이진수를 입력하세요 : ");		
		binary = new String(scan.nextLine());
		
		temp1 = binary.substring(0, 3);
		temp2 = binary.substring(3, 6);
		temp3 = binary.substring(6, 9);
		temp4 = binary.substring(9, 12);
		
		System.out.print("이진수 "+binary+"에 대응하는 8진수는 "+Integer.parseInt(temp1, 2)+Integer.parseInt(temp2, 2)+Integer.parseInt(temp3, 2)+Integer.parseInt(temp4, 2)+"이다.");
	}

}