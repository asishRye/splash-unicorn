#include<iostream>
#include<vector>
using namespace std;

void printVector(std::vector <int> fnVector);

int main(){
    std::vector <int> minVector (5, 11);
    std::vector <int> maxVector (5, 11);
    std::vector <int> finVector (5);

    // Do vector operations here
    for(int i = 0; i<minVector.size(); i++){
        finVector[i]=minVector[i]+maxVector[i];
    }
    printVector(minVector);
    printVector(maxVector);
    printVector(finVector);
    return 0;
}

void printVector(std::vector <int> fnVector){
    cout<<"The vector values are:";
    for(int i=0; i<fnVector.size(); i++){
        cout<<" "<<fnVector[i];
    }
    cout<<endl;
}