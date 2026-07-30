#include <iostream>
#include <vector>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
#include <stack>
#include <bits/stdc++.h>
using namespace std;

//infix to postfix
// int infixToPostfix(char op){
//   if(op == '+' || op == '-'){
//     return 1;
//   }
//   else if(op == '/'|| op =='*'){
//     return 2;
//   }
//   else if(op=='^'){
//     return 3;
//   }
//   else{
//     return -1;
//   }
// }

// string far(string infix){
//   string postfix = "";
//   stack <char>st;
//   for(auto ch : infix){
//     if(isalnum(ch)){
//       postfix+=ch;
//     }
//     else if(ch == '('){
//       st.push(ch);
//     }
//     else if(ch == ')'){
//       while(!st.empty()&& st.top()!='(' ){
//         postfix+=st.top();
//         st.pop();   
//       }
//       st.pop();
//     }
    
//     else{
//       while (!st.empty() &&
//       (infixToPostfix(ch) < infixToPostfix(st.top()) ||
//       (infixToPostfix(ch) == infixToPostfix(st.top()) && ch != '^'))){
//         postfix+=st.top();
//         st.pop();
//        }
//        st.push(ch);
//     }
//   }
//   while(!st.empty()){
//     postfix += st.top();
//     st.pop();
// }
//   return postfix;
// }

// int main(){
//   cout<<far("A+B*C");
//   cout<<endl;
//   cout<<far("A^B*(D-F)");
// }

// //infix to prefix
// int infixToprefix(char op){
//   if(op == '+' || op == '-'){
//     return 1;
//   }
//   else if(op == '/'|| op =='*'){
//     return 2;
//   }
//   else if(op=='^'){
//     return 3;
//   }
//   else{
//     return -1;
//   }
// }

// string raf(string infix){
//   string prefix = "";
//   stack <char>st;
//   reverse(infix.begin(),infix.end());
//   for(char &ch : infix){
//     if(ch=='(')
//         ch=')';
//     else if(ch==')')
//         ch='(';
// }
//   for(auto ch : infix){
//     if(isalnum(ch)){
//       prefix+=ch;
//     }
//     else if(ch == '('){
//       st.push(ch);
//     }
//     else if(ch == ')'){
//       while(!st.empty()&& st.top()!='(' ){
//         prefix+=st.top();
//         st.pop();   
//       }
//       st.pop();
//     }
    
//     else{
//       while (!st.empty() &&
//       (infixToprefix(ch) < infixToprefix(st.top()) ||
//       (infixToprefix(ch) == infixToprefix(st.top()) && ch =='^'))){
//         prefix+=st.top();
//         st.pop();
//        }
//        st.push(ch);
//     }
//   }
//   while(!st.empty()){
//     prefix += st.top();
//     st.pop();
// }
//   reverse(prefix.begin(),prefix.end());
//   return prefix;
// }

// int main(){
//   cout<<raf("A+B*C");
//   cout<<endl;
//   cout<<raf("A^B*(D-F)")<<endl;
//   cout<<raf("A+B*C/D^E^F*G");
// }

//Evaluation of postfix expression :
// int main(){
//     stack<int> st;
//     string s="";
//     cout<<"Enter the Postfix";
//     getline(cin,s);
//     for(char ch:s){
//         if(isdigit(ch)){
//             st.push(ch-'0');
//         }
//         else{
//             int b=st.top();
//             st.pop();
//             int a=st.top();
//             st.pop();
//             int r;
//             switch(ch){
//                 case '+':r=a+b;
//                     break;
//                 case '-':r=a-b;
//                     break;
//                 case '*':r=a*b;
//                     break;
//                 case '/':r=a/b;
//                     break;
//                 case '^':r=pow(a,b);
//                     break;

//             }
//             st.push(r);

//         }
//     }
//     cout<<"The evaluated value of given POSTFIX is "<<st.top();
//     return 0;
// }


//evaluation of prefix expression
int main(){
    stack<int> st;
    string s="";
    cout<<"Enter the Postfix";
    getline(cin,s);
    reverse(s.begin(),s.end());
    for(char ch:s){
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            int r;
            switch(ch){
                case '+':r=a+b;
                    break;
                case '-':r=a-b;
                    break;
                case '*':r=a*b;
                    break;
                case '/':r=a/b;
                    break;
                case '^':r=pow(a,b);
                    break;

            }
            st.push(r);

        }
    }
    cout<<"The evaluated value of given POSTFIX is "<<st.top();
    return 0;
}