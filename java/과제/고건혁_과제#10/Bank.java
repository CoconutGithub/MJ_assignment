package assignment;

public abstract class Bank {
	
	String name;
	int account,period;
	double interest;
	
	public Bank(String n_name, int n_account,int n_period,double n_interest) {
		name = n_name;
		account = n_account;
		period = n_period;
		interest = n_interest;
	}
	public void setName(String n_name) {
		name = n_name;
	}
	public void setAccount(int n_account) {
		account = n_account;
	}
	public void setPeriod(int n_period) {
		period = n_period;
	}
	public void setInterest(double n_interest) {
		interest = n_interest;
	}
	
	public String printAll() {
		return "예금주 이름:"+name+'\n'+"계좌번호:"+account+'\n'+"계약기간:"+period+'\n'+"연이율:"+interest+'\n';
	}
	public abstract double calTotal();

}
