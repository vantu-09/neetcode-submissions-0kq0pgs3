class Solution
{
public:
    int evalRPN(vector<string>& tokens)
    {        stack<int> a;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] != "+" && tokens[i] != "/" && tokens[i] != "*" && tokens[i] != "-")
            {
                a.push(stoi(tokens[i]));
            }
            else
            {

                    int temp2 = a.top();
                    a.pop();
                    int temp1 = a.top();
                    a.pop();
                    if (tokens[i] == "+")
                    {
                        a.push(temp1 + temp2);
                    }
                    else if (tokens[i] == "-")
                    {
                        a.push(temp1 - temp2);
                    }
                    else if (tokens[i] == "*")
                    {
                        a.push(temp1 * temp2);
                    }
                    else
                    {
                        a.push(temp1 / temp2);
                    }
           
                
            }
        }
        return a.top();
    }
};