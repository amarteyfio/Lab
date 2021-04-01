#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//Initialise 2d Array
int A[101][101];


//Populate Array Method
void populateArray(int N){
    int i ;
    int j;
    
    
    srand(time(0));
    //for loop to create 2000 i and j slots in the array
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            i = rand() % 2000;
            j = rand() % 2000;
            A[i][j] = rand() % (100 + 1 - 0) + 0;
        }
    }

}

//SearchValidEntries Method
String searchValidEntries(int XL,int YL,int XH, int YH, int A[101][101]){
    int i;
    int j;
    


    for(i = XL; i < XH +1;){
        for(j = YL; j < YH + 1;){
            cout << "i value is ;" << i+", and J value is ; " << j +"; "<< A[i][j] << endl;
             


        }
    }

    

}


int main(){
    populateArray(8);

    searchValidEntries(80,1,100,10);
    searchValidEntries(10,20,40,79);
    searchValidEntries(1,90,100,100);
    searchValidEntries(40,30,70,60);
    searchValidEntries(50,50,70,70);
}


