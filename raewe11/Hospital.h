#pragma once
#include <map>
#include <string>
#include <iostream>
class Hospital
{
public:
	Hospital();

	void addPatient(const std::string& name);
	void removePatient(int key);
	void printAllPatients();
private:
	std::map<int, std::string> _patients;
	int _idCounter;
};

