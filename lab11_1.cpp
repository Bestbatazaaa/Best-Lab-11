// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

string grade(int i){
    if(i == 0){
        return "A";
    }else if(i == 1){
        return "B+";
    }else if(i == 2){
        return "B";
    }else if(i == 3){
        return "C+";
    }else if(i == 4){
        return "C";
    }else if(i == 5){
        return "D+";
    }else if(i == 6){
        return "D";
    }else if(i == 7){
        return "F";
    }else{
        return "W";
    }
}

int main(){
    srand(time(0));
    int i = rand()%9;
    cout << "Press Enter 3 times to reveal your future." << endl;
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade(i) <<  " in this 261102.";
        
    }

