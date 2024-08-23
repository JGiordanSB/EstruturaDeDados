#include <iostream>
using namespace std;

void bubbleshort(int* vetor, int size) {
    
    while(size != 0) {
        
        int i = 0;
        
        if(vetor[i] > vetor[i+1]) {
            int backup = vetor [i];
            
            vetor [i] = vetor[i+1];
            vetor[i+1] = backup;
        }
        
        i ++;
        size --;
    }
}

int main() {
    int size = 15;
    
    int vetor [size] = {3,2,8,6,7,0,10,11,21,8,1,12,5,9,14};
    
    bubbleshort(vetor, size);
    
    for(int i = 0; i < size; i++) {
        cout << vetor[i] << " ";
    }
    
    cout << endl;
}
