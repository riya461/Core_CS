#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    int matrix[row][col];

    int m=row,n=col;
    int val = 1;
    int k = 0, l = 0;

    while(k<m && l<n){
        for(int i=l;i<n;i++){
            matrix[k][i] = val++;
        }
        k++;
        // first row is done

        for(int i=k;i<m;i++){
            matrix[i][n-1] = val++;
        }
        n--;
        // last column is done

        if(k<m){
            for(int i=n-1;i>=l;i--){
                matrix[m-1][i] = val++;
            }
            m--;
        }
        // last row is done

        if(l<n){
            for(int i=m-1;i>=k;i--){
                matrix[i][l] = val++;
            }
            l++;
        }
        // first column is done
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}