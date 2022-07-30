import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class RedBlue extends JFrame implements ActionListener {

  JButton b1;
  JButton b2;
  FlowLayout f;

  RedBlue() {
    f = new FlowLayout();
    b1 = new JButton("Red");
    b2 = new JButton("Blue");

    this.setLayout(f);
    add(b1);
    add(b2);
    b1.addActionListener(this);
    b2.addActionListener(this);
  }

  public void actionPerformed(ActionEvent ae) {
    String s = ae.getActionCommand();
    if (s.equals("Red"))
      getContentPane().setBackground(Color.RED);
    if (s.equals("Blue"))
      getContentPane().setBackground(Color.BLUE);
  }

  public static void main(String args[]) {
    RedBlue ob = new RedBlue();
    ob.setSize(300, 300);
    ob.setVisible(true);
  }
}
