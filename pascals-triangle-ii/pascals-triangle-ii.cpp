class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret;
	    for (int i = 0; i <= rowIndex; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                //dp.. using peviously stored value
                row[j] = ret[j] + ret[j - 1];
            }
            ret=row;
        }
        return ret;
        }
};