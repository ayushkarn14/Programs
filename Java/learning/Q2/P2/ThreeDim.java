package P2;
import P1.*;
public class ThreeDim extends TwoDim{
    int z;
    public ThreeDim(){
        super();
        z=0;
    }
    public ThreeDim(int a,int b,int c){
        super(a,b);
        z=c;
    }
    public String toString(){
        return (super.toString()+","+z);
    }
}
