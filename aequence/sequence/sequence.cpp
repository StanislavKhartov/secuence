#include <iostream>

using namespace std;

int main()
{
    cout << "PLease, enter amount of sequence\n";
    int n;
    cin >> n;
    int first = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    int answer = 0;
    int current = 0;
    cout << "Please, enter members of sequence\n";
    for (int i = 0; i < n; i++)
    {
        cin >> fourth;
        current = current - first + fourth;
        answer = max(answer, current);
        first = second;
        second = third;
        third = fourth;
    }
    cout << answer;
}