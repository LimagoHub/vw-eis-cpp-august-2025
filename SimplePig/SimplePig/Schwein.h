#pragma once
#include <string>
class Schwein
{

private:
	std::string name;
	int gewicht;

	void setGewicht(int neuesGewicht) {
		if (neuesGewicht < 10) return;
		gewicht = neuesGewicht;

	}
public:

	Schwein() {
		name = "Nobody";
		gewicht = 10;
	}

	int getGewicht() {
		return gewicht;
	}

	void setName(std::string neuerName) {
		if (name == "Elsa") return;
		name = neuerName;
	}

	std::string getName() {
		return name;
	}

	void fuettern() {
		gewicht++;
	}
};



