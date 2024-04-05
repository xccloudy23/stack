#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
    string str = ")(";
    Stack<char> s;
    try{
    for (int i = 0; i < str.length(); i++){
        //cout <<str[i] <<endl;
        if (str[i] =='('){
            s.push('(');
        }
        if (str[i] =='['){
            s.push('[');
        }
        
        if (str[i] == ')'){
            char close = s.pop();
            if (close != '('){
                throw out_of_range("Bad");
            }
        if (str[i] == ']'){
            char close = s.pop();
            if (close != '['){
                throw out_of_range("Bad");
            }
        }
    }
    if (s.getCount() == 0){
        cout<<"Good";
    }
    else{
        cout<<"Bad: Too many opens"<<endl;
    }
    }
    }
    catch (out_of_range e){
        cout<<"Bad: Too many closes";
    }
    
    return 0;
    
}