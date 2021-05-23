#include<iostream>
#include<vector>

bool close_enough(float v1, float v2);
bool close_enough(int a, int b);


int main(){
    // typedef std::vector <std::vector <float> > t_arr;
    // std::vector <std::vector <float> > variable1;

    float a = 1.0;
    float b = 2.0;
    close_enough(1,2);
    close_enough(a, b);
    return 0;
}

bool close_enough(float v1, float v2){
    std::cout<<"Inside fn with float sig\n";
    if (v1==v2){
        return true;
    }
    else{
        return false;
    }
}


bool close_enough(int a, int b){
    std::cout<<"Inside fn with int sig\n";
    if (a==b){
        return true;
    }
    else{
        return false;
    }
}