// method 1
// using set
// string removeDuplicates(string str) {
// unordered_set<char> st;
// string s;
// for(int i=0;i<str.length();i++){
//     if(st.find(str[i])==st.end()){
//         st.insert(str[i]);
//         s+=str[i];
//     }
// }
// return s;
// }






// 2nd method map check if count of element of map is less than 1
//  using map
//  string removeDuplicates(string str) {
//    unordered_map<char, int> mp;
//    string s;
//    for(int i=0;i<str.length();i++){
//        if(mp[str[i]]<1){
//            s+=str[i];//or s.push_back(str[i])
//        }
//        mp[str[i]]++;
//    }
//    return s;
// }




// method 3    check if count of element of map is equal to 1
// string removeDuplicates(string str) {
//     unordered_map <char, int> mp;
//     string s="";
//     for(char it:str){
//         mp[it]++;
//         if(mp[it]==1)
//         {
//             s=s+it;
//         }
//     }

//     return s;
//     }
