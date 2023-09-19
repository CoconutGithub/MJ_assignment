package assignment;

public class Course {
	static int count=0;
	String subject;
	int people;
	int max_people;
	int credit;
	
	public Course(String new_subject,int new_max_people, int new_credit) {
		subject = new_subject;
		max_people = new_max_people;
		credit = new_credit;
		people = 0;
		count ++;
	}
	public String getSubject() {
		return subject;
	}
	public int getMax_people() {
		return max_people;
	}
	public int getPeople() {
		return people;
	}
	public int getCredit() {
		return credit;
	}
	public String getAll() {
		return getSubject()+"	"+getMax_people()+"	"+getPeople();
	}
	public void setSubject(String new_subject) {
		subject = new_subject;
	}
	public void setMax_people(int new_max_people) {
		max_people = new_max_people;
	}
	public void setCredit(int new_credit) {
		credit = new_credit;
	}
	public void plusMax_people(int num) {
		max_people +=num;
	}
}

