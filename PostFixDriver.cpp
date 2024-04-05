#include <iostream>
#include "PostFix.h"

using namespace std;

int main(){

    Stack<int> nums;
    string eq = "53-4*";
    char character;
    int ans;
    int num1;
    int num2;
    for (int i = 0; i<eq.length() +1; i++){
        character = eq[i];
        if(character != '+' && character != '-' && character != '*' && character != '/'){
            int x = eq[i] - '0';  //note first we need to convert char to string then string to integer
            nums.push(x);
        }
        else if (character == '+'){
            num1 = nums.pop();
            num2 = nums.pop();
            ans = num1 + num2;
            nums.push(ans); 
        }
        else if (character == '-'){
            num1 = nums.pop();
            num2 = nums.pop();
            ans = num2 - num1;
            nums.push(ans);
        }
        else if (character == '*'){
            num1 = nums.pop();
            num2 = nums.pop();
            ans = num1 * num2;
            nums.push(ans); 
        }
        else if (character == '/'){
            num1 = nums.pop();
            num2 = nums.pop();
            ans = num2 / num1;
            nums.push(ans);
        }
    }
    cout<< ans<<endl;
    return 0;
}
