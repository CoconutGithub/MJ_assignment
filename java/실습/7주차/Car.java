package assignment;

public class Car {
	int 연료탱크용량, 현재연료량=0, 최대속도, 현재속도, 연비, 주행거리=0;
	
	public Car(int new연료탱크용량, int new최대속도, int new연비) {//생성사 메소드 - 연료최대량, 최대 속도, 연비를 한번에 받아 생
		연료탱크용량 = new연료탱크용량;
		최대속도 = new최대속도;
		연비 = new연비;
	}
	public void 연료주유(int 연료) {//연료탱크용량까지 주입가능한 연료 주
		현재연료량 += 연료;
		if(현재연료량>연료탱크용량)
			현재연료량 = 연료탱크용량;
	}
	public void set속도(int new속도) {//채점표의 changeSpeed메소드
		if(new속도>=최대속도) {
			현재속도 = 최대속도;
		}
		else if(new속도<=0)
			현재속도 = 0;
		else
			현재속도 = new속도;
	}
	public void 주행거리(int 시간) {//채점표의 operateForTime메소드
		int 소모된연료;//거리에따라 소모되는 연료량
		소모된연료 = 현재속도*시간/연비;
		
		if(현재연료량<소모된연료) {//시간이 많아 소모되는 연료가 현재 연료량보다 클
			System.out.println("연료가 모자란다.");
			시간 = 현재연료량*연비/현재속도;//현재연료량에 맞게 시간 재설정
			System.out.println("가능한 운행시간 = "+시간);
			주행거리 += 현재속도*시간;//갱신된 시간에 맞게 거리계산
			현재연료량 = 0;//최대로 연료를 썼으므로 0
		}
		else {
			주행거리 += 현재속도*시간;//현재 연료량으로 충분히 갈 수 있는 거리
			현재연료량 -= 소모된연료;//소모된 만큼 빼주기
		}
	}
	public int get주행거리() {//반환 메소드
		return 주행거리;
	}
	public int get속도() {
		return 현재속도;
	}
	public int get연료량() {
		return 현재연료량;
	}
}
