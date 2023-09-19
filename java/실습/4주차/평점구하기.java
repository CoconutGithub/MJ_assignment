package firstproject;

import java.util.Scanner;



public class assignment {
	
	
	public static void main (String[]args)
	{
		//변수들 선언
		int i;
		double 총점,평점=0,출석,과제,시험;
		char 학점='E',keep='y';
		String 과목;
		Scanner scan = new Scanner(System.in);
		
		for(i=0;keep =='y';i++)//keep이 y면 계속,과목당 i개수 1개씩 증가
		{
			System.out.print("과목의 이름을 입력하세요: ");//변수들 입력 과정
			과목 = scan.nextLine();
			System.out.print("출석 점수를 입력하세요: ");
			출석 = scan.nextInt() *0.1;
			System.out.print("과제 점수를 입력하세요: ");
			과제 = scan.nextInt() *0.4;
			System.out.print("시험 점수를 입력하세요: ");
			시험 = scan.nextInt() *0.5;
			
			총점 = 출석 + 과제 + 시험;//모든 변수들의 퍼센트는 이미 곱했으니 더하기만 하면됨
			
			System.out.println("과목 프로그래밍의 총점: "+총점);
			//총점에 따라 학점을 문자로 부여하고 평점에 학점에따라 값을 계속 더해나감
			if(총점<100 && 총점>=90)
			{
				학점 = 'A';
				평점 += 4.0;
			}
			if(총점<89 && 총점>=80)
			{
				학점 = 'B';
				평점 += 3.0;
			}
			if(총점<79 && 총점>=70)
			{
				학점 = 'C';
				평점 += 2.0;
			}
			if(총점<69 && 총점>=60)
			{
				학점 = 'D';
				평점 += 1.0;
			}
			if(총점<59 && 총점>=0)
			{
				학점 = 'F';
				평점 += 0.0;
			}
			System.out.println("과목 프로그래밍의 학점: "+학점);
			
			System.out.print("계속하기를 원하세요? 그렇다면 y를 아니면 n을 입력하세요: ");
			keep = scan.next().charAt(0);
			
			scan.nextLine();//위 스캔에서 발생한 공백제거
		}
		평점 = 평점/i;//계속 더해진 평점을 과목개수인 i값으로 나눔
		System.out.println("평점: "+평점);
		
	}

}