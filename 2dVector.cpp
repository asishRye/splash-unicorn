#include<iostream>
#include<vector>

using namespace std;

void printVector(std::vector <vector <int> > twodvector, string message);

int main(){
    vector <vector <int> > twodvector;
    vector <int> singleRow (3,3);

    // Using pushback to add a row of vector elements into a 2D vector
    for(int i=0;i<3;i++){
        twodvector.push_back(singleRow);
    }
    // Printing it out
    printVector(twodvector, "Pushback");

    // cout<<"\n-------------------";

    // Another way of initialization
    std::vector <std::vector <int> > anotherVector (3, std::vector <int> (3,3));
    printVector(anotherVector, "Another way");

    // Yet another way of initialization
    vector <vector <int> > yetAnotherVector (5, {3, 4, 5});
    printVector(yetAnotherVector, "Yet another way");


    cout<<"\n";
    return 0;
}


void printVector(std::vector <vector <int> > twodvector, string message){
    // Printing out 2D array
    cout<<endl<<message;
    for(int i=0; i<twodvector.size(); i++){
        cout<<"\n";
        for(int j=0; j<twodvector[0].size(); j++){
            cout<<twodvector[i][j]<<" ";
        }
    }
    cout<<endl;
}