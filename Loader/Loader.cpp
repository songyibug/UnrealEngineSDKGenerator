// Loader.cpp : Defines the entry point for the console application.
//

#include "InjectDll.h"

int main()
{
	system("\"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\FortniteClient-Win64-Shipping.exe\"");
	while (!Process::IsRunning("FortniteClient-Win64-Shipping.exe"));
	Sleep(20000);

	system("sc.exe stop BEService");
	Sleep(20000);

	InjectDll::Inject("FortniteClient-Win64-Shipping.exe", "Fortnite.dll");

    return 0;
}