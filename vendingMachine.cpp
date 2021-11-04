#include <iostream>
#include <stdlib.h>
#include <vector>
#include <array>


void generateItems(int items)
{
    int x;
    std::vector<int> col;
    int tempCol[items];

        for(int i = 0; i < items; i++)
        {
            x = std::rand() % 100 + 1;
            col.push_back(x);
            tempCol.
        }
        // possibly put in a loop to check if there is a re-occuring number present in the lists
        for(int i = 0; i != col.size(); ++i){
            std::cout << col.at(i) << " ";
        }
    std::cout << std::endl;
}

void generateVector(int rows, int items)
{
    int vectorHolder[rows];
    // generate x rows
    for(int i = 0; i < rows; i++)
    {
        //generate x items in each row
        generateItems(items);
    }
}

int main()
{
    std::cout << "vending machine program" << std::endl;
    generateVector(5, 4);
    return 0;
}