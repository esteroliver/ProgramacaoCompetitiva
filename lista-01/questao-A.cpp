#include <bits/stdc++.h>

using namespace std;

int main(){
    string dna;
    cin >> dna;

    int seq = 1;
    int maior = 0;
    char fixo = dna[0];
    
    for (int j = 1; j < dna.size(); j++){
        if (dna[j] == fixo){
            seq += 1;
        }
        else{
            fixo = dna[j];
            seq = 1;
        }
        if (seq > maior){
            maior = seq;
        }
    }

    cout << maior << '\n';
}