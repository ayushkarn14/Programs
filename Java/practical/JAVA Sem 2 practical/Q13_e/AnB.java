import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class AnB extends JFrame implements ActionListener {

  String str;
  JButton b1 = new JButton("A");
  JButton b2 = new JButton("B");

  AnB() {
    setTitle("FRAME");
    setSize(500, 700);
    setVisible(true);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    add(b1);
    add(b2);
    setLayout(new FlowLayout());
    b1.addActionListener(this);
    b2.addActionListener(this);
  }

  public void actionPerformed(ActionEvent ae) {
    String c = ae.getActionCommand();
    str = "";
    if (c.equals("A")) {
      str = "Name: Ayush Karn  Roll no.: 21HCS4129  Course: BSc. (H) Computer Science  College: DDUC";
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
