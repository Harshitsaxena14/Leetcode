class Solution {
public:
    string decodeString(string s) {
        stack<int>numstack;
        stack<string>strstack;
        string curr ="";
        int num = 0;

        for(char ch:s){
            if(isdigit(ch)){
                num = num*10 +(ch - '0');
            }
            else if (ch == '['){
                numstack.push(num);
                strstack.push(curr);

                num = 0;
                curr ="";
            }
            else if (ch == ']'){
                int repeat =numstack.top();
                numstack.pop();

                string temp = curr;
                for(int i =1;i<repeat ;i++){
                    curr +=temp ;
                }
                curr = strstack.top()+curr ;
                strstack.pop();
            }
            else{
                curr += ch ;
            }
        }
        return curr;
        }
};