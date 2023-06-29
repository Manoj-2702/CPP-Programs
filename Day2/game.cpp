#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

class game
{
    int guess;
    int x, y;
    vector<int> num_array;

public:
    game(int x, int y)
    {
        this->x = x;
        this->y = y;
        guess = rand_num();
    }
    // void extractIntegerWords(string str)
    // {
    //     stringstream ss;

    //     /* Storing the whole string into string stream */
    //     ss << str;

    //     /* Running loop till the end of the stream */
    //     string temp;
    //     int found;
    //     while (!ss.eof())
    //     {

    //         /* extracting word by word from stream */
    //         ss >> temp;

    //         /* Checking the given word is integer or not */
    //         if (stringstream(temp) >> found)
    //             cout << found << " ";

    //         /* To save from space at the end of string */
    //         temp = "";
    //     }
    // }

    int rand_num()
    {
        srand(time(0));
        if (y > x)
        {
            return x + (rand() % (y - x + 1));
        }
        else if (x > y)
        {
            return y + (rand() % (x - y + 1));
        }
        else
        {
            return y + (rand() % (x - y + 1));
        }
    }
    bool check_number(string str)
    {
        for (int i = 0; i < str.length(); i++)
            if (isdigit(str[i]) == false)
                return false;
        return true;
    }
    void play()
    {
        int guess1;
        string input;
        int count = 0;
        do
        {
            cout << "\nEnter the guessing number" << endl;
            cin >> input;
            if (!check_number(input))
            {
                cout << "This is not a correct input!!";
            }
            else
            {
                if (isdigit(input[0]))
                {
                    guess1 = stoi(input);
                    count++;
                    bool exists = find(num_array.begin(), num_array.end(), guess1) != num_array.end();
                    if (!exists)
                    {
                        num_array.push_back(guess1);

                        if ((guess1 > guess) && (guess1 <= y))
                        {
                            cout << "Entered number is larger than the correct answer";
                        }
                        else if ((guess1 < guess) && (guess1 >= x))
                        {
                            cout << "Entered number is smaller than the correct answer";
                        }
                        else
                        {
                            cout << "Please enter the numbers within the range!!";
                        }
                    }
                    else
                    {
                        cout << "already putted";
                        continue;
                    }
                }
                else
                {
                    cout << "Wrong input buddy!!";
                    continue;
                }
            }

        } while (guess1 != guess);

        cout << "Correct Guess!!:  " << guess1 << endl;
        cout << "Number of attempts:  " << count << endl;
        cout << "Your inputs were: ";
        for (int num : num_array)
        {
            cout << num << "  ";
        }
        cout << endl;
    }
};

bool check_number1(string str)
{
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}

int main()
{
    int i, j;
    string input1, input2;
    char input3;
    bool a = true;
    bool yes = true;
    do
    {
        cout << "Enter two numbers: " << endl;
        cin >> input1;
        cin >> input2;
        if ((!check_number1(input1)) && (!check_number1(input2)))
        {
            cout << "Please enter the correct input type";
        }
        else
        {
            if (isdigit(input1[0]) && input2[0])
            {
                i = stoi(input1);
                j = stoi(input2);
                if (i > j)
                {
                    cout << "Guessing game starts between " << j << " and " << i;
                }
                else if (i < j)
                {
                    cout << "Guessing game starts between " << i << " and " << j;
                }
                else
                {
                    cout << "Give two different numbers\n";
                    continue;
                }
                game game1(i, j);
                game1.play();
            }
            else
            {
                cout << "Give the inputs again!!";
            }
        }
        cout << "Do you want to play the game again ?? (Y/N)";
        cin >> input3;
    } while (input3 == 'y');
    a = false;
    return 0;
}