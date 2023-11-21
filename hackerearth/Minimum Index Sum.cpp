class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       
        unordered_map<string,int> hm2;
        for (int i=0; i<list2.size(); i++)
        {
            hm2[list2[i]]=i;
        }

        int m=INT_MAX;
        
        vector<string> ans;
        ans.push_back(" ");
        //for things with same index sum
        vector<string> temp;
        int t=INT_MAX;

        int prev = -1; 
        
        for (int i=0; i<list1.size();i++)
        {
            string curr=list1[i];

            if (hm2.find(curr)!=hm2.end())
            {
                if (hm2[curr]+i < m)
                {
                    m = i+hm2[curr];
                    ans[0] = curr;
                }else if (hm2[curr]+i == m)
                {
                    if (temp.size()>0 && prev!=m)
                    {
                        temp.clear();
                    }
                    if (temp.size()==0)
                    {
                        temp.push_back(ans[0]);
                        t=hm2[curr]+i;
                    }
                    temp.push_back(curr);
                    t=hm2[curr]+i;
                }
            }

            prev=m;
        }
        
        


        if (t<=m)
        {
            return temp;
        }

        return ans;
    }
};
