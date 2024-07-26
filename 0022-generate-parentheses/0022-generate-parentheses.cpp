class Solution {
public:
    void helper(vector<string> &results, string str, int openCount, int closeCount, int n ){
        if(str.length() == 2*n){
            results.push_back(str);
            return;
        }

        if(str.length() == 0){
            helper(results, str +"(", openCount +1, closeCount, n );
        }else{

            if(openCount < n ){
                int newCount = openCount +1;
                helper(results, str +"(", newCount, closeCount, n );
            }

            if(closeCount < openCount ){
                int newCount = closeCount +1;
                helper(results, str +")", openCount, newCount, n );
            }
        }
        
    }
    vector<string> generateParenthesis(int n) {
        // only add open paran if openCount < n
        // only add clos paran if closeCount < open
        // paran is valid if openCount == closeCount 
                            //and len of string == n

        vector<string>  results;
        helper(results, "", 0, 0, n );
        return results;
    }
};