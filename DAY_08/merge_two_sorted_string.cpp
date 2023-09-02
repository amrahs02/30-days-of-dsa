//Given two strings S1 and S2 as input, the task is to merge them alternatively i.e. the first character of S1 then the first character of S2 and so on till the strings end.


string merge (string S1, string S2)
{
     string S="";
    int n1=S1.size();
    int n2=S2.size();
    int i=0,j=0;
     for(int k=0; k<n1+n2; k++)
     {  
         if(i<n1)
         {
           S+=S1[i];
         }
         if(j<n2)
         {
           S+=S2[i];
         }
         i++;
         j++;
     }
     return S;
}