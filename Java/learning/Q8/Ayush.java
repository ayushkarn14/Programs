import java.awt.event.*;
import javax.swing.*;
import java.awt.*;

public class Ayush extends JFrame implements ActionListener {
    JButton b = new JButton("Press");
    String s;

    Ayush() {
        setVisible(true);
        setSize(500, 500);
        s = "";
        add(b);
        b.addActionListener(this);
        this.addWindowListener(new MyAdapter());
    }

    public void actionPerformed(ActionEvent ae) {
        s = ae.getActionCommand();
        if (s == "Red")
            setBackground(Color.red);
    }

    public static void main(String args[]) {
        Ayush ob = new Ayush();
    }

    class MyAdapter extends WindowAdapter {
        public void windowClosing(WindowEvent e) {
            System.exit(-1);
        }
    }
}