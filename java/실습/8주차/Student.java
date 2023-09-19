package assignment;

public class Student {
	int ID,result[]=new int[3];
	String name;
	
	public Student(int new_ID,String new_name,int n_result1,int n_result2,int n_result3) {
		ID=new_ID;
		name=new_name;
		result[0]=n_result1;
		result[1]=n_result2;
		result[2]=n_result3;
	}
	public void setResult(int n,int n_result) {
		result[n-1]=n_result;
	}
	public int getResult(int n) {
		return result[n-1];
	}
	public double getAverage() {
		double sum;
		sum=(result[0]+result[1]+result[2])/3.0;
		return sum;
	}
	public String getAll() {
		return "학번:	"+ID+"\n이름:	"+name+"\n시험점수1:		"+result[0]+"\n시험점수2:		"+result[1]+"\n시험점수3:		"+result[2]+"\n\n평균점수:	"+getAverage()+"\n";
	}
	
}
