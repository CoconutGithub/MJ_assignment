package assignment;

public class OverPayCalculator extends BasicPayCalculator{
	int sat_time,sun_time;
	
	public OverPayCalculator(int n_wage){
		super(n_wage);
		sat_time=0;
		sun_time=0;
	}
	public void setSattime(int n_time) {
		sat_time=n_time;
	}
	public void setSuntime(int n_time) {
		sun_time=n_time;
	}
	public void calPay() {
		if(super.weekday_time<=40) {
			super.pay = super.hourly_wage*super.weekday_time;
		}
		else
			super.pay = 40*super.hourly_wage+(super.weekday_time-40)*super.hourly_wage*1.5;
		
		super.pay += sat_time*super.hourly_wage*2+sun_time*super.hourly_wage*3;
	}
}
