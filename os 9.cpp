/*9. The Process Launcher (Process Creation)*/

#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	STARTUPINFOA si;
	PROCESS_INFORMATION pi;
	
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	
		ZeroMemory(&pi, sizeof(pi));
		char command[]=	"cmd.exe/C echo I am the child";
		cout<<"I am the parent"<<endl;
	
	if(CreateProcessA(
	NULL,
	command,
	NULL,
	NULL,
	FALSE,
	0,
	NULL,
	NULL,
	&si,
	&pi))
	{
	
		WaitForSingleObject(pi.hProcess, INFINITE);
		
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
	
	return 0;
}