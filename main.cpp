#include <iostream>

using namespace std;

int main()
{

    char a[10];
    char b[10];
    float number1[100];
    float number2[100];
    int i=0, j=0;
    b[0] = 0;
    float score = 0;

    while (true)
    {



        cout << "Enter number: ";
        cin >> number1[i];


        switch(b[i])
        {
            case '+':
                    score += number1[i];

            break;
            case '-':
                    cout << "o";
            break;
            case '*':
                    cout << "b";
            break;
            case '/':
                    cout << "c";
            break;
            case '=':
                    cout << "Score = " << score <<endl;
                    return 0;
            break;
            case 0:
                    //IF 1st number, do nothing
            break;
            default:
                    cout << "ERROR";
                    return 0;
            break;

        }



        cout << "Choose operation: ";
        cin >> a[i];
        if (a[i]== '=')     //double ==
        {
            cout << "Score = " << score <<endl;
            return 0;
        }

        cout << "Enter number: ";
        cin >> number2[i];

        switch(a[i])
        {
            case '+':
                    if(score == 0)
                    {
                        score = number1[i] + number2[i];
                    }
                    else
                    {
                    score += number2[i];
                    }

            break;
            case '-':
                    cout << "a";
            break;
            case '*':
                    cout << "b";
            break;
            case '/':
                    cout << "c";
            break;
            case '=':
                    cout << "Score = " << score <<endl;
                    return 0;
            break;
            default:
                    cout << "ERROR";
                    return 0;
            break;
        }


        cout << "Choose operation: ";
        cin >> b[i+1];
        if (b[i+1]== '=')
        {
            cout << "Score = " << score <<endl;
            return 0;
        }
        i++;


    }



    return 0;

}
