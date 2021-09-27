
#include <iostream>

using namespace std;

int main()
{
    // Getting the input values 
    cout<<"Enter the size of array :";
    int size;
    cin>>size;
    cout<<endl;
    int arr[size];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int k,x;
    cout<<"Enter the value of step k : ";
    cin>>k;
    cout<<endl;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<endl;
    int answer=0,i=0;
    while(i<size){
        if(arr[i]==x){
            cout<<"X value found at index = "<<i<<endl;
            break;
        }
            i += max(1,abs(arr[i]-x)/k); // using abs because we need a positive value 
    }
    if(i>=size)cout<<"Element not found !!!"<<endl;
    return 0;
}
