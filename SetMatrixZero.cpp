#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> generateMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    for(int col = 0; col < n; col++) {
                        if(matrix[i][col] != 0) {
                            matrix[i][col] = -1;
                        }
                    }
                    for(int row = 0; row < m; row++) {
                        if(matrix[row][j] != 0) {
                            matrix[row][j] = -1;
                        }
                    }
                }
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }
        return matrix;
    }
};

int main() {
    Solution s;
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout<<endl;
    vector<vector<int>> result = s.generateMatrix(matrix);
    for (auto& row : result) {
        for (auto &num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}