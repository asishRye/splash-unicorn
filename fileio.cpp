#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;

int main(){
    stringstream ss;
    string line;
    vector <float> row;
    vector <vector <float> > matrix;
    float i;

    ifstream matrixFile ("assets/matrix.txt");
    
    if(matrixFile.is_open()){
        while(getline (matrixFile, line)){
            // clear ss
            // cout<<line<<endl;
            ss.clear();
            ss.str("");
            ss.str(line);
            row.clear();

            while(ss>>i){
                // cout<<i<<endl;
                // Adds the number to the vector
                row.push_back(i);

                // checks if next character is `,` or ` ` and if it is then skips that character
                if(ss.peek()==','||ss.peek()==' '){
                    ss.ignore();
                }
            }
            matrix.push_back(row);
        }
    }
    matrixFile.close();

    // Printing out the matrix
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}