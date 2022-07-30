import java.awt.*;
import java.awt.event.*;
public class Anjali extends Frame{
    Anjali(){
        setTitle("my frame");
        setSize(400,500);
        setVisible(true);
        addMouseListener(new MouseAdapter(){
            public void mouseEntered(MouseEvent e){
                System.out.println(e.getX()+","+e.getY());
                setBackground(Color.green);
            }
        });
    }
    public static void main(String args[]){
        Anjali ob = new Anjali();
    }
}