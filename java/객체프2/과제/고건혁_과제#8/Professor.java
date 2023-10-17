package assignment;

public class Professor {
	String name,division,subject;
	
	public Professor(String new_name,String new_division, String new_subject) {
		name=new_name;
		division=new_division;
		subject=new_subject;
	}
	public String getName() {
		return name;
	}
	public String getDivision() {
		return division;
	}
	public String getSubject() {
		return subject;
	}
}
