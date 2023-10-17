In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in ).

The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.

Sample Input

The first line contains , the number of students in Kristen's class. The  subsequent lines contain each student's  exam grades for this semester.

3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample Output

1

Answer:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    public:
    int s[5];
    int total;
    void input(){
        for(int i=0;i<5;i++){
            cin>>s[i];
        }
    }
    int calculateTotalScore(){
        for(int i=0;i<5;i++){
        total +=s[i];
        }
        return total;
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
