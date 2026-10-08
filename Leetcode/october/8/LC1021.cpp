// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         int cnt=0;
//         int startInd=0;
//         int n=s.size();
//         string ans="";

//         int i=0;
//         while(i<n){

//             if(s[i]=='(')cnt++;
//             else cnt--;

//             if(cnt==0){
//                 int j=startInd+1;
//                 while(j<i){
//                     ans+=s[j];
//                     j++;
//                 }
//                 startInd=i+1;
                
//             }
//             i++;
//         }

//         return ans;
//     }
// }; 