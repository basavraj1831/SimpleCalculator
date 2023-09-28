#include <iostream>
using namespace std;

int main()
{ 
  int op,x;
  float num1, num2;
  
 do
  {
   cout << "ALL THE OPERATION AS FOLLOWS: ";
   cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\n";
   cout << "Enter The Operation: ";
   cin >> op;

   cout << "Enter The First operand: ";
   cin >> num1;
  
   cout << "Enter The Second Operand: ";
   cin >> num2;

   switch(op) 
    {
       case 1:
              cout << "\nAddition = " << num1 + num2;
              break;

       case 2:
              cout << "\nSubstraction = "<< num1 - num2;
              break;

       case 3:
              cout << "\nMultiplication = "<< num1 * num2;
              break;
 
       case 4:
              cout << "\nDivision = " << num1 / num2;
              break;

       default:
               cout << "\nError!! You Choose Wrong Operation";
               break;
     }
   
   cout << "\n\nDo You Want To Continue[Y==1||N==0]: ";
   cin >> x;
    
}
   while(x==1);

  return 0;
}