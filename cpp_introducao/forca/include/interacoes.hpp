#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "arquivos.hpp"
#include "bool.hpp"
#include <string>


namespace Forca {
	void chutar(std::map<char, bool>& chutou, std::array<char, 5>& chutes_errados, int& chutes_errados_count, std::string palavra_secreta);
	std::string sortear();
	void adiciona_palavra();
}
