import java.awt.*;
import javax.swing.*;

class Pink extends JFrame {

  JLabel label;

  Pink() {
    setTitle("FRAME");
    setSize(400, 300);
    setLocation(700, 200);
    setVisible(true);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setLayout(new FlowLayout());
    getContentPane().setBackground(Color.PINK);

    label = new JLabel("This is a String");
    add(label);
  }

  public static void main(String args[]) {
    Pink ob = new Pink();
  }
}