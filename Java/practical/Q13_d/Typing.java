import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Typing extends JFrame {

  String str;

  Typing() {
    setTitle("FRAME");
    setSize(500, 700);
    setVisible(true);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setLayout(new FlowLayout());
    addKeyListener(new MyKeyAdapter(this));
  }

  public void paint(Graphics g) {
    g.drawString(str, 100, 100);
  }

  public static void main(String args[]) {
    Typing ob = new Typing();
  }
}

class MyKeyAdapter extends KeyAdapter {

  Typing ob;

  MyKeyAdapter(Typing ob) {
    ob.str = "";
    this.ob = ob;
  }

  public void keyTyped(KeyEvent ke) {
    ob.str += ke.getKeyChar();
    ob.repaint();
  }
}
