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
// int main(){
//     stack<int> st;
//     string s="";
//     cout<<"Enter the Postfix";
//     getline(cin,s);
//     reverse(s.begin(),s.end());
//     for(char ch:s){
//         if(isdigit(ch)){
//             st.push(ch-'0');
//         }
//         else{
//             int a=st.top();
//             st.pop();
//             int b=st.top();
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

//Dynamic implementaion of Queue :
// struct Node{
//     int info;
//     Node *next;
// };
// Node *front =NULL;
// Node *rear =NULL;

// void enqueue(int val){
//     Node *newNode =new Node();
//     // newNode ->data =value;

// }

//Dynamic implementation of MAX priority Queue :
// struct Node{
//   int info;
//   Node *next;
// };
// Node *front = NULL;
// void insert(int x){
//   Node *newNode = new Node();
//   newNode-> info =x;
//   newNode-> next = front;
//   front = newNode;
// }

// BINARY TREE :
struct Node
{
    int info;
    Node *left;
    Node *right;
};
// create 
Node *create()
{
    int x;
    cout << "Enter -1 for no data: ";
    cin >> x;
    if (x == -1)
        return NULL;
    else
    {
        Node *p = new Node();
        p->info = x;

        cout << "Enter left child of " << x << endl;
        p->left = create();

        cout << "Enter right child of " << x << endl;
        p->right = create();
        return p;
    }
}
// preorder 
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->info << " ";
    preorder(root->left);
    preorder(root->right);
}
// inorder 
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->info << " ";
    inorder(root->right);
}
// postorder
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->info << " ";
}
// count leafNode
int leafnode_count(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return leafnode_count(root->left) + leafnode_count(root->right);
}
// count internalNode
int internalnode_count(Node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return 0;
    }
    return 1 + internalnode_count(root->left) + internalnode_count(root->right);
}
// count total
int totalcount(Node *p)
{
    if (p == NULL)
        return 0;
    else
        return (1 + totalcount(p->left) + totalcount(p->right));
}
// count single child
int countSingleChild(Node *p)
{
    if (p == NULL)
        return 0;

    int count = 0;
    if ((p->left == NULL && p->right != NULL) || (p->left != NULL && p->right == NULL))
        count++;
    return count + countSingleChild(p->left) + countSingleChild(p->right);
}
// count 2 child
int countTwoChild(Node *p)
{
    if (p == NULL)
        return 0;

    int count = 0;
    if (p->left != NULL && p->right != NULL)
        count++;
    return count + countTwoChild(p->left) + countTwoChild(p->right);
}

int height(Node* p)
{
    if(p==NULL)
        return 0;

    return 1+max(height(p->left),height(p->right));
}

int main()
{
    Node *root = create();
    cout<<endl;
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    cout << leafnode_count(root) << endl;
    cout << internalnode_count(root) << endl;
    cout << totalcount(root) << endl;
    cout << countSingleChild(root) << endl;
    cout << countTwoChild(root) << endl;
    cout << height(root) << endl;

    return 0;
}