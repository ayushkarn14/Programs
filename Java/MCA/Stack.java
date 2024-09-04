import java.util.Scanner;
class Stack{
	int arr[];
	int top;
	int size;
	Stack(){
		top=-1;
		size=10;
		arr=new int[10];
	}
	Stack(int n){
		top=-1;
		size=n;
		arr=new int[n];
	}
	void insert(int ele){
		if(top==size-1){
			System.out.println("Stack Overflow");
			return;
		}
		arr[++top]=ele;
	}
	int pop(){
		if(top==-1){
			System.out.println("Stack Underflow");
			return -99;
		}
		return arr[top--];
	}
	void printstack(){
		for(int i=0;i<=top;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter max size of stack : ");
		int size=in.nextInt();
		Stack st=new Stack(size);
		int s;
		do
		{
			System.out.println("1. Insert");
			System.out.println("2. Pop");
			System.out.println("3. Print");
			System.out.println("-1. End");
			s=in.nextInt();
			switch(s){
				case 1:
					System.out.println("Enter element to insert");
					int ele=in.nextInt();
					st.insert(ele);
					break;
				case 2:
					int popped=st.pop();
					if(popped!=-99)
						System.out.println("Popped element : "+popped);
					break;
				case 3:
					st.printstack();
					break;
				default:
					System.out.println("No stack operation selected");
			}
		}while(s!=-1);
	}
}
