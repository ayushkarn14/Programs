import java.awt.*;
import java.awt.event.*;
import java.applet.*;

// <applet code="Batch1testButton.class" width=400 height=400></applet>
public class Batch1testButton extends Applet implements ActionListener {
    Button b1 = new Button("Red");
    Button b2 = new Button("Blue");
    String s;

    public void init() {
        b1.addActionListener(this);
        b2.addActionListener(this);
        add(b1);
        add(b2);
        s = "";
    }

    public void actionPerformed(ActionEvent e) {
        s = e.getActionCommand();
        repaint();
    }

    public void paint(Graphics g) {
        g.drawString(s, 200, 200);
    }
}
