#include <iostream>
using namespace std;
bool IfExistsElement(int number[],int lenght,int element){
    for (int i=0;i<lenght;i++){
        if (number[i] == element){
            return true;
        }
    }
    return false; 
}
int main(){
    int l;
    cout<<"Enter length of array: ";
    cin>>l;
    int arr[l];
    cout<<"Enter values of the arrays: ";
    for (int i=0;i<l;i++){
        cin>>arr[i];
    }
    cout<<"Enter 1 to print even valued elements"<<endl;
    cout<<"Enter 2 to print odd valued elements"<<endl;
    cout<<"Enter 3 to print suma and average of elements"<<endl;
    cout<<"Enter 4 to print max and min"<<endl;
    cout<<"Enter 5 remove duplicates"<<endl;
    cout<<"Enter 6 to print array in reverse"<<endl;
    int s;
    switch (s)
    {
    case 1:
        cout<<"Even elements: ";
        for (int i=0;i<l;i++){
            if (arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
        break;
    case 2:
        cout<<"Odd elements: ";
        for (int i=0;i<l;i++){
            if (arr[i]%2==1){
            cout<<arr[i]<<" ";
        }
    }
        break;
    case 3:
        int sum=0;
        for (int i=0;i<l;i++){
        sum+=arr[i];
        }
    cout<<"Sum of all elements = "<<sum<<endl;
    cout<<"Average of all elements = "<<float(sum)/l;
        break;
    case 4:
    int max=arr[0],min=arr[0];
    max = arr[0];
    for (int i = 0; i < l; i++)
    {
        if (arr[i]>max)
            max = arr[i];
        if (arr[i]<min)
            min=arr[i];
    }
    cout<<"Minimum element = "<<min;
    cout<<endl;
    cout<<"Maximum element = "<<max;
    break;
    case 5:
    int distinct_number[l] = {0};
    for (int i=0,j=0;i<l;i++){ 
        int element = arr[i];
        if (!IfExistsElement(distinct_number,l,element)){
            distinct_number[j] = element;
            j++;
        }
    }
    cout<<"Array after duplicates removed: "<<endl;
    for (int i = 0; i < l; i++)
    {
        cout<<distinct_number[i]<<" ";
    }
    break;
    case 6:
    cout<<endl;
    cout<<"Elemets of the array in reverse order are: \n";
    for (int i = 0; i < l; i++)
    {
        cout<<arr[l-1-i]<<" ";
    }
    break;
    default:
    cout<<"Invalid Input!";
        break;
    return 0;
}



