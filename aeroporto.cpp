#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int MAX = 200;

vector<int> adj[MAX];
vector<int> trafego(MAX);

int main() {_
    int teste = 1;
    int a, v;

    while (cin >> a >> v && (a + v)) {
        int x, y;

        for(int i = 0; i <= a; i++) {
            adj[i].clear();
            trafego[i] = 0;
        }

        for(int i = 0; i < v; i++) {
            cin >> x >> y;
            trafego[x]++;
            trafego[y]++;
        }

        int maxTrafego = 0;
        for(int i = 1; i <= a; i++) {
            maxTrafego = max(maxTrafego, trafego[i]);
        }

        // preciso encontrar todos os aeroportos com trafico maximo, pois pode haver mais de um
        vector<int> maxTrafegoAeroportos;
        for(int i = 1; i <= a; i++) {
            if(trafego[i] == maxTrafego) {
                maxTrafegoAeroportos.push_back(i);
            }
        }

        cout << "Teste " << teste++ << endl;
        for(int aerporto : maxTrafegoAeroportos) {
            cout << aerporto << " ";
        }
        cout << endl << endl;
    }

    return 0;
}
 
