package assignment;

import java.util.Scanner;

public class Driver {//실행클래스
	
	public static void main(String args[]) {
		int exam_num,i;
		
		Scanner scan = new Scanner(System.in);
		exam_num=scan.nextInt();
		scan.nextLine();
		
		TestQuestion[] test =new TestQuestion[exam_num]; 
		for(i=0;i<exam_num;i++) {
			if(scan.nextLine().equals("e")){
				test[i] = new Essay();
				test[i].readQuestion();
			}
			else{
				test[i] = new MultipleChoice();
				test[i].readQuestion();
			}
		}
		for(i=0;i<exam_num;i++) {
			System.out.println(i+1+". "+test[i].toString());
		}

	}
}