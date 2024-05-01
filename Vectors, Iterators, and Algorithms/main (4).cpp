//Aaron Holladay Coding 1 Week 5 Wed.

#include <iostream>            //for cout and cin
#include <string>
#include <ctime>                // for time
#include <cstdlib>              // for rand() and srand()
#include <vector>
#include <algorithm>
using namespace std;


int main() 
{
    srand(time(0));
    
  cout << "Hello World! Your random number is..." << rand() % 2000 << ".\n";

    cout << "What program would you like to run?\n";
    cout << "Press 1 for vector exploration.\n";
    cout << "Press 2 for iterator nonsense.\n";
    cout << "Press 3 for algorithms!\n";            // #include <algorithm> above
    int numInput = 0;
    cin >> numInput;

    if(numInput == 1) 
    {
        // our first set of code goes here.
        cout << "Let's talk about vectors!\n";
            //#include <vector> above
            // build a vector of strings and inventory with a size of 0.
        vector<string> inventory;

        //cout << "There are " << inventory.size() << " items in my bag.\n";

        //let's add some things to our inventory!

        inventory.push_back("Sword");
        inventory.push_back("Shield");
        inventory.push_back("Axe");

        cout << "There are " << inventory.size() << " items in my bag.\n\n";

        cout << "The first item in my inventory is a " << inventory[0] << ".\n\n";

        // can you use a for loop to display all of your items? (use .size())

        cout << "Items:\n";

        for(int i = 0; i < inventory.size(); i++) 
        {   
        if(inventory[i] == "") continue;        //go back to top of loop
        cout << i + 1 << ". " << inventory[i] << "\n";
        }

        //let's replace an item, then let's remove an item with pop_back().

        cout << "We don't need a shield, let's get a gun.\n";
        inventory[1] = "gun";

        cout << "also, our axe breaks!!\n";

        inventory.pop_back();        // this removes the last item from the list.

        cout << "Items:\n";
        // can you use a for loop to display all of your items? (use .size())
        for(int i = 0; i < inventory.size(); i++) {
            cout << inventory[i] << "\n";
        }
        
        
    }// end of program 1
        
    else if(numInput == 2)
    {
            cout << "Let's talk about iterators!\n\n";
            //iterators point at ta spot in the list (vector).

            //let's create a vector of strings named shoppingList
            //let's use a collection initializer to quickly add 5 items...
            vector<string> shoppingList {"Milk", "Eggs", "Broccoli", "Parsley"};

            //let's create a variable of the type vector<string> :: iterator named iter
            vector<string>::iterator iter = shoppingList.begin();

            //use an asterisk * to dereference our iterator to get the value
            cout << "Here's the first item in the shopping list: " << *iter << "\n\n";

            cout << "Here's our shopping list:\n";
            for(vector<string>::const_iterator iter = shoppingList.begin(); iter != shoppingList.end(); ++iter){
                cout << *iter << "\n";
             
            }
            /*
                Milk        <-- .begin()
                Eggs
                Candy
                Broccoli
                Parsley        <-- .end()
            */

            cout << "Here is the last item: " << *(shoppingList.end() - 1);
        } // end of program 2

    else if(numInput == 3) 
    {
        // let's create a vector of random scores.
        vector<int> scores;
        for(int i = 0; i < 10; i++){
            scores.push_back(rand() % 100 + 1);
        }

        cout << "Here are the scores:\n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << ".\n";
        }

        // now we'll sort them!
        sort(scores.begin(), scores.end());

        cout << "Here are the sorted scores:\n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << ".\n";
        }

        //reverse, so highest number is first!
        reverse(scores.begin(), scores.end());

        cout << "Sorted highest to lowest:\n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << ".\n";
        }

        //now shuffle them again!
        random_shuffle(scores.begin(), scores.end());

        cout << "shuffled:\n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << ".\n";
        }

        
    } // end of program 3
        
    else 
    {
        cout << numInput << " wasn't one of the options.\n";
    }         // end of program catch-all else statement

    return 0;
}