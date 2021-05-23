#include<iostream>
int magicfn(int x, int y);
int main(){
    int op = magicfn(2,3);
    std::cout<<"Hello World from c++!\n";
    std::cout<<"Returned values is:"<<op;
    return 0;
}

int magicfn(int x, int y){
    int magic = x + y;
    std::cout<<"\nThis function does something magical!! \nPrinting from function:"<< magic<<"\n";
    return magic;
}