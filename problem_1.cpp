#include <bits/stdc++.h> 
using namespace std;

int main() {
    int m, n;
    
    // Dimension of the 2D matrix;
	cin >> m >> n; 
	vector< vector< int > > matrix;
	matrix.resize(m);
	
	for (int i = 0; i < m; i++) {
	    matrix[i].resize(n);
	    for (int j = 0; j < n; j++) cin >> matrix[i][j];
	}
	
	
	// Maximum sum of rows;
	int rowMax = INT_MIN;
	
	for (auto row : matrix) {
	    int rowSum = accumulate(row.begin(), row.end(), 0);
	    if (rowSum > rowMax) rowMax = rowSum;
	}
	
    // cout << rowMax << endl;
	
	
	// Maximum sum of columns;
	int colMax = INT_MIN;
	
	for (int i = 0; i < n; i++) {
	    int colSum = 0;
      
	    for (int j = 0; j < m; j++) colSum += matrix[j][i];
          
	    if (colSum > colMax) colMax = colSum;
	}
	
    // cout << colMax << endl;
    
    cout << min(colMax, rowMax) << endl;
	return 0;
}
