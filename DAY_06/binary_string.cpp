
class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                cnt++;
            }
        }
        return ((cnt-1)*cnt)/2;
        
    }

};