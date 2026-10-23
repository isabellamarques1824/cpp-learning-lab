#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


namespace Forca {
	void salva_arquivo(std::vector<std::string> nova_lista);
	std::vector<std::string> le_arquivo();
	bool nao_enforcou();
}