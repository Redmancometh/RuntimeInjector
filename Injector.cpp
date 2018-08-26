#pragma once 
#include "pch.h"
#include <iostream>
#include "Injector.h"
using namespace std;

void Injector::injectInto()
{
	cout << "Inject into!";
}

DWORD Injector::threadFromProcName()
{
	return 0;
}

Injector::Injector(string procName, string path)
{
	this->processName = procName;
	this->dllDir = path;
}
