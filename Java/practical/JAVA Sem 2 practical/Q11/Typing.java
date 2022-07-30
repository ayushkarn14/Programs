import java.awt.*;
import java.awt.event.*;

public class Typing extends Frame {

    String str;
    Typing() {
        super("Titleeee");
        setVisible(true);
        setSize(500, 700);
        addKeyListener(new MyKeyAdapter(this));
        this.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {   
                dispose();
            }
        });
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