//Project #3 Flag Image

#include <iostream>
#include <fstream>
#include <cmath> 
using namespace std;

main ()
{
    ofstream dout;
    dout.open("flag.ppm");
    
    int width, height;
    string country;
    
    
    cout << "The number of columns in the flag image (width)\n";
    cin >> height;
        
         while ((height < 100) || (height > 1000))
        {
          // Printing error message and return
          cout << "Please enter again value in [100..1000] range\n";
          cin >> height;
        }
    
    cout << "The number of rows in the flag image (height)\n";
    cin >> width;
    
          while ((width < 100) || (width > 1000))
        {
          // Printing error message and return
          cout << "Please enter again value in [100..1000] range\n";
          cin >> width;
        }
        
    cout << "The name of the country within the following list\n" << "[Indonesia, Poland, England, France, Germany]\n" ;
    cin >> country;
    
    if (country == "Indonesia")
    {
        dout << "P3\n";
        dout << "" << width << " " << height << endl;
        dout << "255\n";

         // ppm code
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (i < height/2)
                    dout << "202 16 45 ";
                else 
                    dout << "255 255 255 ";
            }
        dout << endl;
        }        
    }
    
    else if (country == "Poland")
    {
        dout << "P3\n";
        dout << "" << width << " " << height << endl;
        dout << "255\n";

     // ppm code   
     for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (i < height/2)
                    dout << "255 255 255 ";
                else 
                    dout << "222 20 59 ";
            }
        dout << endl;
        }        
    }
        
    else if (country == "France") 
    {
        // fix width
        width = 3*(width/3);
        
        dout << "P3\n";
        dout << "" << width << " " << height << endl;
        dout << "255\n";

     // ppm code
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                
                if (j < width/3)
                    dout << "0 35 146 ";
                else if (j < width*2/3)
                    dout << "255 255 255 ";
                else
                    dout << "239 41 56 ";
            }
        dout << endl;
        }
    }
        
    else if (country == "Germany") 
    {
        // fix height
        height = 3*(height/3);
 
        dout << "P3\n";
        dout << "" << width << " " << height << endl;
        dout << "255\n";

    // ppm code   
       for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (i < height/3)
                    dout << "0 0 0 ";
                else if (i < height*2/3)
                    dout << "223 0 0 ";
                else 
                    dout << "255 206 46 ";
            }
        dout << endl;
        } 
    }
        
    else if (country == "England") 
    {
        int Num = height*0.07;
        int num = width*0.07;
        int size = (height+width) /2;
        height = size;
        width = size; 
        
        dout << "P3\n";
        dout << "" << width << " " << height << endl;
        dout << "255\n";

    // ppm code   
    for (int i = 0; i < height; i++)
   {
      for (int j = 0; j < width; j++)
      {
        if ((abs(i-height/2)<=Num) || (abs(j-width/2)<=num))
            dout << "208 17 35 ";
        else
            dout << "255 255 255 ";
      }
      dout << endl;
   }
    }
        
    else {
    // error
        cout << "error\n";
    }
    
    
  
 dout.close();    
 return 0;    
    
}