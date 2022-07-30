public class Complex{
    int x;
    int y;
    Complex(int a,int b){
    this.x=a;
    this.y=b;
    }
    Complex add(Complex ob){
    return new Complex(this.x+ob.x,this.y+ob.y);
    }
    Complex multiply(Complex ob){
    return new Complex((this.x*ob.x-this.y*ob.y),(this.x*ob.y+this.y*ob.x));
    }
    public String toString(){
    return (x+"+i"+y);
    }
}
