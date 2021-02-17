// Algorithm:
// Input 4 integer numbers : NUM1 , NUM2 , NUM3 , NUM4
// Caculte the Sum of the 4  integer numbers S=NUM1 + NUM2 + NUM3 + NUM4
// Find the Average of the 4 integer numbers Av= S / 4.0
// Find the Differences between the 4 integer numbers : Diff1 , Diff2 , Diff3 , Diff4 using:
// Diff1= NUM1-Av , Diff2=NUM2-Av , Diff3=NUM3-Av , Diff4=NUM4-Av
// print the average and the differences.


#include<iostream>

using namespace std;

int main()
{
    int NUM1,NUM2,NUM3,NUM4; 
    float Av,Diff1,Diff2,Diff3,Diff4; 

    cout << "Please Enter The Four Integer Numbers: ";
    cin >> NUM1 >> NUM2 >> NUM3 >> NUM4; 

    cout << "The Numbers are: " << NUM1 << ", " << NUM2 << ", " << NUM3 << ", " << NUM4 << endl; 

    Av = (NUM1+NUM2+NUM3+NUM4) / 4.0; 

    cout << "The Average is: " << Av << endl; 

    Diff1 = NUM1 - Av; 
    Diff2 = NUM2 - Av;
    Diff3 = NUM3 - Av;
    Diff4 = NUM4 - Av;

    cout << "The differences are: " << Diff1 << ", " << Diff2 << ", " << Diff3 << ", " << Diff4; 

    return 0;

}
