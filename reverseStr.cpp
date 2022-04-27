#include <iostream>
using namespace std;

//Function for Reverse Number
 void reverseNumber(int num)
 {
     int revNumber=0;
     while (num > 0)
     {
         revNumber = (revNumber * 10) + (num % 10);
         num = num / 10;
     }
     cout << revNumber << endl;
 }


//Function for Reverse String
// bool isPalandrome(string str, int size)
// {
//     string revString;
//     for (int i = size-1; 0 <= i; i--)
//     {
//         revString += str[i];
//     }

//     if (revString == str)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
    
// }

bool isPalandrome(string str, int size)
{
    int i=0;
    int j=size-i-1;
    while (i<j)
    {

        if (str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
       
}

int main()
{
    int number = 12345;
    cout<<number<<"::";reverseNumber(number);


    string str = "DKAD";
    int size = str.length();
    

    if (isPalandrome(str, size))
    {
        cout << "string is  Palandrome: " << str << endl;
    }
    else
    {
        cout << "string is not Palandrome: " << str << endl;
    }

    return 0;
}