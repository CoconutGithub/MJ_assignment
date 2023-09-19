package assignment;

public class Compound extends Deposit{
	public Compound(String n_name, int n_account,int n_period,double n_interest,int n_principal) {
		super(n_name,n_account,n_period,n_interest,n_principal);
	}
	public double calTotal() {
		return principal*Math.pow(1+interest/12, period);
	}
	public String printAll() {
		return "예금주 이름:"+name+'\n'+"계좌번호:"+account+'\n'+"계약기간:"+period+'\n'+"연이율:"+interest+'\n'+"원금:"+(int)principal+'\n'+"원리금:"+(int)calTotal()+'\n';
	}
}
