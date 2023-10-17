package project1;

import java.util.Scanner;

public class Driver {//실행클래스
	
	public static void main(String args[]){
		//변수 설정
		String target;
		int i;
		int num;
		
		
		Flower[] flowers = new Flower[5];
		flowers[0]= new Flower("수선화",2000);
		flowers[1]= new Flower("장미",3000);
		flowers[2]= new Flower("카네이션",5000);
		flowers[3]= new Flower("튤립",7000);
		flowers[4]= new Flower("국화",4000);
		Scanner scan = new Scanner(System.in);
		
		System.out.print("좋아하는 꽃을 입력하세요: ");
		target = scan.nextLine();
		
		//반복문
		for(i=0;i<5;i++) {
			if(flowers[i].name.equals(target)) {
				System.out.print("원하는 송이 수를 입력하세요: ");
				//try catch문
				try {
					if(!(scan.hasNextInt())) {
						scan.next();
						throw new InputMismatchException();
					}
					num = scan.nextInt();
					if (num < 0) {
						throw new IllegalArgumentException();
					}
					else {
						System.out.println("가격이 "+flowers[i].price+"인 "+flowers[i].name+" "+num+"송이의 가격 = "+flowers[i].price*num);
						break;
					}
				}
				catch(IllegalArgumentException e){
					System.out.println("송이 수가 음수라서 총 가격을 계산 할 수 없다");
					break;
				}
				catch(InputMismatchException e) {
					System.out.println("송이 수가 숫자가 아니다");
					break;
				}
				 
			}
		
			else if(i == 4){
				System.out.println("좋아하는 꽃이 없습니다");
			}			
			else {
				continue;
			}		
		}
	}
}