import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*<applet code="Ayush2.java" width="400" height="400"></applet>*/
public class Ayush2 extends Applet implements MouseMotionListener {
    int x, y;
    String s = "";
    Font myFont = new Font("TimesRoman", Font.BOLD, 20);

    public void init() {
        addMouseMotionListener(this);
    }

    public void mouseDragged(MouseEvent e) {
        x = e.getX();
        y = e.getY();
        s = "dragging";
        repaint();
    }

    public void mouseMoved(MouseEvent e) {
        x = e.getX();
        y = e.getY();
        s = "moving";
        repaint();
    }

    public void paint(Graphics g) {
        g.setFont(myFont);
        g.drawString(s, x, y);
    }
}
