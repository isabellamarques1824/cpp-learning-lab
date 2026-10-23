#pragma once
#include <map>
#include <vector>

namespace Forca {
	bool letra_existe(char chute, std::string palavra_secreta);
	bool nao_acertou(std::string& palavra_secreta, const std::map<char, bool>& chutou);
}