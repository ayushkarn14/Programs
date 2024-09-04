class Box{
	int length;
	int breadth;
	int height;
	Box(int l, int b, int h){
		length = l;
		breadth = b;
		height = h;
	}
	Box(){
		length = 10;
		breadth = 10;
		height = 10;
	}
	Box(Box box){
		this.length=box.length;
		this.breadth=box.breadth;
		this.height=box.height;
	}
	void setlen(int l){
		length = l;
	}
	void setbreath(int b){
		breadth = b;
	}
	void setheight(int h){
		height = h;
	}
	int volume(){
		int vol=length*breadth*height;
		return vol;
	}
}
