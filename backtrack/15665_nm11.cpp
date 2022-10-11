#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int store[10];
int result[10];
bool isused[10];

void func(int k){
	if(k==m){
		for(int i=0; i<m; i++){
			cout << result[i] << " ";
		}
		cout << "\n";
		return;
	}

	int dupl = 0; // Why here?

	for(int i=0; i<n; i++){
		if(store[i] != dupl){
			dupl = store[i];

			result[k] = store[i];
			func(k+1);

		}
	}
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		cin >> store[i];
	}

	sort(store, store+n);

	func(0);
	return 0;
}
