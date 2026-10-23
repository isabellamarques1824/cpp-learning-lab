#pragma once
#include <iostream>
#include <map>
#include <vector>

namespace Forca {
	void imprimir_chutes_errados(const std::array<char, 5>& chutes_errados);
	void imprimir_palavra_secreta(const std::string& palavra_secreta, const std::map<char, bool>& chutou);
}