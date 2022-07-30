import java.applet.*;
import java.awt.*;

/*<applet code="MyApp.class" height="500" width="500"></applet> */
public class MyApp extends Applet {

  int x[] = { 50, 60, 100, 200 };
  int y[] = { 50, 140, 100, 150 };
  Color ob = new Color(150, 0, 200);

  public void paint(Graphics g) {
    g.drawString("Hello World", 100, 100);
    g.setColor(ob);
    g.fillPolygon(x, y, 4);
  }
}
