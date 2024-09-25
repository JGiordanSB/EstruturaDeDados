#include <iostream>
using namespace std;

void selection_sort(int* array, int inicio, int size);

int main() {
    
    int size = 0;
    cout << "Tamanho do array: ";
    cin >> size;
    
    int vetor [size];
    cout << "Digite " << size << " números: ";
    
    for(int i = 0; i < size; i++) {
        
        cin >> vetor[i];
    }
    
    selection_sort(vetor, 0, size);
    
    for(int i = 0; i < size; i++) {
        cout << vetor[i] << " ";
    }
    
    cout << endl;
    

    return 0;
}

void selection_sort(int* array, int inicio, int size) {
    
    if(inicio == size) { return; }
    
    int menor = inicio;
    
    for(int i = inicio+1; i < size; i ++) {
        
        if(array[menor] > array[i]) {
            
            menor = i;
        }
    }
    
    int backup = array[inicio];
    array[inicio] = array[menor];
    array[menor] = backup;
    
    selection_sort(array, inicio+1, size);
}
