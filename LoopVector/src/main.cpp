/*
    Author: Benjamin Simon
    Description: Looping programme with vector
*/

#include  <iostream>
#include <vector>

using namespace std;

void printNumbers(vector<int> numbers);
vector<int> addNumber(vector<int> numbers);
void meanCalc(vector<int> numbers);
void findSmallest(vector<int> numbers);
void findLargest(vector<int> numbers);



int main()
{

    vector<int> vec;
    char input;

    do
    {
        
        cout << "\nP - Print numbers" << endl;
        cout << "\nA - Add a number" << endl;
        cout << "\nM - Display mean of the numbers" << endl;
        cout << "\nS - Display the smallest number" << endl;
        cout << "\nL - Display the largest number" << endl;
        cout << "\nQ - Quit" << endl;
        
        cout << "\nEnter your choice: ";
        cin >> input;

        switch (input)
        {
            case 'p':
            case 'P':
                printNumbers(vec);
                break;
            case 'a':
            case 'A':
                vec = addNumber(vec);
                break;
            case 'm':
            case 'M':
                meanCalc(vec);
                break;
            case 's':
            case 'S':
                findSmallest(vec);
                break;
            case 'l':
            case 'L':
                findLargest(vec);
                break;
            case 'q':
            case 'Q':
                cout << "\nGoodbye!" << endl;
                break;
            default:
                cout << "Invalid input! Try again!" << endl;
                break;
        }
        
    } while (input != 'Q' && input != 'q');

    return 0;
}

void printNumbers(vector<int> numbers)
{
    if(numbers.size() < 1)
    {
        cout << "\nNo numbers to print" << endl;
    }
    else
    {
        for (int index = 0; index < numbers.size(); ++index)
        {
            cout << "\nIndex " << index + 1 << ": " << numbers.at(index) << endl;
        }
    }
}

vector<int> addNumber(vector<int> numbers)
{

    cout << "\nNumber to add: ";
    int putNumber  {0};
    cin >> putNumber;

    numbers.push_back(putNumber);
    
    return numbers;
}

void meanCalc(vector<int> numbers)
{
    double mean {0.0};
    int length  = numbers.size();

    if(length < 1)
    {
        cout << "\nNo numbers to calculate mean" << endl;
    }
    else
    {
        for(int index = 0; index < length; ++index)
        {
            mean += (double) numbers.at(index);
        }

        mean /= (double) length;

        cout << "\nMean is: " << mean << endl;
    }
}

void findSmallest(vector<int> numbers)
{
    if(numbers.size() < 1)
    {
        cout << "\nNo numbers to find smallest" << endl;
    }
    else
    {
        int smallest {numbers.at(0)};

        for (int index = 1; index < numbers.size(); ++index)
        {
            if(smallest > numbers.at(index))
            {
                smallest = numbers.at(index);
            }
        }

        cout << "\nSmallest number is: " << smallest << endl;
    }
}

void findLargest(vector<int> numbers)
{
    if(numbers.size() < 1)
    {
        cout << "\nNo numbers to find largest" << endl;
    }
    else
    {
        int largest {numbers.at(0)};

        for (int index = 1; index < numbers.size(); ++index)
        {
            if(largest < numbers.at(index))
            {
                largest = numbers.at(index);
            }
        }

        cout << "\nLargest number is: " << largest << endl;
    }
}