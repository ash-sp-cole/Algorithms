#include<iostream>

using namespace std;






void map(int width, int height)
{

    for (int i = 0; i < width; i++)
    {

        cout << "--";
    }
    cout << endl;

    for (int j = 0; j < height; j++)
    {

        for (int k = 0; k < width; k++)
        {
            if (k == 0 )
                cout << "--";
                else if( k== width-1) 
                 cout << "--" << endl;       
            else
            {
                cout << "  ";
            }
        }
    }


    for (int i = 0; i < width; i++)
    {

        cout << "--";
    }

}

int getPostion (int width, int height) {

   int fruitH = rand() % height; 
    int fruitW = rand() % width;

int fruitposition = 







}