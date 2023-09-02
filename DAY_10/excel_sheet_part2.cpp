int ExcelColumnNumber(string s)
    {
        int ans = 0;
        int temp = 1;
        for (int i=s.size()-1; i>=0; i--){
            ans += temp*(int(s[i])-64);
            temp*=26;
        }
        return ans;
    }