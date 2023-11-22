#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        // getchar(); // or
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }
    /* Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks < mn.marks)
        {
            mn = arr[i];
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl; */
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if ( mx.marks <arr[i].marks)
        {
            mx = arr[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
    return 0;
}