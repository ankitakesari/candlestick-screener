//https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/

//TWO REPEATING ELEMENTS IN AN ARRAY OF (N+2)//

#include <iostream>
using namespace std;
int main() {
    int size;
    cin>>size;


    int arr[size];

    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    int n=size-2;

    int XOR=0;

    for(int i=0; i<size; i++){
        XOR ^=arr[i];
    }

    for(int i=1; i<=n ; i++){
        XOR^=i;
    }

    int right_most_set_bit= XOR & ~(XOR-1);

    int x=0, y=0;

    for( int i=0; i<size; i++){
        if(arr[i] & right_most_set_bit){
            x^=arr[i];
        }

        else {
            y^=arr[i];
        }
    }

        for( int i=1; i<=n; i++){
        if(i & right_most_set_bit){
            x^=i;
        }

        else {
            y^=i;
        }
    }

    cout<<"X: "<<x <<endl;
    cout<<"Y: "<<y <<endl;


}
