package assignment;

public class Account {
	String name;
	int ID,money;
	
	public Account(int n_ID,String n_name,int n_money) {
		ID=n_ID;
		name=n_name;
		money=n_money;
	}
	public void addMoney(int p_money) {
		money+=p_money;
	}
	public void subMoney (int m_money) {
		try {
			if(m_money>money) {
				throw new BalException();
			}
			else {
				money-=m_money;
			}
		}
		catch(BalException e) {
			System.out.println("예외 처리함:출금시 잔고 부족");
		}

	}
	public void movMoney(Account to,int mon){
		try {
			if(mon>money) {
				throw new BalException();
			}
			else {
				to.addMoney(mon);
				this.subMoney(mon);
			}
		}
		catch(BalException e){
			System.out.println("예외 처리함:이체시 잔고 부족");
		}
	}
	public String toString() {
		return ID+"	"+name+"	"+money;	
	}
}
