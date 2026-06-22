class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        vector<int>d1;
        vector<int>d2;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    d1.push_back(mat[i][j]);
                    continue;
                }
                if(i+j==mat.size()-1){
                    d2.push_back(mat[i][j]);
                }
            }
        }
        int a=accumulate(d1.begin(),d1.end(),0);
        int b=accumulate(d2.begin(),d2.end(),0);
        return a+b;
    }
};