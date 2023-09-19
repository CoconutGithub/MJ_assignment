package firstproject;

import java.util.Scanner;



public class assignment {
	
	
	public static void main (String[]args)
	{
		//변수들 선언
		int XX,Y=0,ZZZ,i;
		String name="이름",유형="학생";
		Scanner scan = new Scanner(System.in);
		
		for(i=1;;i++)//i값을 1씩 계속 늘리며 무한 루프
		{
			System.out.print("이름은? ");
			name = scan.nextLine();
			if(name.equals("끝"))//끝내는 조건으로 이름에 끝입력
				break;
			System.out.print("입학 연도는? ");
			XX = (scan.nextInt()-2000);
			scan.nextLine();//nextInt로 입력 받았으니 공백 제거를 위해 한번 nextLine으로 받아
			System.out.print("입학 유형은(신입생 혹은 편입생)? ");
			유형 = scan.nextLine();
			if(유형.equals("신입생")) //유형이 신입생이면 2,편입생이면 5를 대입
				Y=2;
			else if(유형.equals("편입생"))
				Y=5;
			ZZZ=i;//루프를 돈 횟수에 따라 증가된 i값을 ZZZ에 대
			
			System.out.println("이름: "+name);
			System.out.printf("학번: 60%d%d%03d\n",XX,Y,ZZZ);//ZZZ를 세자리 숫자로 표현하기 위해 printf문으로 출력
		}
		
		
	}

}