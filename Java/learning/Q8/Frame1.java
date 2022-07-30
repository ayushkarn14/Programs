import java.awt.*;
import java.awt.event.*;
public class Frame1 extends Frame implements MouseListener,ActionListener{
	Button b=new Button("Blue");
	Button b1=new Button("Red");
	FlowLayout f=new FlowLayout();
	String s;
	Frame1(){
		setSize(300,400);
		setVisible(true);
		s="";
		add(b);
		add(b1);
		setLayout(f);
		b.addActionListener(this);
		b1.addActionListener(this);
		addMouseListener(this);
		addWindowListener(new MyAdapter(this));
	}
	public void mouseEntered(MouseEvent e){
		setSize(900,1200);
	}
	
	public void mouseClicked(MouseEvent e){
		setSize(300,400);
	}
	public void mouseExited(MouseEvent e){
		//System.exit(-1);
	}
	public void mousePressed(MouseEvent e){
		
	}
	public void mouseReleased(MouseEvent e){
		
	}
	public void actionPerformed(ActionEvent e){
		if(e.getActionCommand().equals("Blue")){
			s="Neelaaaa";
			setBackground(Color.BLUE);
			repaint();
		}
		else{
			s="Laaal";
			setBackground(Color.RED);
			repaint();
		}
	}
	public void paint(Graphics g){
		g.drawString(s,100,100);
	}
	public static void main(String args[]){
		Frame1 ob = new Frame1();
	}
}
