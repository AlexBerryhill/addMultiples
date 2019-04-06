/*************************************************************************
* Program:                                                                 
*    Assignment 23, Loop Syntax                                            
*    Brother Ridges, CS124                                                 
* Author:                                                                  
*    Alexander Berryhill                                                   
* Summary:                                                                 
*    This program is built to add up all the multiples under 100 for a     
*    user inputted number.                                                 
*                                                                          
*                                                                          
*                                                                          
*    Estimated:  0.5 hrs                                                   
*    Actual:     0.5 hrs                                                   
*      The most difficult part was making sure I had cohesive functions    
*************************************************************************/

#include <iostream>
using namespace std;

/*************************************************************************
 * getNumber will prompt and get the number we need multiples of.          
 ************************************************************************/
int getNumber()
{
   int num;

   cout << "What multiples are we adding? ";
   cin >> num;

   return num;
}

/*************************************************************************
 * addMultiples will add the multiples of the number under 100.            
 ************************************************************************/
int addMultiples(int num)
{
   int multiple = num;
   int addedMultiples = 0;

   //While the current multiple to add is less than 100                    
   while (multiple < 100)
   {
      //add the current multiple                                           
      addedMultiples += multiple;
      //set to next multiple                                               
      multiple += num;
   }

   return addedMultiples;
}

/*************************************************************************
 * display will take the number and the added multiples then display them.
 ************************************************************************/
void display(int num, int addedMultiples)
{
   cout << "The sum of multiples of " << num << " less than 100 are: ";
   cout << addedMultiples << endl;
}

/*************************************************************************
 * main will call getNumber, then plug the int it gets into addMultiples.  
 * It will then plug both numbers into display.                            
 ************************************************************************/
int main()
{
   int num = getNumber();
   int addedMultiples = addMultiples(num);
   display(num, addedMultiples);
   return 0;
}