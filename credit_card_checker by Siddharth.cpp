// LUHN ALGORITHM by SIDDHARTH :)
#include<bits/stdc++.h>

using namespace std;
bool check_valid_card( string card_number,int length){
   int sum = 0;
   int last = card_number[length-1] - '0'; // get last digit of card
   for(int i = length-2; i>=0; i--){
        int digit = card_number[i] - '0'; // convert char to int
        if(i%2 == 0){            // for handling alternate numbers
           digit = digit * 2;
            if(digit > 9){
            digit = digit - 9;
            sum+=digit;
           }
           else{
            sum+=digit;
           }
        }
           else{
           sum+=digit;
           }
    }

       int  total = sum*9;
       int check = total % 10;



    if(check == last){
        return true;
    }                      // if last digit of card is equal to calculated sum then it is valid otherwise not.
    else{
        return false;
    }

}
int main() {
    cout << "Enter your credit card number :" << endl;
    string card_number;
    cin  >> card_number;
    int length = card_number.length();
    if(check_valid_card(card_number,length)){

        cout << "YOU ENTERED CORRECT CREDIT CARD NUMBER ! CONGRATS :)" <<endl;
    }
    else{
        cout << "OOPS WRONG CARD NUMBER ! TRY AGAIN ):" << endl;
    }

return 0;
}
