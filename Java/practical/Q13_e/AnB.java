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
    add(new painting());
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

  public static void main(String args[]) {
    // AnB ob = new AnB();
    SwingUtilities.invokeLater(new Runnable()
      {public void run(){
        new AnB();
      }
    });
  }}
  class painting extends JPanel
  {
    painting(){
      setBorder(BorderFactory.createLineBorder(Color.red,3));
    }
    protected void paintComponent(Graphics g){
      super.paintComponent(g);
      g.drawString("hello", 200, 100);
    }
  } 
