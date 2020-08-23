#include <iostream>
#include <sstream>
#include <cmath>
#include <queue>
using namespace std;

int main(){

    string string1 = "1010";
    string string2 = "1011";

    int n1 = 0, n2 = 0, cont = 0;
     
    //transformar de string1 binario a int decimal
    for(int i = string1.size() - 1; i >= 0; i--){
        int prov = (int)string1[i] - 48;
        n1 = n1 + (prov * pow(2,cont));
        cont++;
    }

    cont = 0;

    //transformar de string2 binario a int decimal
    for(int i = string2.size() - 1; i >= 0; i--){
        int prov = (int)string2[i] - 48;
        n2 = n2 + (prov * pow(2,cont));
        cont++;
    }

    int temp = n1 + n2;

    //transformar resultado decimal a binario
    vector<char> prev;

    while(temp > 0){
        int digito = temp % 2;
        prev.push_back(digito-'0');
        temp = temp/2;
    }
  
    int tam = prev.size();
    string resfinal;

    for(int i = 0; i < tam; i++){
        resfinal.push_back(prev[i]);
    }

    

    cout << resfinal;
    cout << endl;
}