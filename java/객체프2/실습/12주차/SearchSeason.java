package firstproject;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class SearchSeason extends JFrame {
	private JTextField season;
	private JButton search;
	private JLabel resultLabel;
	public SearchSeason() {
		Container cont = getContentPane();
		setTitle("검색엔진");
		setSize(250,100);
		cont.setLayout(new FlowLayout());
		resultLabel = new JLabel();
		season = new JTextField(10);
		cont.add(season);
		search = new JButton("검색");
		cont.add(search);
		cont.add(resultLabel);
		
		SearchListener listener = new SearchListener();
		search.addActionListener(listener);
		
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	private class SearchListener implements ActionListener{
		public void actionPerformed(ActionEvent event) {
			if(event.getSource()==search) {
				String text = season.getText();
				if(text.equals("봄")) {
					resultLabel.setText("만물이 소생하는 계절");
				}
				else if(text.equals("여름")) {
					resultLabel.setText("무더운 계절");
				}
				else if(text.equals("가을")) {
					resultLabel.setText("수확의 계절");
				}
				else if(text.equals("겨울")) {
					resultLabel.setText("추운 계절");
				}
				else {
					resultLabel.setText("찾을 수 없습니다");
				}
			}
		}
	}
	public static void main(String[] args) {
		SearchSeason frame = new SearchSeason();
		frame.setVisible(true);
	}
}
