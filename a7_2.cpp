/*
        Janice Luong
        a5.cpp
        Harden CCSF CS110B

        This program reconds the high-score data for a
        fictitious game. The program asks the user to
        enter five names with their corresponding scores.
        The program will then store the data and then print
        out the scores from highest to lowest with the 
        corresponding names. 
*/
#include <iostream>
#include <string>
using namespace std;

void initializeArrays(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[], const int scores[], int size);

const int size = 5;

int main()
{
        string *names; //size of the array "names"
        names = new string[size];
        int *scores; //size of the array "scores"
        scores = new int[size];

        initializeArrays(names, scores, size);
        sortData(names, scores, size);

        cout << "\nTop Scorers:\n";
        displayData(names, scores, size);

        return 0;
}

/*
        This function asks the user to enter 5 names each with
        their corresponding scores (total of 5 scores).
*/
void initializeArrays(string names[], int scores[], int size)
{

        for(int i = 0; i < size; i++)
        {
                cout << "Enter the name for the score #" << i + 1 << ": ";
                cin >> names[i];

                cout << "Enter the score for score #" << i + 1 << ": ";
                cin >> scores[i];
        }
}

/*
        This function will sort the scores from highest to
        lowest with selection sort.
*/
void sortData(string names[], int scores[], int size)
{
        int positionIndexOfMax; //keeps track of the position of largest index
        int highestScore; //where highest value is stored
        string nameHighestScore; //the name of the highest value is stored

        for(int sortingScores = 0; sortingScores < (size - 1); sortingScores++)
        {
                positionIndexOfMax = sortingScores;
                highestScore = scores[sortingScores];
                nameHighestScore = names[sortingScores];

                for(int i = sortingScores + 1; i < size; i++)
                {
                        if(scores[i] > highestScore)
                        {
                                highestScore = scores[i];
                                nameHighestScore = names[i];
                                positionIndexOfMax = i;
                        }
                }

                scores[positionIndexOfMax] = scores[sortingScores];
                scores[sortingScores] = highestScore;

                names[positionIndexOfMax] = names[sortingScores];
                names[sortingScores] = nameHighestScore;
        }
}

/*
        This function displays the data.
*/
void displayData(const string names[], const int scores[], int size)
{
        for(int count = 0; count < size; count++)
        {
                cout << names[count] << ": " << scores[count] << "\n";
        }

        cout << endl;
}
