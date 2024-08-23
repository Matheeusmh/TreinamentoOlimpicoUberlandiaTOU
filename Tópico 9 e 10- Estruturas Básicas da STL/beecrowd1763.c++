#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    map<string, string> linguas;
    string linguagem;

    linguas["brasil"] = "Feliz Natal!";
    linguas["alemanha"] = "Frohliche Weihnachten!";
    linguas["austria"] = "Frohe Weihnacht!";
    linguas["coreia"] = "Chuk Sung Tan!";
    linguas["espanha"] = "Feliz Navidad!";
    linguas["grecia"] = "Kala Christougena!";
    linguas["estados-unidos"] = "Merry Christmas!";
    linguas["inglaterra"] = "Merry Christmas!";
    linguas["australia"] = "Merry Christmas!";
    linguas["portugal"] = "Feliz Natal!";
    linguas["suecia"] = "God Jul!";
    linguas["turquia"] = "Mutlu Noeller";
    linguas["argentina"] = "Feliz Navidad!";
    linguas["chile"] = "Feliz Navidad!";
    linguas["mexico"] = "Feliz Navidad!";
    linguas["antardida"] = "Merry Christmas!";
    linguas["canada"] = "Merry Christmas!";
    linguas["irlanda"] = "Nollaig Shona Dhuit!";
    linguas["belgica"] = "Zalig Kerstfeest!";
    linguas["italia"] = "Buon Natale!";
    linguas["libia"] = "Buon Natale!";
    linguas["siria"] = "Milad Mubarak!";
    linguas["marrocos"] = "Milad Mubarak!";
    linguas["japao"] = "Merii Kurisumasu!";

    while(cin >> linguagem) {
        if(linguas.find(linguagem) != linguas.end()) {
            cout << linguas[linguagem] << endl;
        }
        else {
            cout << "--- NOT FOUND ---" << endl;
        }
    }

    return 0;
}
