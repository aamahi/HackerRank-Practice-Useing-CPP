//C++ solution to the Hackerrank Conditional Statements C++ problem at https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
//Done by Atomic Variables. Visit my website at https://arunachalam.xyz
//Support me by following my page at https://medium.com/atomic-variables

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //Naive Approach : Use a lot of if else statements for each number and cout the     desired output.

    //Better Approach : Store the corresponding English language strings for each number in an array of strings where the string at index i-1 is the corresponding word spelling for that number. Based on the constraints, out the appropriate answer

    string numbers[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    if(n>0 && n<10)
    {
        cout<<numbers[n-1];
    }
    else 
    {
        cout<<"Greater than 9";
    }

    //another method would be to use STL vectors
    //vector<string> vecnumbers; 
    // vecnumbers.push_back("one"); 
    // vecnumbers.push_back("two"); .... and so on.
    // vectors can be accessed similar to array of strings, here "two" would be vecnumbers[1]
    

    return 0;
}