//
// input format 
You are given two strings, a and b , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').
// output format 
In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a  and b  (a+b).
In the third line print two strings separated by a space, a'  and b' . a' and b' are the same as  a and b, respectively, except that their first characters are swapped.

// PROGRAM 

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s1,s2;
    cin>>s1>>s2;
    
    
    int len1=s1.size();
    int len2=s2.size();
    
    cout<<len1<<" "<<len2<<endl;
    
    string s3=s1+s2;
    
    cout<<s3<<endl;
    
    char s11=s1[0];
    char s22=s2[0];
    
    s1[0]=s22;
    s2[0]=s11;
    
    cout<<s1<<" "<<s2<<endl;
    
    return 0;
}


// OUTPUT 

Input (stdin)
abcd
ef
Output
4 2
abcdef
ebcd af

