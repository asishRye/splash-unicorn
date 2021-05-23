#include<vector>
#include<iostream>
using namespace std;


void printVector(std::vector <int> fnVector );

int main(){
    std::vector <int> intVector (10);
    for(int i=0; i<10;i++){
        intVector[i]=i;
    }
    
    printVector(intVector);

    cout<<endl<<"Vector size is:"<<intVector.size();

    cout<<endl<<"------------"<<endl<<endl;

    // Assign values to vectors during initialization
    cout<<"Assigning values during initialization";
    std::vector <int> smallVector (5, 10);
    printVector(smallVector);   
    cout<<endl<<"------------"<<endl<<endl;


    // Replace vector with new values using assign function
    cout<<"Assigning values using assign function";
    smallVector.assign(5, 50);
    printVector(smallVector);
    cout<<endl<<"------------"<<endl<<endl;

    // Pushback function
    cout<<"Assigning values using pushback function";
    smallVector.push_back(90);
    printVector(smallVector);
    cout<<endl<<"Size of array is now - "<<smallVector.size();
    cout<<endl<<"------------"<<endl<<endl;


    std::cout<<endl;
    return 0;

}

void printVector(std::vector <int> fnVector){
    cout<<endl<<"Printing Vector values - ";
    for(int i=0;i<fnVector.size();i++){
        cout<<fnVector[i]<<" ";
    }
}