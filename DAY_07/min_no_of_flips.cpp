int minFlips (string S)
{
    int flips = 0;
    for(int i=0;i<S.size();i++){
        if(i%2==0){
            if(S[i]=='0')
                flips++;
        }
        else{
            if(S[i]=='1')
                flips++;
        }
    }
    int temp = S.size()-flips;
    return min(flips,temp);
}


//mehtod 2

int minFlips (string S){
    string s1, s2;
    for(int i=0;i<S.length();i++){
        if(i%2==0){
            s1+='1';
            s2+='0';
        }
        else{
            s1+='0';
            s2+='1';
        }
    }
    int even=0, odd = 0;
    for(int i=0;i<S.length();i++){
        if(S[i]!=s1[i]){
            even++;
        }
        else{
            odd++;
        }
    }
    return min(even, odd);
}