package assignment;

public abstract class Deposit extends Bank{
	double principal;
	
	public Deposit(String n_name, int n_account,int n_period,double n_interest,int n_principal){
		super(n_name,n_account,n_period,n_interest);
		principal=n_principal;
	}
	public void setPrincipal(int n_principal) {
		principal=n_principal;
	}
	public String printAll() {
		return "예금주 이름:"+name+'\n'+"계좌번호:"+account+'\n'+"계약기간:"+period+'\n'+"연이율:"+interest+'\n'+"원금:"+principal+'\n';
	}
	public abstract double calTotal();
}
