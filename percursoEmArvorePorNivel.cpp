#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

struct Node {
  int value;
  Node *left;
  Node *right;

  Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value){
  if(root == nullptr){
    return new Node(value);
  }
  if(value < root->value) {
    root->left = insert(root->left, value);
  } else{
    root->right = insert(root->right, value);
  }
  return root;
}

void deleteTree(Node* root){
  if(root != nullptr){
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
  }
}

void bfs(Node* root){
  if(root == nullptr)
      return;

  queue<Node*> q;
  q.push(root);

  bool first = true;

  while(!q.empty()){
    Node* v = q.front();
    q.pop();

    if (!first) {
      cout << " ";
    }
    cout << v->value;
    first = false;
    
    if(v->left != nullptr)
      q.push(v->left);

    if(v->right != nullptr)
      q.push(v->right);
  }
}

int main() {_  
  int c;
  cin >> c;
  int teste = 0;

  for(int i = 0; i < c; i++){
    Node* tree = nullptr;
    int n; cin >> n;

    for(int j = 0; j < n; j++){
      int value; cin >> value;
      tree = insert(tree, value);
    }
    cout << "Case " << ++teste << ":" << endl;  
    bfs(tree);
    cout << endl << endl; 
    deleteTree(tree);
  }
  return 0;
}

