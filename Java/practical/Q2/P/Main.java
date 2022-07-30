package P;

import P1.*;
import P2.*;

public class Main {

  public static void main(String[] args) {
    TwoDim ob = new TwoDim(1, 2);
    System.out.println(ob.toString());
    ThreeDim ob1 = new ThreeDim(4, 5, 3);
    System.out.println(ob1.toString());
  }
}
