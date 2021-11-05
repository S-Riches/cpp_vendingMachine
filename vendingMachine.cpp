#include <iostream>
#include <stdlib.h>
#include <vector>


//vector type function
std::vector<int> generateItems(int items)
{
    int x;
    //define vector
    std::vector<int> col;
        for(int i = 0; i < items; i++)
        {
            //generate a random number from 1 - 100
            x = std::rand() % 100 + 1;
            col.push_back(x);  
        }
        // possibly put in a loop to check if there is a re-occuring number present in the lists
        for(int i = 0; i != col.size(); i++){
            std::cout << col.at(i) << " ";
        }

    //return the vector
    return col;
}

void generateVector(int rows, int items)
{
    std::vector<std::vector<int>> holder;
    // generate x rows
    for(int i = 0; i < rows; i++)
    {
        //generate x items in each row
        holder.push_back(generateItems(items));
        std::cout << holder[i][i] << " \n";
    }
    
}

int main()
{
    std::cout << "vending machine program" << std::endl;
    generateVector(5, 4);
    return 0;
}