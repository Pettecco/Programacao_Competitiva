#include <bits/stdc++.h>

using namespace std;

int main(){

    string cifra;
    int n, desloc;
    // intervalo entre [0-25]

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        cin >> cifra >> desloc;
        for(int j = 0; j < cifra.length(); j++){
            cifra[j] = ((cifra[j] - 'A' - desloc + 26) % 26) + 'A';
        }
        cout << cifra << endl;
    }

    return 0;
}