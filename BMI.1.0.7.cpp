//Programmers: Sean Tosloskie, Christian Harrison, Mclene Velasco, Timothy Haddox
//Date last updated: 02/26/2016
//Version: 1.0.8
//This program will calculate a User's Body Mass Index based on their Height and Weight

//Include iostream library for input output
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    //Declare storage variables for User input and calculated output integers for the input and float for the output
    int UserHeight, UserWeight, date, year; //Height and Weight
    float BMI;
    string firstName, lastName, month;
    ofstream outData;
    ifstream inData;

     //Open files
     inData.open("BMI.in.txt");
     outData.open("BMI.out.txt");

    //Read Values
     inData>> UserHeight >> UserWeight;


    //Welcome the User to the program and give them brief instructions
    cout << "Greetings, and welcome to calcBMI!" << endl;
    cout << "We will be asking you a series of questions to calculate your Body Mass Index." << endl;

    //Begin User input section
    cout << "Lets start with todays date. " << endl;
    cout << " What year is it? (Ex 2016) " << endl;
    cin >> year;
    cout << "What month is it? (Ex April) " << endl;
    cin >> month;
    cout << "What is todays date? (Ex 20) " << endl;
    cin >> date;

    cout << "Now for some personal information. " << endl;
    cout << "Please enter your first name. " << endl;
    cin >> firstName;


    cout << "Please enter your last name. " << endl;
    cin >> lastName;
    if (!cin){
        cout << "Not a name " << endl;
    }
    //Height input
do{
    cout << "First, please enter your height in inches. (Example: 72) Then press enter." << endl;
    cin >> UserHeight;

    //Test if height is an invalid entry and raise an error
    if (!cin){
            cout << "Not a number! " << endl;
            cin.clear();
        }
        cin.ignore(100, '\n');
    //Test is number entered is outside of our range
    if ((UserHeight<22)||(UserHeight>107))
        cout << "You have entered a value out of range. " << endl;
}
//Continue if height is good input
while((UserHeight<22)||(UserHeight>107));
//Ask the user for their weight
do{
    cout << "Next, please enter your weight in pounds. (Example: 180) Then press enter. ";
    cin >> UserWeight;
    //If the value entered is not a number, raise a warning
    if (!cin){
            cout << "Not a number! " << endl;
            cin.clear();
        }
        cin.ignore(100, '\n');

    //Check if User entered value outside of range
    if ((UserWeight>400)||(UserWeight<80))
        cout << "You have enter a value out of our range. " << endl;

}
while((UserWeight>400) ||(UserWeight<80));
    //Calculate the BMI here and store it to the float BMI
    BMI = (UserWeight * 703) / (UserHeight * UserHeight);

    //Now we need to output the BMI result to the User
    cout << firstName << " your BMI is " << BMI << endl;

    //Output the User's body type based on their calculated BMI
    if (BMI<=18.5)
        cout << "Based on your BMI result, your body type is considered below average";
    else if(BMI<=24.9)
        cout << "Based on your BMI result, your body type is considered average.";
    else if(BMI<=29.9)
        cout << "Based on your BMI result, your body type is considered above average."; //the teacher wants somthing "nicer"
    else if(BMI<=40)                                                                    //than obese and extremely obese
        cout << "Based on your BMI result, your body type is considered slightly overweight.";
    else if (BMI>40)
        cout << "Based on your BMI result, your body type is considered overweight.";

//Output results
    outData
            << "Date: " << month << " " << date << ", " << year << endl
            << "First Name: " << firstName << endl
            << "Last Name: " << lastName << endl
            << "Height:  "<< UserHeight
            <<setprecision(2)<<endl
            <<"Weight:  " <<UserWeight
            <<setprecision(2)<<endl
            <<"BMI: " << BMI
            <<setprecision(2)<<endl;

    inData.close();
    outData.close();

   return 0;
}
