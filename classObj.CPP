// 

Input Format

Most of the input is handled for you by the locked code in the editor.

In the void Student::input() function, you must read 5 scores from stdin and save them to your scores  instance variable.

Constraints

1<=n<=100
0<=examscore<50


Output Format

In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in scores ).

The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.



/////// SOLUTION PROGRAM   

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    private:int scores[5];
    public:int sum=0;
    public:
       void input()
        {
            for(int i=0;i<5;i++)
            {
                cin >> scores[i];
                sum+=scores[i];
            }
        }
        int calculateTotalScore(){
            return sum;
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
