//Chart.cpp
//Perez, Eric
//eperez8

#include<iostream>
using namespace std;

int find_largest(int values[], int size) //Finds the largest integer in an array of integers.
{
        
        int largest = 0;
        int i;
        
        while(size >= 0){
                
                
                if (largest < values[i])
                {       
                        
                        largest = values[i];
                
                }
                
                else
                
                {       
                        return largest;
                
                }
                
                i=i+1;
        
        }
        
        return largest;

}


int main()

{       
        const int max = 100;  // Array of 100 integers max.
        int array[max];
        int n=0;
        int input;
        
        do{     
                cin>> input;
                array[n] = input;


n = n+1; 
                
        }       
     //Do While function.
 while(n < 100 && input > 0);/*Program ends if user input is over 100 integers 
                             or user input is 0 program will stop reading standard input and print the chart.*/
        int largest = find_largest(array, n);
        cout<< largest <<endl;
        
        for(int height=largest; height >= 1; height--)
            {
            
            
    /*reads set of integers from standard input and draws a bar chart to standard
output using asterisks and spaces ‘*’ and " ".*/

            for(int width=0; width <= n ; width++)
               {
               if(array[width] >= height)
               {
               
               cout << "*";
               
               }
               
               else
               {
               cout << " ";
               
               }
         }     
         
         


                cout << endl;
        }       
        
        
        return 0;
}       
