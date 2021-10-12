#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int age;
    char first_name[50],last_name[50];
    int standard;
}st;

int main() {
   
    
    cin>>st.age >> st.first_name >> st.last_name >> st.standard;
    cout<< st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
