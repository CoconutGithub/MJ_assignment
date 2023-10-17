package assignment;

import java.util.Scanner;

public class Essay extends TestQuestion{

	int line_num;
	
	public Essay() {
		super();
	}
	
	public void readQuestion(){
		Scanner scan = new Scanner(System.in);
		line_num = scan.nextInt();
		scan.nextLine();
		exam = scan.nextLine();
	}
	public String toString() {
		return exam;
	}
}
