/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/*#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}*/
 #include<iostream>
int main()
{
  double salary, netSalary;
   int etype, otHrs;
  
  std::cout<< "Enter Employee Type : ";
  std::cin>>etype ;
  std::cout<< "Enter Salary  : ";
  std::cin >> salary;
  std::cout<< "Enter OtHrs : ";
  std::cin>>otHrs;

  if(etype == 1)
  {
    netSalary = salary + otHrs * 1000.0;
  }  
  else if(etype == 2)
  {
    netSalary = salary + otHrs * 1500.0;
  }
  else if(etype ==3)
  {
    netSalary = salary + otHrs * 1700.0;
  }
  else{
    netSalary = salary + otHrs* 0.0;
  }
  std::cout<<"Net Salary is "<<netSalary;
  return 0;
  
}
