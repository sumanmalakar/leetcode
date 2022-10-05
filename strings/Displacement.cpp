#include <iostream>

using namespace std;

int main()
{

  // char path[] = "SNNNEWE";
  char path[1000];
  cin.getline(path, 1000);

  int i = 0;
  int x = 0;
  int y = 0;
  while (path[i] != '\0')
  { 
    char h = path[i];
    switch (h)
    {
    case 'S':
      y--;
      break;
    case 'N':
      y++;
      break;
    case 'E':
      x++;
      break;
    case 'W':
      x--;
      break;
    }
    i++;
  }
    cout << "x = " << x << " y = " << y<<endl;
    
    // first quadreant
    if(x>=0 && y>=0){
      while(y--){
        cout<<"N";
      }
      while(x--){
        cout<<"E";
      }
    }

      // //second quadrent
      // if(x<0 && y>=0){
      //   while(y--){
      //     cout<<"N";
      //   }
      //   while(x++){
      //     cout<<"W";
      //   }
      // }

      // // third quadrent
      // if(x<0 && y<0){
      //   while(y++){
      //     cout<<"S";
      //   }
      //   while(x++){
      //     cout<<"W";
      //   }
      // }

      // // fourth quadrent
      // if(x>=0 && y<0){
      //   while(y++){
      //     cout<<"S";
      //   }
      //   while(x--){
      //     cout<<"E";
      //   }
      // }

    





  }
  