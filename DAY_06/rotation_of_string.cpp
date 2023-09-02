 bool areRotations(string s1,string s2)
    {
        string str = s2+s2;
        if(s1.length()!=s2.length()){
            return 0;
        }
        for(int i=0;i<str.length();i++){
            if(str.find(s1)!=string::npos){
                return true;  
            }
            else{
                return false;
            }
        }
    }