import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="FrameApp.class" width=300 height=400></applet>*/
public class FrameApp extends Applet implements MouseListener,ActionListener{
	Button b=new Button("Blue");
	Button b1=new Button("Red");
	String s;
	public void init(){
		s="";
		add(b);
		add(b1);
		b.addActionListener(this);
		b1.addActionListener(this);
		addMouseListener(this);
	}
	public void mouseEntered(MouseEvent e){
		resize(900,1200);
	}
	
	public void mouseClicked(MouseEvent e){
		resize(300,400);
	}
	public void mouseExited(MouseEvent e){
		
		System.exit(0);
	}
	public void mousePressed(MouseEvent e){
		
	}
	public void mouseReleased(MouseEvent e){
		
	}
	public void actionPerformed(ActionEvent e){
		showStatus("Pressed");
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
}

