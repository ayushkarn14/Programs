import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

public class Ananta extends  JFrame {
    int x = 140;
    int y = 150; // original coords
    JFrame f;
    

    public Ananta() {
        f = new JFrame();
        f.setSize(x, y);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
        f.setTitle("My Frame");
        f.setLayout(null);
        f.addMouseListener(new Myadapter(this));
        
    }

    

    class Myadapter extends MouseAdapter {
        Ananta obj;

        public Myadapter(Ananta object) {
            obj = object;
        }

        public void mouseClicked(MouseEvent me) {
            f.setSize(x, y);
            
        }

        public void mouseExited(MouseEvent me) {

            f.setVisible(false);
            System.exit(-1);
        }

        public void mouseEntered(MouseEvent me) {
            f.setSize(450, 450);
            
        }
    }

    public static void main(String args[]) {
        SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new Ananta();
            }
        });
    
    //new Ananta();
}
}