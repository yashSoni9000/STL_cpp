#include <iostream>
using namespace std;

int main(){
    int grade[5];

    grade[0] = 32;
    grade[1] = 42;
    grade[2] = 76;
    grade[3] = 31;
    grade[4] = 57;
  
    for(int i; i < 5; i++){
        printf("Grade of %d: %d\n", i, grade[i]);
    }

    return 0;
}
