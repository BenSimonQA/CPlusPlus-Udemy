/*
    Author: Benjamin Simon
    Description: Practice with vectors
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Declare empty vectors
    vector <int> vector1;
    vector <int> vector2;

    //Add 2 ints to vector1 and display
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector 1 index 0 is: " << vector1.at(0) << endl;
    cout << "Vector 1 index 1 is: " << vector1.at(1) << endl;
    cout << "Size of vector 1 is: " << vector1.size() << endl;

    //Add 2 ints to vector2 and display
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Vector 2 index 0 is: "  << vector2.at(0) << endl;
    cout << "Vector 2 index 1 is: "  << vector2.at(1) << endl;
    cout << "Size of vector 2 is: " << vector2.size() << endl;


    //Declare empty 2D vector
    vector <vector<int>> vector_2d;

    //Add vector1 and vector2 to vector_2d
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Display 2D  vector
    cout << "2D vector index 0,0 is: " << vector_2d.at(0).at(0) << endl;
    cout << "2D vector index 0,1 is: " << vector_2d.at(0).at(1) << endl;
    cout << "2D vector index 1,0 is: " << vector_2d.at(1).at(0) << endl;
    cout << "2D vector index 1,1 is: " << vector_2d.at(1).at(1) << endl;

    //Change value
    vector1.at(0) = 100;

    //Display 2D  vector again
    cout << "2D vector index 0,0 is: " << vector_2d.at(0).at(0) << endl;
    cout << "2D vector index 0,1 is: " << vector_2d.at(0).at(1) << endl;
    cout << "2D vector index 1,0 is: " << vector_2d.at(1).at(0) << endl;
    cout << "2D vector index 1,1 is: " << vector_2d.at(1).at(1) << endl;

    //Display vector1 again
    cout << "Vector 1 index 0 is: "  << vector1.at(0) << endl;
    cout << "Vector 1 index 1 is: "  << vector1.at(1) << endl;

    return 0;
}

