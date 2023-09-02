 string ExcelColumn(int N)
    {
        string ans;
        while(N > 0) {
            N--;
            int curr = N % 26;
            N = N / 26;
            ans.push_back(curr + 'A');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }