//two pointer   

int isPalindrome(string S)
	{
	    int i=0;
	    int j = S.length()-1;
	    while(i<j){
	        if(S[i++]!=S[j--]){
	            return false;
	        }
	    }
	    return true;
	}