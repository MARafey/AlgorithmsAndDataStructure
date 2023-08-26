#include <iostream>
#include <string>
#include <queue>
using namespace std;

template <typename T>
void sort_queue_on_priority(queue<pair<T, int>> &q) // sort the queue on the basis of priority
{

    int n = q.size(); // n is the size of the queue
    for (int i = 0; i < n; i++)
    {
        pair<T, int> temp = q.front(); // temp is the front element of the queue
        q.pop();
        for (int j = 0; j < n - i - 1; j++)
        {
            pair<T, int> temp2 = q.front(); // temp2 is the front element of the queue
            q.pop();
            if (temp.second > temp2.second) // if the priority of temp is greater than temp2 then swap
            {
                q.push(temp);
                temp = temp2;
            }
            else // else push temp2
            {
                q.push(temp2);
            }
        }
        q.push(temp); // push temp to the queue
    }
}

template <typename T>
void display_queue(queue<pair<T, int>> q)
{
    while (!q.empty())
    {
        cout << q.front().first << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<pair<string, int>> q;
    int count = 0;
    cout << "Enter the number of Texts: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        string text;
        cout << "Enter the text: ";
        getline(cin, text);
        int priotiy = 0;
        cout << "Enter the priority: ";
        cin >> priotiy;

        q.push(make_pair(text, priotiy));
    }

    cout << "Before Sorting: ";
    display_queue(q);

    sort_queue_on_priority(q);

    cout << "After Sorting: ";
    display_queue(q);
}
