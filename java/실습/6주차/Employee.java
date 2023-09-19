package assignment;

public class Employee {//대학교직원 정보설정 클래스
	
	public String name;
	public int age;
	public int num;
	
	public void setName(String newName){//이름 설정
		name = newName;//이름대입
	}
	
	public void setAge(int newAge){//나이 설정
		age = newAge;//나이대입
	}
	
	public void setNum(int newNum){//번호 설정
		num = newNum;//번호대입
	}
	public String getName() {//이름 반환
		return name;
	}
	public int getAge() {//나이 반환
		return age;
	}
	public int getNum() {//번호 반환
		return num;
	}
	public String getAll() {//모든 정보 한번에 출력
		return getName()+'\n'+getNum()+'\n'+getAge()+'\n';
	}
}
