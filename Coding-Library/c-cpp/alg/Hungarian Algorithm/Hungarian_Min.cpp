#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int findMin(vector<int> &arr)
{
    int min = arr[0];
    for (size_t i = 1; i < arr.size(); i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

// name-task
vector<pair<string, string>> Hungarian(vector<vector<int>> table, vector<string> &tasks, vector<string> &people)
{
    for (vector<int> &vi : table) {
        int min = findMin(vi);
        for (int &i : vi)
            i -= min;
    }
}

int main()
{
    int numTasks, numPerson;
    // task number, number of people do the task
    cin >> numTasks >> numPerson;
    // task contents
    vector<string> tasks(numTasks);
    for (string &s : tasks)
        cin >> s;
    // people's name
    vector<string> people(numPerson);
    for (string &s : people)
        cin >> s;
    // task_cost-people table
    vector<vector<int>> table(numPerson, vector<int>(numTasks));
    for (size_t i = 0; i < numPerson; i++)
        for (size_t j = 0; j < numTasks; j++)
            cin >> table[i][j];
}