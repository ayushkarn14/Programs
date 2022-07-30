import java.awt.*;
import java.awt.event.*;

public class Pink extends Frame {
    Pink() {
        super("Myyyyy Firame");
        setVisible(true);
        setSize(500, 700);
        setBackground(Color.pink);
        this.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                dispose();
            }
        });
    }

    public void paint(Graphics g) {
        g.drawString("This is a is string", 200, 200);
    }

    public static void main(String args[]) {
        Pink ob = new Pink();
    }
}
