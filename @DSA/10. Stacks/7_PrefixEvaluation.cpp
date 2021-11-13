//// Prefix Expression Evaluation
// (Youtube : Apna College)

#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefixEvaluation(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
    
        else
        {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            case '^':
                st.push(pow(operand1, operand2));
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout << prefixEvaluation("-+7*45+20") << endl;
    return 0;
}