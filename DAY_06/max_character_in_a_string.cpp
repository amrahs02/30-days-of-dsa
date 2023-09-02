///take this questoin as max elemtn in an array 

  char getMaxOccuringChar(string str){
        char ch;
        map<char, int> mp;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        int max = INT_MIN;
        for(auto &it:mp){
            if(it.second>max){
                max = it.second;
                ch = it.first;
            }
        }
        return ch;
        
        
    }b