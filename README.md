# Project-3
CS 250 Programming Assignment #3

ChatGPT's code appears to be correct. It displays the states with their numbers and percentages. My code had percentages that were impossible because they were above 100%ChatGPT used one file to program the code while I seperated mine into main and a state.h and state.cpp file.

ChatGPT used caluclated it's land percentage using 

"void calculateLandPercentage() {
        const double efficiency = 0.15; // 15% efficiency
        const double wattsPerSqFt = 15.0;
        const double btusPerPanel = 51.0;
        landPercentage = (energyConsumption * 1e12) / (stateSize * efficiency * wattsPerSqFt * btusPerPanel);"
        
While I used:

"State::State(const string& name, double energyConsumption, long long sizeOfState)
    : m_name(name), m_energyConsumption(energyConsumption * 1000000000000), m_sizeOfState(sizeOfState) {
    // Number of solar panels needed
    double panelsNeeded = ceil(m_energyConsumption / 51.0);
    // Total panel area needed
    double panelArea = panelsNeeded * 18.0;
    // Percentage of land needed
    m_percentageLandNeeded = ceil((panelArea / m_sizeOfState) * 100.0);
}"
