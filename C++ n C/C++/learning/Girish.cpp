#include<iostream>
using namespace std;

class BubbleSort{
	public:
	int size,totalSwaps;
	int* arr;
    void Swap(int a, int b);
    void getData();
    void Sort();

    BubbleSort(int x){
		size =x;
    	arr=new int[size];
    }
    ~BubbleSort(){
    	delete[] arr;
    }
};
void BubbleSort::getData(){
	cout<<"Enter the elements of array";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
}

void BubbleSort::Swap(int a,int b){
	int c=arr[a];
	arr[a]=arr[b];
	arr[b]=c;
}
void BubbleSort::Sort(){
	for(int i=0; i<size;i++){
		int noSwaps;
		totalSwaps++;
		for(int j=0; j<size-1; j++)
		{
			if(arr[i]>arr[i+1]) {
				Swap(arr[i],arr[i+1]);
				noSwaps++;
		}
		for(int i=0; i<size; i++){
			cout<<arr[i]<<endl;
		}
		cout<<"Number of swaps "<<noSwaps<<endl;
	}
	cout<<"Total Swaps: "<<totalSwaps;
}
}


int main(){
	int size;
	cout<<"Enter the size of array:";
	cin>>size;
	BubbleSort obj(size);
	obj.getData();
	obj.Sort();
}
