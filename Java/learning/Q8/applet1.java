// import java.awt.*;
// import java.awt.event.*;
// import java.applet.*;

// public class applet1 extends Applet implements ActionListener,KeyListener {
//     /*
//      * <applet code = "applet1.class" width=500 height=300>
//      * </applet>
//      */
//     Button b = new Button("Red");
//     String s;

//     public void init() {
//         s = "";
//         add(b);
//         b.addActionListener(this);
//         addMouseListener(new MouseAdapter() {
//             public void mouseEntered(MouseEvent me) {
//                 resize(500, 300);
//             }

//             public void mouseExited(MouseEvent me) {
//                 resize(500, 300);
//             }

//             public void mouseClicked(MouseEvent me) {
//                 s = "Clicked";
//                 repaint();
//             }
//         });
//     }

//     public void paint(Graphics g) {
//         g.drawString(s, 100, 50);
//     }

//     public void actionPerformed(ActionEvent ae) {
//         s = ae.getActionCommand();
//         if (s == "Red")
//             setBackground(Color.red);
//     }
// }
public class applet1 {
    int a = 10;

    void disp() {

    }

    public static void main(String[] args) {
        System.out.println(a);
    }
}