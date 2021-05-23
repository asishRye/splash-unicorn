#include<iostream>
#include<vector>
using namespace std;

typedef vector <int> v;

int checkVectorLength();
v populateVector(int count);
v subVector(v V1, v V2, int count);
v mulVector(v V1, v V2, int count);
void printVector(v fnVector);

int main(){
    int count = checkVectorLength();
    // v V1 = {5, 10, 27};
    // v V2 = {3, 17, 12};
    cout<<"Starting to populate vector 1..\n";
    v V1 = populateVector(count);
    cout<<"Starting to populate vector 2..\n";
    v V2 = populateVector(count);
    v V3 (count);
    
    cout<<"Vector 1\n";
    printVector(V1);

    cout<<"\n\nVector 2\n";
    printVector(V2);

    cout<<"\n\nSubstracting vector 2 from vector 1"<<std::endl;
    V3 = subVector(V1, V2, count);
    printVector(V3);

    cout<<"\n\nMultiplying vector 1 elements with vector 2 elements"<<std::endl;
    V3 = mulVector(V1, V2, count);
    printVector(V3);


    cout<<endl;
    return 0;
}

int checkVectorLength(){
    int m,n;
    cout<<"Enter number of elements for vector 1:";
    cin>>m;
    cout<<"Enter number of elements for vector 2:";
    cin>>n;
    if (m!=n){
        cout<<"Please choose vectors with equal number of elements!! Exiting\n";
        exit(0);
    }
    return m;
}

v subVector(v V1, v V2, int count){
    v resultVector (count);
    
    for(int i=0; i<V1.size(); i++){
        resultVector[i] = V2[i]-V1[i];
    }
    return resultVector;
}

v mulVector(v V1, v V2, int count){
    v resultVector (count);
    
    for(int i=0; i<V1.size(); i++){
        resultVector[i] = V2[i]*V1[i];
    }
    return resultVector;
}

void printVector(v fnVector){
    cout<<"Vector values are -";
    for(int i=0; i<fnVector.size();i++){
        cout<<" "<<fnVector[i];
    }
}

v populateVector(int count){
    v V (count);
    for(int i=0;i<count; i++){
        cout<<"Enter value:";
        cin>>V[i];
    }
    return V;
}
