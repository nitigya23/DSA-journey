class Solution {   //to find unique occurence of each element of the array
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[2001]={0};
        for(int i=0;i<arr.size();i++){
            freq[arr[i]+1000]++;
        }

        bool taken[2001]={false};

        for(int i=0;i<2001;i++){
            if(freq[i]==0)
                continue;
            else if(taken[freq[i]])
                return false;
            taken[freq[i]]=true;

        }

        return true;
      
    }
};