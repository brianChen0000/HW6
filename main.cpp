//
//  main.cpp
//  homework6
//
//  Created by Mac on 2019/3/29.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int year=0;
    cout<<"Enter a year";
    cin>>year;
    cout<<year<<" is "<<(((year % 4 == 0) && (year % 100 !=0) || (year % 400 == 0)) ?"":"not ")
    <<"a leap year."
    <<endl;
    system("pause");
    return 0;
}
