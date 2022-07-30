import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*<applet code="Ayush4.java" width="500" height="400"></applet>*/
public class Ayush4 extends Applet implements WindowListener {
    public void init() {
        addWindowListener(this);
    }

    public void windowActivated(WindowEvent we) {
        System.out.println("Hi");
    }

    public void windowClosed(WindowEvent we) {
        System.out.println("Hi");
    }

    public void windowClosing(WindowEvent we) {
        System.out.println("Hi");
    }

    public void windowDeactivated(WindowEvent we) {
        System.out.println("Hi");
    }

    public void windowDeiconified(WindowEvent we) {
        System.out.println("Hi");
    }

    public void windowIconified(WindowEvent we) {
        System.out.println("Hi");
    }

    public void windowOpened(WindowEvent we) {
        System.out.println("Hi");
    }
}
