package firstproject;

import java.util.Scanner;



public class assignment {
	
	public static void main (String[]args)
	{
		
		String 이름, 생년월일;//문자열변수 생
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("이름을 입력하세요 : ");//이름을 입력세요 출력
		이름 = new String(scan.nextLine());//이름 입력받기
		System.out.print("생년월일을 입력하세요 : ");//생년월일을 입력하세요 출력
		생년월일 = new String(scan.nextLine());//생년월일 입력받기
		
		System.out.println("이름 : "+이름);//입력받은 이름출력
		System.out.println("생년월일 : "+생년월일);//입력받은 생년월일출력
	}

}
