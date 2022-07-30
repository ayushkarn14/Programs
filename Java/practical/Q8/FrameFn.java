import java.awt.*;
import java.awt.event.*;

public class FrameFn extends Frame implements MouseListener {

  int w, h;

  public FrameFn() {
    // super("This is a title");
    addMouseListener(this);
    setVisible(true);
    setTitle("Frame Window");
    setSize(200, 200);
    w = 200;
    h = 200;
    this.addWindowListener(new WindowAdapter() {
          public void windowClosing(WindowEvent e) {
            dispose();
            System.exit(-1);          }
        }
      );
  }

  public void mouseClicked(MouseEvent e) {
    setSize(w, h);
  }

  public void mousePressed(MouseEvent e) {}

  public void mouseReleased(MouseEvent e) {}

  public void mouseEntered(MouseEvent e) {
    setSize(w * 3, h * 3);
  }

  public void mouseExited(MouseEvent e) {
    setVisible(false);
    System.exit(-1);
  }

  public static void main(String args[]) {
    FrameFn ob = new FrameFn();
  }
}
