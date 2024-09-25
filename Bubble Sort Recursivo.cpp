#include <iostream>
using namespace std;

// Jose Giordan Saldanha Beicio 563865

void bubbleshort(int* vetor, int i, int size);


int main() {
    int size = 0;
    cout << "Tamanho do array: ";
    cin >> size;
    
    int vetor [size];
    cout << "Digite " << size << " números: ";
    
    for(int i = 0; i < size; i++) {
        
        cin >> vetor[i];
    }
    
    bubbleshort(vetor, 0, size);
    
    for(int i = 0; i < size; i++) {
        cout << vetor[i] << " ";
    }
    
    cout << endl;
}


// void bubbleshort(int* vetor, int i, int size) {
    
//     if(i == size-1) { return; }
    
//     if(vetor[i] > vetor[i+1]) {
        
//         int backup = vetor [i];
//         vetor [i] = vetor[i+1];
//         vetor[i+1] = backup; 
        
//     }
    
//     bubbleshort(vetor, i+1, size);
// }

void bubbleshort(int* vetor, int i, int size) {
    
    if(size == 0) { return; }
    
    if(i == size-1) { bubbleshort(vetor, 0, size-1); }
    
    else {
    
        if(vetor[i] > vetor[i+1]) {
            
            int backup = vetor [i];
            vetor [i] = vetor[i+1];
            vetor[i+1] = backup; 
            
        }
        
        bubbleshort(vetor, i+1, size);
    }
    
}
