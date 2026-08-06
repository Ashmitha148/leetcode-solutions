class Solution {
public:
long long ele(int i,int j) {
    long long result=1;
    for(int k=0;k<j;k++) {
        result*=(i-k);
        result/=k+1;
    }
    return result;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v(numRows);
        for(auto i=0;i<numRows;i++) {
            v[i]=vector<int>(i+1);
            for(auto j=0;j<i+1;j++) {
                v[i][j]=ele(i,j);
            }
        }
        return v;
    }
};