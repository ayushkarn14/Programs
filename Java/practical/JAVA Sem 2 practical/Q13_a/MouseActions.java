import java.awt.event.*;
import javax.swing.*;

public class MouseActions extends JFrame implements MouseListener {

  public MouseActions() {
    addMouseListener(this);
    setSize(200, 300);
    setVisible(true);
  }

  public void mouseClicked(MouseEvent e) {
    setSize(200, 300);
  }

  public void mouseEntered(MouseEvent e) {
    setSize(600, 900);
  }

  public void mouseExited(MouseEvent e) {
    setVisible(false);
    System.exit(-1);
  }

  public void mousePressed(MouseEvent e) {}

  public void mouseReleased(MouseEvent e) {}

  public static void main(String args[]) {
    MouseActions ob = new MouseActions();
  }
}
