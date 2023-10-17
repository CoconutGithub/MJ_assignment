package assignment;

public class Driver {//실행클래스
	
	public static void main(String args[]) {
		Car 자동차 = new Car(100,120,20);
		
		자동차.연료주유(10);//연료량 10 늘리
		System.out.println("남은연료 = "+자동차.get연료량()+" 현재속도 = "+자동차.get속도()+" 주행거리 = "+자동차.get주행거리());
		자동차.set속도(150);//속도 150설정 : 최대속도보다 높아서 불가능 -> 최대속도로 설
		System.out.println("최대속도인 "+자동차.최대속도+"으로 변경해야한다");
		System.out.println("남은연료 = "+자동차.get연료량()+" 현재속도 = "+자동차.get속도()+" 주행거리 = "+자동차.get주행거리());
		자동차.주행거리(1);//현재 속도로 1시간만큼 갈 수 있는 거리와 연료량 갱신
		System.out.println("남은연료 = "+자동차.get연료량()+" 현재속도 = "+자동차.get속도()+" 주행거리 = "+자동차.get주행거리());
		자동차.set속도(80);//속도 80설정
		자동차.주행거리(2);//현재 속도로 2시간만큼 갈 수 있는 거리와 연료량 갱신
		System.out.println("남은연료 = "+자동차.get연료량()+" 현재속도 = "+자동차.get속도()+" 주행거리 = "+자동차.get주행거리());
	}
}
