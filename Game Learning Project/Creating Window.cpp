

#include<iostream>
#include <Windows.h>

int CALLBACK WinMain
(
	 HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow
)

{

	MessageBox(0, (LPCWSTR)L"This is some learning", (LPCWSTR)L"Gamers",
		MB_OKCANCEL | MB_ICONINFORMATION);
	return 0;

}

