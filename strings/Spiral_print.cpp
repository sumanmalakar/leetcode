#include<iostream> 
using namespace std; 
void Spiral_print(int arr[][10], int m, int n){
  int startRow = 0;
  int endRow = n-1;
  int startColumn = 0;
  int endColumn = m-1;

  while(startColumn <= endColumn && startRow <= endRow){
    
    // startRow
    for(int i = startColumn; i<=endColumn; i++){
      cout<<arr[startRow][i]<<" ";
    }

    //endColumn
    for(int i=startRow+1; i<=endRow; i++){
      cout<<arr[i][endColumn]<<" ";
    }

    //endRow
    for(int i=endColumn - 1; i>=startColumn; i--){
      cout<<arr[endRow][i]<<" ";
    }

    // startColumn
    for(int i= endRow -1; i>= startRow+1; i--){
      cout<<arr[i][startColumn]<<" ";
    }
   
   startColumn++;
    startRow++;
     endColumn--;
      endRow--;


  }
}

 int main(){

   int arr[][10] = {{1, 2, 3, 4},
                    {12, 13, 14, 5},
                    {11, 16, 15, 6},
                    {10, 9, 8, 7}};

        int n = 4, m = 4;
        Spiral_print(arr, n, m);            

   return 0;
}