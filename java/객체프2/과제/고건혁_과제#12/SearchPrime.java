package firstproject;
import java.awt.*;
import java.awt.event.*;
import java.util.Arrays;

import javax.swing.*;

public class SearchPrime extends JFrame{
	private JTextField num;
	private JButton button;
	private JLabel label;
	private JTextArea prime;
	
	public SearchPrime() {
		Container cont = getContentPane();
		setTitle("소수 목록 만들기");
		setSize(400,300);
		cont.setLayout(new FlowLayout());
		num = new JTextField(10);
		label = new JLabel("양의 정수를 입력하세요:");
		button = new JButton("입력한 양의 정수까지의 모든 소수들을 보려면 여기를 누르세요");
		prime = new JTextArea(10,30);
		cont.setBackground(Color.yellow);
		cont.add(label);
		cont.add(num);
		cont.add(button);
		cont.add(prime);
		
		ButtonListener listener = new ButtonListener();
		button.addActionListener(listener);
		
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	private class ButtonListener implements ActionListener{
		public void actionPerformed(ActionEvent event) {
			int number;
			boolean[] isPrime;
			String primeNum="";
			if(event.getSource()==button) {
				String text = num.getText();
				number = Integer.parseInt(text);
				isPrime = new boolean[number+1];
				Arrays.fill(isPrime, true);
				isPrime [0]=false;
				isPrime [1]=false;
				for(int i =2;i*i<=number;i++) {
					if(isPrime[i]) {
						for(int j=i*i;j<=number;j+=i) {
							isPrime[j]=false;
						}
					}
				}
				int j=0;
				for(int i=2;i<number;i++) {
					if(isPrime[i]) {
						primeNum+=i+" ";
						j++;
					}
					if(j%10==0) {
						primeNum+="\n";
					}
				}
				prime.setText(primeNum);
			}
		}
		
	}
	
	
	
	public static void main(String[] args) {
		SearchPrime frame = new SearchPrime();
		frame.setVisible(true);
	}
}
