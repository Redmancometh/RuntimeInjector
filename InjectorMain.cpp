#pragma once
#include <iostream>
#include "stdio.h"
#include "pch.h"
#include "Injector.h"

int main() {
	Injector injector("SpaceEngineersDedicated.exe", "C:\\Users\\Redmancometh\\MCC\\webdrivers\\testDLL.dll");
	injector.injectInto();
	return 0;
}