#include <iostream>
using namespace std;

void Short(int i, int* vetor, int qnt) {
    int number = vetor[i];
    int indiceMenor = i;
    
    for(int j = i + 1; j < qnt; j++) {
        if(number > vetor[j]) {
            number = vetor [j];
            indiceMenor = j;
        }
    }
    
    int backup = vetor [i];
    vetor [i] = number;
    vetor [indiceMenor] = backup;
    
}

void SelectionShort(int* vetor, int qnt) {
    
    for(int i = 0; i < qnt - 1; i++) {
        Short(i, vetor, qnt);
    }
}



int main() {
    int qnt = 15;
    
    int vetor [qnt] = {3,2,8,6,7,0,10,11,21,8,1,12,5,9,14};
    
    SelectionShort(vetor, qnt);
    
    for(int elem : vetor) {
        cout << elem << " ";
    }
    
    cout << endl;
}
