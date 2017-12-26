#pragma once
#include <array>
#include <queue>

class Process {
	int a;
};

class Scheduler {

protected:
	//Wektor kolejek procesow aktywnych	(przechowuje procesy aktywne)
	std::array <std::queue<Process*>, 16> activeProcesses;
	//Wektor kolejek procesow przeterminowanych (przechowuje przeterminowane procesy)
	std::array <std::queue<Process*>, 16> terminatedProcesses;
	//Wektor bitowy (ulatwiajacy i przyspieszajacy operacje na wektorach kolejek)
	std::array <bool, 16> bitsMap;
public:
	//Dodawanie procesu do kolejki procesow (przez zarzadzanie procesami)
	void addProcess(Process *process) {

	}
	//Usuniecie procesu z kolejki procesow (przez zarzadzanie procesami)
	void deleteProcess(Process *process) {

	}
	//Obliczanie aktualnego priorytetu (kazdorazowo po zakonzceniu kwantu czasu, przez proces)
	void calculateCurrentPriority(Process *process) {

	}
	//Przydzial procesora do odpowiedniego procesu (procesor)
	void assignProcessor() {

	}

};