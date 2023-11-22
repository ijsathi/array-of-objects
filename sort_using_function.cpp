#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool compare(Student a, Student b)
{
    /* if (a.marks > b.marks)
    {
        return true;
    }
    else if (a.marks < b.marks)
    {
        return false;
    }
    else
    {
        if (a.roll < b.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    } */
    // shortcut
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks > b.marks;
    }
}
int main()
{
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    return 0;
}