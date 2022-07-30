package P1;

public class TwoDim {
    private int x;
    private int y;
    public TwoDim(){
        this.x=0;
        this.y=0;
    }
    public TwoDim(int a,int b){
        this.x=a;
        this.y=b;
    }
    public String toString(){
        return ("Coordinate: "+x+","+y);
    }
}
