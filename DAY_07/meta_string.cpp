
//two pointer

bool metaStrings (string S1, string S2)
{
    if(S1.length()!=S2.length() || S1==S2){
        return 0;
    }

    int i=0;
    int j=S1.length()-1;
    while(S1[i]==S2[i]){
        i++;
    }
    while(S1[j]==S2[j]){
        j--;
    }
    swap(S2[i], S2[j]);
    if(S1==S2){
        return true;
    }
    return false;
    
}