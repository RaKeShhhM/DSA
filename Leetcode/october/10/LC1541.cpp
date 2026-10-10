// class Solution {
// public:
//     int minInsertions(string s) {
//         int ans=0;
//         stack<char>st;

//         int i=0;
//         while(i<s.size()){
//             if(s[i]=='('){
//                 st.push('(');
//             }// got )
//             else{
//                 //we have ")", needs to check what is at next of i
//                 //case )) 
//                 if(s[i+1]==')'){
//                     if(!st.empty()){
//                         st.pop();
                        
//                     }else{
//                         ans++;
//                     }
//                     i++;
//                 }//case )(
//                 else{// ()()
//                     if(!st.empty()){
//                         ans++;//insert ) before (
//                         st.pop();
//                     }else{//)()
//                         ans+=2;
//                     }
//                 }
//             }
//             i++;
//         }
//         //stack has opening brackts left , ((( -> 2*3 closing backets needed
//         ans+=2*st.size();

//         return ans;
//     }
// };