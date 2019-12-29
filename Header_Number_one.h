#ifndef HELPER_H
#define HELPER_H

/////INCLUDE STATEMENTS////////
#include <ctime> //Used to retrieve time and used to re-enter into our program in terms of mail sending triggers.
#include <string> //will be used to convert various types into string. this is because we will use strings to fill out our Logs files.
#include <sstream> //Will be the actual guard used to convert keyboard input into string


namespace Helper // our own namespace created in order to group various functions, types, etc.
{

    template <class T>  //creation of a template. This will be used to create functions that will accept generic types

    std::string ToString(const T &);    //This is a prototype of a function. but below we will formulate the body of the function
   
    struct DateTime //This is Helper Struct used in order to represent Date and Time. Everything in a Struct is by default Public.
    {
        DateTime    
        //Constructor for Helper Struct. 
        //It does not take a parameter, and it creates an object of DateTime type with current System Time and Date. In other words this is 
        //a local time in the machine on which the keylogger is running, i.e the victems computer.
        {
            time_t ms; 
            //time_t is a type which represents time which is located in Ctime library
            //ms is just a variable
            
            time (&ms);
            //this is a function from Ctime library. here wew are passing the address of the ms variable, used to prevent copying from occuring

            struct tm *info = localtime(&ms);   
            //*info is a pointer
            // the variable info is a pointer to struct tm, which is also a type of Ctime library.
            // Pointers are variable that contain the address, so the memory address in the computers Ram of another variable.
            //localtime will recieve a variable and then the address and then it will do something with it and return a value.
            //we will use that value, and state that this pointer will point to that particular value 
            
            
            /////////////////////////
            //we will use the *info pointer to indirectly access the attribute tm_mday from the struct tm
            //D and other variables are simply the attributes of this particular struct from DateTime.
            
            D = info->tm_mday; 
            m = info->tm_mon + 1;  //it starts from 0, so we have to add 1 so January does not start from 0
            y = 1900 + info-> tm_year;  // It starts from 1900 because C/C++ started in the 1900's
            /////////////////////////
            M = info->tm_min;
            H = info->tm_hour;
            S = info->tm_sec;
            //////////////////////////
        }
    };

}


#endif // HELPER_H
