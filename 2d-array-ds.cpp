#include <iostream>

using namespace std;

int main(){

    int n, ar[10][10], larSum = -36985247;
    n = 6;   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)cin >> ar[i][j];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j+2 < n && i+2 < n ){
                int sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
                if(sum > larSum)larSum = sum;
            }
        }
    }
    cout << larSum << endl;
    return 0;
}
