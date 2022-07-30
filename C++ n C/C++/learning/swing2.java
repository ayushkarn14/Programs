import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class swing2{
    swing2(){
        JFrame jf= new JFrame("My Frame");
        String s[]={"Java", "DBMS"};
        JComboBox j1= new JComboBox(s);
        String data[][]={{"Akash", "658363847484","96.2"},
                        {"Shubham", "975950474947","100"},
                        };
        String col[]={"NAME","MOBILE NO.","PERCENTAGE"};
        JTable j2= new JTable(data,col);
        jf.add(j1);
        jf.add(j2);
        jf.setLayout(new FlowLayout());
        jf.setVisible(true);
        jf.setSize(700,700);
    }
    public static void main(String[]args){
        swing2 se= new swing2();
    }
}