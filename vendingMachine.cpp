#include <iostream>
#include <stdlib.h>
#include <vector>
#include <cctype>


// vector type function
std::vector<std::vector<int>> holder;

std::vector<int> generateItems(int items)
{
    int x;
    // define temp vector
    std::vector<int> col;
        for(int i = 0; i < items; i++)
        {
            // generate a random number from 1 - 100
            x = std::rand() % 100 + 1;
            // append the random number to the end of the list
            col.push_back(x);  
        }
        // possibly put in a loop to check if there is a re-occuring number present in the lists
        for(int i = 0; i != col.size(); i++){
            //print out for info
            std::cout << i << " : "<< col.at(i) << "\n";
        }
        std::cout << std::endl;
    //return the vector
    return col;
}

void generateVector(int rows, int items)
{
    int identifier = 0;
    // generate x rows
    std::cout << std::endl <<"---generating items---" << std::endl;
    for(int i = 0; i < rows; i++)
    {
        std::cout << "Row "<< i <<" : "<<std::endl;
        //generate x items in each row
        holder.push_back(generateItems(items));
    }
    // loop through the vector holder, increase after each loop through
    std::cout << "---Items---" << std::endl;
    for(int i = 0; i < holder.size(); ++i ){
        std::cout << "\n";
        std::cout << identifier << " . ";
        // add a number to each 
        identifier += 1;
        //loop through the nested vector and print out each element seperated by comma
        for (int j = 0; j < holder.at(i).size(); j++){
            // probably not the easiest way to print out the vector, but it works so we move
            std::cout << holder [i][j] << ", ";
        }
    }
    
}

void selector(int num, char rowId){
    // could have an if here to see if a goon tried putting a number
    //char to num
    char rowLower = tolower(rowId);
    int rowToInt;
    switch (rowLower)
    {
    //probably a terrible way to do this, however i dont know how i would dynamically add cases at runtime if i wanted more rows?
    case 'a':
        rowToInt = 0;
        break;
    case 'b':
        rowToInt = 1;
        break;
    case 'c':
        rowToInt = 2;
        break;
    case 'd':
        rowToInt = 3;
        break;
    default:
        std::cout << "oi stop that mate " << std::endl;
        break;
    }
    std::cout << "\nHere is " << num << rowId << " : " << holder[num][rowToInt];
}

int main()
{
    // local declaration
    int num;
    char rowId;
    // title for terminal
    std::cout << "---vending machine program---" << std::endl;
    generateVector(5, 4);
    //inputs and outputs
    std::cout << "\n\nPlease choose a number from the items area, e.g. if you wanted the first number, put in 0 : ";
    std::cin >> num;
    std::cout << "Please chose what item from the row, first item would be a, second would be b, etc : ";
    std::cin >> rowId;
    selector(num, rowId);

    return 0;
}