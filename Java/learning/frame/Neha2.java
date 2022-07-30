import javax.swing.*;
import java.awt.*;

class Myframe extends JFrame {

    Container c;

    Myframe() {
        setVisible(true);
        setSize(400, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("lab ques 13(a)");
        c = this.getContentPane();

        c.setBackground(Color.pink);

    }

    public void paint(Graphics g) {
        g.drawString("String", 100, 100);
        repaint();
    }

}

public class Neha2 {
    public static void main(String[] args) {
        Myframe f = new Myframe();
    }

}