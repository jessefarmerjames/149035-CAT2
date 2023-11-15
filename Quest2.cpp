//149035
//COURSE DBIT SEP-DEC 2023
//STRATHMORE UNIVERSITY

//a program that generates and prints all prime numbers up to the user specified limit

#include <iostream>

int main(){
    
    int limit;
    cout << "Enter a limit: ";
    cin >> limit;
    for(int i = 2; i <= limit; i++){
        if(i){
            cout << i << std::endl;
        }
    }
    return 0;
}


#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
int main(){
    //a program that takes a character and determines if it is a vowel or consonant use tolower function to convert user input to lowercase
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    letter = tolower(letter);
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        cout << "The letter is a vowel" <<endl;
    }
    else{
        cout << "The letter is a consonant" << endl;
    }
    return 0;
}
