package assignment;

public class DangerPayCalculator extends BasicPayCalculator{
	int danger_time;
	
	public DangerPayCalculator(int n_wage){
		super(n_wage);
		danger_time=0;
	}
	public void setDangertime(int n_time) {
		danger_time=n_time;
	}
	public void calPay() {
		if(super.weekday_time<=40) {
			super.pay = super.hourly_wage*super.weekday_time;
		}
		else
			super.pay = 40*super.hourly_wage+(super.weekday_time-40)*super.hourly_wage*1.5;
		
		super.pay += danger_time*super.hourly_wage*5;
	}
}
