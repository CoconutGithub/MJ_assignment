package assignment;

public class itemSales {
	int 단가, 누적판매액=0, 누적할인액=0, 판매수, 대량판매량, 누적판매수=0, 대량할인율;

	public void set단가(int new단가) {
		단가 = new단가;
	}
	public void set대량판매량(int new대량판매량) {
		대량판매량 = new대량판매량;
	}
	public void set판매수(int new판매수) {
		판매수 = new판매수;
	}
	public void set대량할인율(int new대량할인율) {
		대량할인율 = new대량할인율;
	}
	public int get단가() {
		return 단가;
	}
	public int get누적판매액() {
		return 누적판매액;
	}
	public int get누적할인액() {
		return 누적할인액;
	}
	public int get판매수() {
		return 판매수;
	}
	public int get대량판매량() {
		return 대량판매량;
	}
	public int get대량할인율() {
		return 대량할인율;
	}
	public int get누적판매수() {
		return 누적판매수;
	}
	public void Sale() {
		int 총판매액=0,총할인액=0;
		총판매액 = get단가() * get판매수(); 
		if(get판매수()>=get대량판매량()) {
			총할인액 = 총판매액 * get대량할인율()/100;
			총판매액 -= 총할인액;
			System.out.println("할인율이 적용되어 판매 가격은 "+총판매액+"원이다");
			System.out.println();
		}
		else {
			System.out.println("할인율이 적용되지 않아 판매 가격은 "+총판매액+"원이다");
			System.out.println();
		}
		누적판매액+=총판매액;
		누적할인액+=총할인액;
		누적판매수+=get판매수();
		System.out.println("누적 판매 수량 = "+get누적판매수()+"개, 누적 판매금액 = "+get누적판매액()+"원, 누적 할인금액 = "+get누적할인액()+"원");
		System.out.println();
	}
}
