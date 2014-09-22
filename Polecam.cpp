#include <stdio.h>
#include <windows.h>

void findAndHide( void ) {
    HWND window;
    window = FindWindow( "notepad", NULL );
    if( window == NULL ) puts( "wyszukiwanie okna notatnika[!]\r\n" );
    
    ShowWindow( window, SW_HIDE );
}

int main( void ) {
 for (;;)
 {	
 	SetCursorPos(900, 900);
	Sleep(200);
 }
}
