#include <iostream>
#include <Windows.h>
using namespace std;

void menu()
{

		system("Color c");
	cout << "Turnt Clicker by Jordan\n\n\n";
	cout << "Turnt Clicker v1.0\n\n\n";
	cout << "USING THIS ON SERVERS MAY RESULT IN A BAN. USE AT YOUR OWN RISK!\n\n";
	cout << "Left Click -> Press 'X' to enable and 'Z' to disable Left Click Auto Click.\n\n";
	cout << "Right Click -> Press 'V' to enable and 'C' to disable Right Click Auto Click.\n\n";
}

void clicker()
{
	bool click = false; //sets left click to false
	bool Rclick = false; // sets right click to false

	while (true)
	{
		//Left Click
		if (GetAsyncKeyState('X')) //toggle on (lmb)
		{
			system("Color 0a");
			cout << "LMB Clicker: ON\n\n";
			click = true; 
			Sleep(500);
		}
		else if (GetAsyncKeyState('Z')) //toggle off (lmb)
		{
			system("Color 0c");
			cout << "LMB Clicker: OFF\n\n";
			click = false;
			Sleep(500);
		}
		if (click == true) 
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(50); //Adujst Speed | (Warning settings this value below 1 WILL cause come crashes. Try at your own risk. THE LOWER THE VALUE THE FASTER)
		}
		//Right Click
				if (GetAsyncKeyState('V')) //toggle on (rmb)
		{
			system("Color 0a");
			cout << "RMB Clicker: ON\n\n";
			Sleep(500);
			Rclick = true; 
		}
		else if (GetAsyncKeyState('C')) //toggle off (rmb)
		{
			system("Color 0c");
			cout << "RMB Clicker: OFF\n\n";
			Sleep(500);
			Rclick = false;
		}
		if (Rclick == true)
		{
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			Sleep(1); //Adjust Speed | (Warning settings this value below 1 WILL cause come crashes. Try at your own risk. THE LOWER THE VALUE THE FASTER)
		}
		
	}
}		

int main()
{
	menu();
	clicker();

	return 0;
}
