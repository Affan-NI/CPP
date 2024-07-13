// #include<iostream>
// #include<cmath>
// using namespace std;
// int main (){
//     int n=153,rem,ans=0;
//     while(n!=0){
//         rem=n%10;
//         int a=pow(rem,3);
//         cout<<a<<endl;
//         n/=10;
//         ans+=a;
//         cout<<ans<<endl;
//     }
//     int z=pow(50,3);
//     cout<<z;
    
// }





// #include <iostream>
// #include <cmath>

// bool isArmstrong(int number) {
//     int originalNumber, remainder, numDigits = 0, result = 0;
    
//     // Find the number of digits
//     originalNumber = number;
//     while (originalNumber != 0) {
//         originalNumber /= 10;
//         ++numDigits;
//     }

//     originalNumber = number;

//     // Calculate the sum of the digits raised to the power of numDigits
//     while (originalNumber != 0) {
//         remainder = originalNumber % 10;
//         result += pow(remainder, numDigits);
//         originalNumber /= 10;
//     }

//     // Check if the number is an Armstrong number
//     return (result == number);
// }

// int main() {
//     int number;

//     std::cout << "Enter an integer: ";
//     std::cin >> number;

//     if (isArmstrong(number))
//         std::cout << number << " is an Armstrong number." << std::endl;
//     else
//         std::cout << number << " is not an Armstrong number." << std::endl;

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    
    cout<<max(2,3);
}


