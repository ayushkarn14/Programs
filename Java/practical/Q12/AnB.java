import java.awt.*;
import java.awt.event.*;

public class AnB extends Frame implements ActionListener {
    String str;
    Button b1 = new Button("A");
    Button b2 = new Button("B");

    FlowLayout f = new FlowLayout();

    AnB() {
        super("Buttons");
        setVisible(true);
        setSize(800, 400);
        str = "";
        this.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                dispose();
            }
        });
        setLayout(f);
        add(b1);
        add(b2);
        b1.addActionListener(this);
        b2.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        String c = ae.getActionCommand();
        if (c.equals("A")) {
            str = "Name: Ayush Karn \n Roll no.: 21HCS4129 \n Course: BSc. (H) Computer Science \n College: DDUC";
            repaint();
        } else {
            str = "CGPA in previous semester: 10";
            repaint();
        }
    }

    public void paint(Graphics g) {
        g.drawString(str, 100, 100);
    }

    public static void main(String args[]) {
        AnB ob = new AnB();
    }
}