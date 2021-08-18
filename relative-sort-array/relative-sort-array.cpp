class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        set<int> st;
        vector<int> m;
        vector<int> uniques;
        for(int i=0;i<arr2.size();i++)
        {
            st.insert(arr2[i]);
        }
        for(int i=0;i<arr1.size();i++)
        {
            if(st.find(arr1[i])==st.end())
            {
                uniques.push_back(arr1[i]);
            }
        }
        auto it=arr2.begin();
        while(it!=arr2.end())
        {
            for(int i=0;i<arr1.size();i++)
            {
                if(*it==arr1[i])
                {
                    result.push_back(arr1[i]);
                }
            }
            it++;
        }
        sort(uniques.begin(),uniques.end());
        for(int i=0;i<uniques.size();i++)
        {
            result.push_back(uniques[i]);
        }
        return result;
    }
};