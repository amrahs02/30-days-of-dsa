    string reverseWord(string str)
    {
        int i=0;
        int j=str.length()-1;
        while(i<j){
            swap(str[i++], str[j--]);
        }
        return str;
    }