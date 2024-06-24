#include <bits/stdc++.h>

using namespace std;

class Stack {
    int top;
    
    public:
        Stack(int x) {
            this->top = x;
        }
        void push(int x) {
            top = x;
        }
        void pop() {
            top = -1;
        }
        int top() {
            return top;
        }
}

void clear(Stack pilha) {
    for(auto e : pilha) {
        e.pop();
    }
}

int main(void) {
    vector<Stack> pilha;
    int n, x;

    cout << "Digite o tamanho da pilha: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        pilha.push_back(Stack(x));
    }
}
