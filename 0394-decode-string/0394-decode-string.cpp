class Solution {
public:
    string decodeString(string s) {
        //two stacks. one for numeric and other for bracket and alphabets that is string type.
        stack<int>numStack;
        stack<string>strStack;
        //initalize
        int currNum = 0;
        string currString = "";

        for(char ch : s){
            //agar digit hai
             if(isdigit(ch)){
                currNum = currNum * 10 + (ch - '0');
            }

               // agar opening bracket hai
            else if(ch=='['){
                //numeric stack k top value ho jayegi jo variable currNum me hai. aur string stack k top me value ho jayegi jo variablle currString me hai.
                numStack.push(currNum);
                strStack.push(currString);

                // reset for new substring
                currNum = 0;
                currString = "";
            }
             // agar closing bracket hai
              else if(ch == ']'){
                 int repeat = numStack.top();//nemeric stack k  top ki value for repetition of string inside the brackets
                 numStack.pop();// value lene k baad pop kar do

                 string prevString = strStack.top();//string jisko repeat karna h bracets k andar jo hai.
                 strStack.pop();

                 string temp = "";
                 for(int i = 0; i < repeat; i++){
                    temp += currString;
                    
                }
                currString = prevString + temp;
              }
                 // normal character
            else{
                currString += ch;
            }
              }
              return currString;
        }

    
};