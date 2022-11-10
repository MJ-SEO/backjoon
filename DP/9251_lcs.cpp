#include <iostream>

using namespace std;

int dp[1002][1002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1;
    string str2;

    cin >> str1 >> str2;

    for(int i=1; i<=str1.length(); i++){
        for(int j=1; j<=str2.length(); j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] =  dp[i-1][j-1] + 1; 
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout << dp[str1.length()][str2.length()] << "\n";

    return 0;
}