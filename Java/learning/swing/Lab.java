import javax.swing.*;
import java.awt.*;
public class Lab extends JFrame{
    JLabel l=new JLabel("Hi");
    FlowLayout f = new FlowLayout();
    Lab(){
        setVisible(true);
        setSize(500,600);
        add(l);
        setLayout(f);
    }
    public static void main(String[] args) {
        Lab ob=new Lab();
    }
}
