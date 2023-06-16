class Solution {
public:
 void Generate_string(int m,int n,int k,vector<string>& ans,string temp)
 {
     if(m==k && n==k)
     {
         ans.push_back(temp);
         return ;
     }
     if(m==n)
     {
         Generate_string(m+1,n,k,ans,temp+'(');
     }
     else
     {
         if(m!=k)
         {
             Generate_string(m+1,n,k,ans,temp+'(');
         }
         Generate_string(m,n+1,k,ans,temp+')');
     }
 }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        Generate_string(0,0,n,ans,"");
        return ans;
    }
};