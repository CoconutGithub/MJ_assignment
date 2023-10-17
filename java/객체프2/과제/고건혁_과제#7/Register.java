package assignment;

public class Register {
	Student s;
	Course c;
	public Register(Student new_s,Course new_c) {
		s=new_s;
		c=new_c;
		if(c.getPeople()<c.getMax_people())
			c.people++;
		else
			System.out.println("정원이 차서 수강 신청할 수 없다");
		if(s.getSign_credit()+c.getCredit()<=s.getMax_credit())
			s.sign_credit += c.credit;
		else
			System.out.println("학점 초과로 수강 신청할 수 없다");
	}
	public String getInfo() {
		return s.getName()+": "+c.getSubject()+" 수강 신청";
	}
}
