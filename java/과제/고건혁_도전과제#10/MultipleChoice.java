package assignment;

import java.util.Scanner;

public class MultipleChoice extends TestQuestion{

	String[]example;
	int num;
	
	public MultipleChoice() {
		super();

	}
	public void readQuestion(){
		Scanner scan = new Scanner(System.in);
		int i;
		
		num = scan.nextInt();
		scan.nextLine();
		example = new String[num];
		
		exam = scan.nextLine();
		
		for(i=0;i<num;i++) {
			example[i]=scan.nextLine();
		}
	}
	public String toString() {
		int i=0;
		return exam+"\n"+example[0]+"\n"+example[1]+"\n"+example[2]+"\n"+example[3];
		
	}
}
