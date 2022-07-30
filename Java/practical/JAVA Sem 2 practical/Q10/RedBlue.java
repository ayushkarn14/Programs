import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*<applet code="RedBlue.class" width="2240" height="1440"></applet>*/
public class RedBlue extends Applet implements ActionListener {
    Button b1 = new Button("Red");
    Button b2 = new Button("Blue");

    public void init() {
        add(b1);
        add(b2);
        b1.addActionListener(this);
        b2.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        String s = ae.getActionCommand();
        if (s.equals("Red"))
            setBackground(Color.red);
        if (s.equals("Blue"))
            setBackground(Color.blue);
    }

    public void paint(Graphics g) {
    }
}