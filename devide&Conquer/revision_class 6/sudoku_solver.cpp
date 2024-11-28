#include<iostream>
using namespace std;
  bool isSafe(int row,int col , int value , int n , int sudoku[][9])
   { 

      for(int i =0; i<n; i++)
      {
 
      // checked  row 
        if(sudoku[row][i] == value) return false;
      // checked col
        if(sudoku[i][col] == value) return false;
      // checked 3 * 3 box
         if(sudoku[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == value) return false;
      }
      return true;
   }
 bool solver(int sudoku[][9], int n )
 {  
    for(int i = 0; i<n; i++)
    {
         for(int j = 0; j<n; j++)
          { 
             // check empty cell 
              if(sudoku[i][j] == 0)
               {  
                  // 1 se 9 fill value in current cell
                    for(int value =1; value<=9; value++)
                      {  
                          if(isSafe(i,j,value,n,sudoku))
                          {
                              // insert 
                                sudoku[i][j] = value;
                                bool remainingSolution = solver(sudoku,n);
                                   if(remainingSolution == true)
                                    {  
                                      return true;
                                    }
                                    else 
                                      { 
                                          // backtracking 
                                          sudoku[i][j] = 0;
                                      }  
                          }
                      }
                      // if 1 se 9 tak value fill kiya koi solution nahi mila 
                      // iska mtlb current cell ke pichhe wale kuchh galti h 
                      // return by false
                      return false;
               }
          }
    }
 }
int main()
{
   int sudoku[9][9] = { 
             {0,4,0,0,0,7,6,0,0},
             {8,0,6,0,4,0,0,3,0},
             {0,2,7,0,0,0,0,0,8},
             {0,0,0,4,8,0,0,0,3},
             {0,9,0,7,0,6,0,4,0},
             {2,0,0,0,1,3,0,0,0},
             {4,0,0,0,0,0,8,1,0},
             {0,5,0,0,3,0,2,0,4},
             {0,0,1,5,0,0,0,6,0}
                              };

 int n= 9;
  bool ans = solver(sudoku,n);

if(ans)
{


   for(int i =0 ; i<n;i++)
    {
       for(int j =0;j<n;j++)
        {
           cout<<sudoku[i][j]<<" ";
        }
         cout<<endl;
            
    }    
}               
 return 0;
}


