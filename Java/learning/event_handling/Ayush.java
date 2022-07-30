import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*<applet code="Ayush.java" width="500" height="400"></applet>*/
public class Ayush extends Applet implements MouseListener {
    String status = "", msg = "";
    int x, y, c, xscreen, yscreen;
    Font myFont = new Font("TimesRoman", Font.BOLD, 20);

    public void init() {
        addMouseListener(this);
    }

    public void mouseClicked(MouseEvent e) {
        c = e.getClickCount();
        e.translatePoint(100, 100);
        x = e.getX();
        y = e.getY();
        xscreen = e.getXOnScreen();
        yscreen = e.getYOnScreen();
        msg = "Coordinate on screen = " + xscreen + " , " + yscreen;
        status = "Mouse Clicked at (" + x + ", " + y + ")";
        showStatus(status);
        repaint();
    }

    public void mousePressed(MouseEvent e) {
        status = "Mouse Pressed";
        msg = "";
        showStatus(status);
        repaint();
    }

    public void mouseReleased(MouseEvent e) {
        status = "Mouse Released";
        msg = "";
        showStatus(status);
        repaint();
    }

    public void mouseEntered(MouseEvent e) {
        status = "Mouse Entered";
        msg = "";
        showStatus(status);
        repaint();
    }

    public void mouseExited(MouseEvent e) {
        status = "Mouse Exited";
        msg = "";
        showStatus(status);
        repaint();
    }

    public void paint(Graphics g) {
        g.setFont(myFont);
        g.drawString(". 100,100", 100, 100);
        g.drawString("Mouse click count: " + c, 150, 150);
        g.drawString(msg, 150, 200);
    }
}