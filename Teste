#include <iostream>
using namespace std;

class Lista {
    
    private:
    string contato;
    int numero;
    
    public:
    Lista ();
    Lista (string, int);
    
    int getNumero();
    void setNumero(int num);
    void setContato(string contato);
    string getContato();
};

Lista::Lista() {
    contato = "";
    numero = 0;
}

Lista::Lista(string nome, int num) {
    contato = nome;
    numero = num;
}

Lista::getNumero() {
    return numero;
}

Lista::setNumero(int num) {
    numero = num;
}

Lista::getContato() {
    return contato;
}

Lista::setContato(string nome) {
    contato = nome;
}

int main() {
    
   Lista lista [5];
   int i = 0;
   
   while(true) {
       string var;
       cin >> var;
       
       if(var == "add") {
           string nome;
           cin >> nome;
           
           int numero;
           cin >> numero;
           
           lista [i] = Lista(nome, numero);
           i++;
       } else if(var == "stop") {
           break;
       } else if(var == "remove") {
       }
   }
   
   cout << "oi";
    
    
    return 0;
}
