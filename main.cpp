#include <iostream>
#include <cstdlib>

using namespace std;


void error()
{
     if(cin.fail() == 1)
        {
            cin.clear();
            cin.ignore(10000000, '\n');
            cout << "ERROR";
            exit(0);
        }
}
int main()
{

    char a[100];
    char b[100];
    float number1[100];
    float number2[100];
    int i=0, j=0;
    b[0] = 0;
    float score = 0;

    while (true)
    {



        cout << "Enter number: ";
        cin >> number1[i];
        // if error
       error();


        switch(b[i])
        {
            case '+':
                    score += number1[i];

            break;
            case '-':
                    score -= number1[i];
            break;
            case '*':
                    score *= number1[i];
            break;
            case '/':

                //if 0
                if (number1[i] == 0)
                {
                    cout << "ERROR";
                    return 0;
                }
                else
                {
                    score /= number1[i];
                }
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
        // if error
        error();
        if (a[i]== '=')     //double ==
        {
            cout << "Score = " << score <<endl;
            return 0;
        }

        cout << "Enter number: ";
        cin >> number2[i];
        error();

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
                    if (score==0)
                    {
                        score = number1[i] - number2[i];
                    }
                    else
                    {
                        score -= number2[i];
                    }
            break;
            case '*':
                     if (score==0)
                    {
                        score = number1[i] * number2[i];
                    }
                    else
                    {
                        score *= number2[i];
                    }
            break;
            case '/':
                //if 0
                  if (number1[i] == 0)
                {
                    cout << "ERROR";
                    return 0;
                }
                else
                {
                     if (score==0)
                    {
                        score = number1[i] / number2[i];
                    }
                    else
                    {
                        score /= number2[i];
                    }
                }
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
        error();
        if (b[i+1]== '=')
        {
            cout << "Score = " << score <<endl;
            return 0;
        }
        i++;


    }



    return 0;

}
