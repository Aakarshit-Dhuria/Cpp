//// POSTFIX EXPRESSION EVALUATION
// Youtube : Apna College

#include <iostream>
#include <ctype.h>
#include <stack>
#include <math.h>
using namespace std;

int postfixEvaluation(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i])) // assuming the string only contains single digit numbers as operands
        {
            st.push(s[i] - '0'); // if we subtract char 0 from any number as char we get the number as integerS
        }
        else
        {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
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
    cout << postfixEvaluation("46+2/5*7+") << endl;
    return 0;
}