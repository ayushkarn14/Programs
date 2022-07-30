import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/*<applet code="Ayush5.java" width="500" height="400"></applet>*/
public class Ayush5 extends Applet {

  public void init() {
    addKeyListener(
      new KeyAdapter() {
        public void keyPressed(KeyEvent e) {
          showStatus("Key Pressed");
        }
      }
    );
  }
}
