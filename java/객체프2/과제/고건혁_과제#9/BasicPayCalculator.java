package assignment;

public class BasicPayCalculator {
	int weekday_time,hourly_wage;
	double pay=0;
	
	public BasicPayCalculator(int n_hourly_wage){
		weekday_time=0;
		hourly_wage=n_hourly_wage;
	}
	public void plusTime(int p_time) {
		weekday_time+=p_time;
	}
	public void setTime(int n_time) {
		weekday_time=n_time;
	}
	public void setWage(int n_wage) {
		hourly_wage=n_wage;
	}
}
