#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout<< "Please Enter the grade" <<endl;
    cin>>grade;

    while(grade == 'a' || grade == 'A')
    {
        cout << "Excellent" << endl;
        break;
    }
       while (grade == 'b' || grade == 'B')
    {
      cout<< "Very Good"<< endl;
      break;
    }
     while (grade == 'c' || grade == 'C')
    {
       cout<< "You Passed" << endl;
        break;

    }
    while ( grade != 'a' || grade !='A' || grade !='b' || grade !='B' || grade !='c' || grade !='C')
    {
        cout<<" You Fail" << endl;
        break;
    }

}
