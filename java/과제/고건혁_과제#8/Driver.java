package assignment;

import java.util.Scanner;

public class Driver {//실행클래스
	static Professor p[] = new Professor[100];
	static Student s[] = new Student[100];
	
	public static void inputProInfo() {
		String name,division,subject;
		Scanner scan = new Scanner(System.in);
		int i;
		
		for(i=0;;i++) {
			System.out.print("교수 이름을 입력하세요:");
			name= scan.nextLine();
			System.out.print("학과명을 입력하세요:");
			division= scan.nextLine();
			System.out.print("교과목명을 입력하세요:");
			subject= scan.nextLine();
			
			p[i] = new Professor(name,division,subject);
			
			System.out.print("추가할 교수가 더 있나요?(Yes or No):");
			if(scan.nextLine().equals("No")) {
				break;
			}
		}
	}
	public static void inputStudInfo() {
		String name;
		Scanner scan = new Scanner(System.in);
		int i,ID;
		
		
		for(i=0;;i++) {
			System.out.print("학생 이름을 입력하세요:");
			name= scan.nextLine();
			System.out.print("학번을 입력하세요:");
			ID= scan.nextInt();
			scan.nextLine();
			
			s[i] = new Student(ID,name);
			
			System.out.print("추가할 학생이 더 있나요?(Yes or No):");
			if(scan.nextLine().equals("No")) {
				break;
			}
		}
		
	}
	public static void registerCourses() {
		String subject;
		Scanner scan = new Scanner(System.in);
		int i;
	
		for(i=0;s[i]!=null;) {
			System.out.print(s[i].name+"이 수강 신청할 교과목명을 입력하세요: ");
			subject = scan.nextLine();
			s[i].addList(subject);
			System.out.print("추가할 교과목이 더 있나요?(Yes or No):");
			if(scan.nextLine().equals("No")) {
				i++;
			}
			else
				continue;
		}
	}
	public static void printResult() {
		int i;
		
		for(i=0;s[i]!=null;i++) {
			System.out.println("이름	학번	수강과목들");
			System.out.print(s[i].name+'	'+s[i].ID+'	');
			s[i].printList();
		}
	}
	
	
	
	public static void main(String args[]) {
		inputProInfo();
		inputStudInfo();
		registerCourses();
		printResult();
	}
}
