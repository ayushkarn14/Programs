
// Create a child frame window from within an applet.
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class AppletFrame extends Frame {
    AppletFrame() {
        setVisible(true);
        setSize(400, 400);
        addWindowListener(new MyAdapter(this));
    }

    public static void main(String[] args) {
        AppletFrame ob = new AppletFrame();
    }
}

class MyAdapter extends WindowAdapter {
    AppletFrame ob1;

    MyAdapter(AppletFrame ob1) {
        this.ob1 = ob1;
    }

    public void windowActivated(WindowEvent e) {
        System.out.println(ob1.getOppositeWindow());
    }
}