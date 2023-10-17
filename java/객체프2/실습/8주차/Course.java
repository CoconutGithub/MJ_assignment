package assignment;

public class Course {
	String subject;
	Student list[]=new Student[20];
	int num=0;

	public Course(String new_subject) {
		subject=new_subject;
	}
	public void addStudent(int ID,String name,int result1,int result2,int result3) {
		list[num]=new Student(ID,name,result1,result2,result3);
		num++;
	}
	public double getAverage() {
		double sum=0;
		int i;
		for(i=0;i<num;i++) {
			sum+=list[i].getAverage();
		}
		return sum/i;
	}
	public void printAll() {
		int i;
		for(i=0;i<num;i++) {
			System.out.println(list[i].getAll());
		}
	}
}
