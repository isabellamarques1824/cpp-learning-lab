#include "bool.hpp"

namespace Forca {
    bool letra_existe(char chute, std::string palavra_secreta) {

        for (char letra : palavra_secreta)
        {
            if (chute == letra) {
                return true;

            }
        }

        return false;

    }

    bool nao_acertou(std::string& palavra_secreta, const std::map<char, bool>& chutou) {
        for (char letra : palavra_secreta) {
            if (chutou.find(letra) == chutou.end() || !chutou.at(letra)) {
                return true;
            }
        }
        return false;
    }
}
