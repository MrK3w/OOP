
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include "Student.h"
#include "School.h"
#include "StAcc.h"
using namespace std;


int main()
{
    double grades1[5] = { 1,2,3,4,4 };
    School* school = new School(10);

    school->CreateStudent("Jiri Novotny", "NOV0073");
    cout<< school->GetStudent("NOV0073")->GetName() << endl;


}

