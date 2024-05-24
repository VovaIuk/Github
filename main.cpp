#include <iostream>

using namespace std;

int const N = 8;

int m[N][N]{};

void fill(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            m[i][j] = rand()%21-11;
        }
    }
}

void print(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << m[i][j] << "\t";
        }
        cout << '\n';
    }
}

int main(){
    fill();
    print();
}