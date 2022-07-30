import java.awt.*;
import java.awt.event.*;

public class Neha extends Frame implements ActionListener {
    Button b1 = new Button("A");
    Button b2 = new Button("B");
    Label l;

    Neha() {
        setSize(500, 500);
        setVisible(true);
        setTitle("My Frame");
        setLayout(new FlowLayout());

        add(b1);
        add(b2);

        l = new Label(" ");
        l.setBounds(100, 100, 1000, 1000);
        add(l);

        b1.addActionListener(this);
        b2.addActionListener(this);

        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                dispose();
            }
        });

    }

    @Override
    public void actionPerformed(ActionEvent ae) {
        String s = (ae).getActionCommand();
        if (s.equals("A")) {
            l.setText("NAME : Neha , COURSE : Bsc(H)Cs , ROLL NO : 21hcs4160 , COLLEGE : DDUC,DU ");

        }
        if (s.equals("B")) {
            l.setText("CGPA : 9.5");
        }

    }

    public static void main(String[] args) {
        Neha lab = new Neha();

    }

}