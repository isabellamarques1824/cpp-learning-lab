#pragma once
#include <map>
#include <vector>

bool letra_existe(char chute);
bool nao_acertou(std::string& palavra_secreta, const std::map<char, bool>& chutou);