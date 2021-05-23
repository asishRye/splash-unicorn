#include<iostream>
#include<vector>

using namespace std;

typedef vector <vector <int> > myVector;
myVector populateVector(string message);
void printVector(myVector V, string message);
myVector sumVector(myVector a, myVector b);

int main(){
    // myVector a,b;
    myVector a (5, {0, 0, 0});
    myVector b (5, {0, 0, 0});
    a = populateVector("Enter values for vector 1: ");
    b = populateVector("Enter values for vector 2: ");
    printVector(a, "Vector 1");
    printVector(b, "Vector 2");
    printVector(sumVector(a,b), "The sum of two vectors");
    return 0;
}

void printVector(myVector V, string message){
    cout<<message<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }
}

myVector populateVector(string message){
    cout<<message<<endl;
    myVector v (5, {0,0, 0});
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the value for vector with position ["<<i<<"]["<<j<<"]:";
            cin>>v[i][j];
        }
    }
    return v;
}

myVector sumVector(myVector a, myVector b){
    myVector resultVector (5, {0,0,0});
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            resultVector[i][j]=a[i][j]+b[i][j];
        }
    }
    return resultVector;
}