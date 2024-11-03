#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 60;
vector<int> notes;

int main(){
    _ 
    int t; 
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n;

        notes.resize(n);
        
        for(int i = 0; i < n; i++){
            cin >> notes[i];
        }

        bool ans = true;
        for(int i = 0; i < n - 1; i++){ 
            int cont = abs(notes[i] - notes[i+1]);
            if(cont != 5 && cont != 7){
                ans = false;
                break;
            }
        }

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
