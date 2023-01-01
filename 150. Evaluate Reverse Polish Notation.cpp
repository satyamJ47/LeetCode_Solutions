class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>s;
        for(auto i:tokens)
        {
            if(i=="+" || i=="-" || i=="*" || i=="/")
            {
                int a,b;
                b=stoi(s.top());
                s.pop();
                a=stoi(s.top());
                s.pop();

                int ans;
                if(i=="+")ans=a+b;
                if(i=="-")ans=a-b;
                if(i=="*")ans=a*b;
                if(i=="/")ans=a/b;

                s.push(to_string(ans));
            }
            else{
                s.push(i);
            }
        }
        return stoi(s.top());
        
    }
};