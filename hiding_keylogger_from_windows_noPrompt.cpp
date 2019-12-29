#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
    MSG Msg;
    while (GetMessage (&Msg, NULL, 0, 0)) //
    {
        TranslateMessage(&Msg); //Take a message from our program that is intended for a certain window for any window within windows.
                                //Then it will modify that particular message with the msg, and command is passed through that particular window.
        DispatchMessage(&Msg);  //Fowards aprticular msg to system

        //essentially this runs as a console application just without popping up as a window.
        //Thus hiding the keylogger window in windows
    }

    return 0;
}
