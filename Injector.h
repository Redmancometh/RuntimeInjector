#pragma once
#include <iostream>
#include <stdio.h> 
#include <windows.h> 
using namespace std;
//TODO: Probably change the string dllDir to a higher level dir object

class Injector {
public:
	Injector(string processName, string dllDir);
	void injectInto();
protected: 
	DWORD threadFromProcName();
private: string processName, dllDir;
};
