package assignment;

public class Driver {//실행클래스
	
	public static void main(String args[]) {
		Course c1 = new Course("알고리즘",30,4);
		Course c2 = new Course("자료구조",25,3);
		System.out.println("수강 신청 전");
		System.out.println();
		System.out.println("교과목 명	최대 학생수현재 학생수");
		System.out.println(c1.getAll());
		System.out.println(c2.getAll());
		c1.plusMax_people(6);
		c2.plusMax_people(3);
		System.out.println();
		System.out.println("수강 인원 증가 후");
		System.out.println();
		System.out.println("교과목 명	최대 학생수현재 학생수");
		System.out.println(c1.getAll());
		System.out.println(c2.getAll());
		System.out.println();
		System.out.println("생성된 교과목들의 수:"+Course.count);
		System.out.println();
		Student s1 = new Student(2101,"선남",18);
		Student s2 = new Student(2102,"선녀",21);
		Student s3 = new Student(2103,"길동",18);
		System.out.println("학번	이름	신청학점수");
		System.out.println(s1.getAll());
		System.out.println(s2.getAll());
		System.out.println(s3.getAll());
		Register r1 = new Register(s1,c1);
		Register r2 = new Register(s2,c1);
		Register r3 = new Register(s2,c2);
		Register r4 = new Register(s3,c1);
		Register r5 = new Register(s3,c2);
		System.out.println();
		System.out.println(r1.getInfo());
		System.out.println(r2.getInfo());
		System.out.println(r3.getInfo());
		System.out.println(r4.getInfo());
		System.out.println(r5.getInfo());
		System.out.println();
		System.out.println("수강 신청 후");
		System.out.println();
		System.out.println("교과목 명	최대 학생수현재 학생수");
		System.out.println(c1.getAll());
		System.out.println(c2.getAll());
		System.out.println();
		System.out.println("학번	이름	신청학점수");
		System.out.println(s1.getAll());
		System.out.println(s2.getAll());
		System.out.println(s3.getAll());
	}
}
