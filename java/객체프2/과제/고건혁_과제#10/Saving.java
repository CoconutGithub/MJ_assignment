package assignment;

public class Saving extends Bank{
	int payment;

	public Saving(String n_name, int n_account,int n_period,double n_interest,int n_payment) {
		super(n_name,n_account,n_period,n_interest);
		payment=n_payment;
	}
	public void setPayment(int n_payment) {
		payment=n_payment;
	}
	public String printAll() {
		return "예금주 이름:"+name+'\n'+"계좌번호:"+account+'\n'+"계약기간:"+period+'\n'+"연이율:"+interest+'\n'+"월불입액:"+payment+'\n'+"원리금:"+(int)calTotal()+'\n';
	}
	public double calTotal() {
		return (payment*period)+(payment*interest/12*period*(period+1)/2);
	}
	
}
