/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int age = 0;
    int height = 0;
    int bounty = 0;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100){
            cout << "Your character = Chopper";
        }
        else if(height < 180){
            cout << "Your character = Usopp";
        }
        else{
            cout <<"Enter your bounty: ";
            cin >> bounty;
            if(bounty > 1100000000){
                cout << "Your character = Zoro";
            }
            else{
                cout << "Your character = Sanji";
            }
            return 0;
    }
    }
    else if (age <= 60){
        cout <<"Enter your bounty: ";
        cin >> bounty;
        if(bounty > 500000000){
                cout << "Your character = Jinbe";
            }
        else{
                cout << "Your character = Franky";
            }
            return 0;
    }
    else if(age >60){
        cout << "Your character = Brook";
        return 0;
    }
    
}