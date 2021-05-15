
// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <stack>

using namespace std;
 
// Function to check if target is a subsequence of string S
void checkforSubsequence(string S,  string target)
{
 
    // Declare a stack
    stack<char> s;
 
    // Push the characters of target into the stack
    for (int i = 0; i < target.size(); i++) {
        s.push(target[i]);
    }
 
    // Traverse the string S in reverse
    for (int i = (int)S.size() - 1; i >= 0; i--) {
 
        // If the stack is empty
        if (s.empty()) {
 
            cout << "POSITIVE" << endl;
            return;
        }
 
        // if S[i] is same as the top of the stack
        if (S[i] == s.top()) {
 
            // Pop the top of stack
            s.pop();
        }
    }
 
    // Stack s is empty
    if (s.empty())
        cout << "POSITIVE" << endl;
    else
        cout << "NEGATIVE" << endl;
}
 
// Driver Code
int main()
{
    string virus;
    int n;
    
    cin >> virus;
    cin >> n;
    
    string target[n];
    for(int i = 0 ; i < n ; i++){
        cin >> target[i];
    }
 
    for(int i = 0 ; i < n ; i++){
         
        checkforSubsequence(virus, target[i]);
    }
 
    return 0;
}
