class BoxDemo{
	public static void main(String args[]){
		Box b1=new Box();
		int v1=b1.volume();
		System.out.println("Volume b1 : "+v1);
		Box b2=new Box(5,4,3);
		int v2=b2.volume();
		System.out.println("Volume b2 : "+v2);
		System.out.println("After copying b1 to b2");
		b2=new Box(b1);
		int v3=b2.volume();
		System.out.println("Volume b2 : "+v3);
	}
}
