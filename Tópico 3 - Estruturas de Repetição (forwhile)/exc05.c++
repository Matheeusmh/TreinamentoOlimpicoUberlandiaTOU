#include <iostream>

using namespace std;

bool eh_primo(int x){
	int count = 0;

    for(int i = 1; i <= x; i++) {
        if(x % i == 0) {
            count++;
        }
    }
    if(x == 1 || count == 2) {
        return 1;
    }
    return 0;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}

