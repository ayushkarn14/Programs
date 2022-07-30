import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*<applet code="Ayush3.java" width="500" height="400"></applet>*/
public class Ayush3 extends Applet implements MouseWheelListener {
    int a;
    int x = 200, y = 10;

    public void init() {
        addMouseWheelListener(this);
    }

    public void mouseWheelMoved(MouseWheelEvent mwe) {
        a = mwe.getWheelRotation();
        repaint();
    }

    public void paint(Graphics g) {
        if (a == -1)
            y -= 5;
        if (a == 1)
            y += 5;
        g.fillRect(x, y, 100, 100);
    }
}
