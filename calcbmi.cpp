//Programmers: Sean Tosloskie, Christian Harrison, Mclene Velasco, Timothy Haddox
//Date last updated: 02/26/2016
//Version: 1.0.4
//This program will calculate a User's Body Mass Index based on their Height and Weight

//Include iostream library for input output
#include <iostream>
using namespace std;

int main()
{
    //Declare storage variables for User input and calculated output integers for the input and float for the output
    int UserHeight;
    int UserWeight;
    int UserAge;
    float BMI;

    //Welcome the User to the program and give them brief instructions
    cout << "Greetings, and welcome to calcBMI!" << endl;
    cout << "We will be asking you a series of questions to calculate your Body Mass Index." << endl;

//Begin User input section
//Height input
do{
    cout << "First, please enter your height in inches. (Example: 72) Then hit enter." << endl;
    cin >> UserHeight;

if (!cin){
            cout << "Not a number! " << endl;
            cin.clear();
        }
        cin.ignore(100, '\n');
    if ((UserHeight<22)||(UserHeight>107))
        cout << "You have enter a value out of our range. " << endl;
}while((UserHeight<22)||(UserHeight>107));
//Weight input
do{
    cout << "Next, please enter your weight in pounds. (Example: 180) Then hit enter. ";
    cin >> UserWeight;
    if (!cin){
            cout << "Not a number! " << endl;
            cin.clear();
        }
        cin.ignore(100, '\n');
    if ((UserWeight>400)||(UserWeight<80))
        cout << "You have enter a value out of our range. " << endl;
}while((UserWeight>400) ||(UserWeight<80));

    //We need to add some input validation here for UserHeight and UserWeight
    //Section coming soon

    //Calculate the BMI here and store it to the float BMI
    BMI = (UserWeight * 703) / (UserHeight * UserHeight);

    //Now we need to output the BMI result to the User
    cout << "Your BMI is " << BMI << endl;

    //Section where we inform the User of their body type based on BMI value and Age.
    //Section coming soon

    //if loop
    if (BMI<=18.5)
        cout << "You are underweight";
    else if(BMI<=24.9)
        cout << "You have a normal BMI";
    else if(BMI<=29.9)
        cout << "You are overweight";
    else if(BMI<=40)
        cout << "You are obese";
    else if (BMI>40)
        cout << "You are extremely obese";

   return 0;
}
