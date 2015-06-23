#include <windows.h>

void foo(void)
{
	//prints to debug console.
	OutputDebugStringA("Don't panic. Its just a test\n");  //A stands for ascii 
}

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow
{
	food();
}
