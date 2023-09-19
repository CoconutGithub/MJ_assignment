
package assignment;

public class Student {
	int ID,max_list,subject_num;
	String name;
	String list[];
	
	public Student(int new_ID, String new_name) {
		ID= new_ID;
		name= new_name;
		max_list = 10;
		subject_num=0;
		list=new String[max_list];
	}
	public void setID(int new_ID) {
		ID= new_ID;
	}
	public void setName(String new_name) {
		name= new_name;
	}
	public int getID() {
		return ID;
	}
	public String getName() {
		return name;
	}
	public void printList() {
		int i;
		for(i=0;i<subject_num;i++) {
			System.out.print(list[i]+" ");
		}
	}
	public void addList(String subject) {
		list[subject_num]=subject;
		subject_num++;
	}
}
