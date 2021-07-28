class Solution {
public:
    string convert(string s, int numRows) {
	if (numRows == 1) {  // If numRows is 1, there is no change
		return s;
	}
	string ret;
	int periodSize = 2 * numRows - 2;
	for(int i = 0; i < numRows; i++) {  // Iterate row by row
		int inc1 = periodSize - (i * 2);
		int inc2 = periodSize - inc1;
		int j = i;
		while(j < s.length()) {
			if (inc1 != 0 && j < s.length()) { // Avoid adding repeated characters when inc1 is 0
				ret += s[j];
				j += inc1;
			}
			if (inc2 != 0 && j < s.length()) {  // Avoid adding repeated characters when inc2 is 0
				ret += s[j];
				j += inc2;
			}   
		}
	}

	return ret;
}
};