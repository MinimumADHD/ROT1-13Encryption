#include "iostream"
#include "string"
#include "fstream"

using namespace std;

string EncodeRot(string ParamWord, int ParamNum)
{
    string EncodedHavoc = "";
    for (int i = 0; i<ParamWord.length(); i++)
    {
        char CharacterK = (char)ParamWord[i];
        if (CharacterK >= 'a' && CharacterK <= 'm')
            CharacterK += ParamNum;
        else if (CharacterK >= 'n' && CharacterK <= 'z')
            CharacterK -= ParamNum;
        else if (CharacterK >= 'A' && CharacterK <= 'M')
            CharacterK += ParamNum;
        else if (CharacterK >= 'N' && CharacterK <= 'Z')
            CharacterK -= ParamNum;
        EncodedHavoc += CharacterK;
    }
    return EncodedHavoc;
}

int main()
{
    string InputWord, EncodedWord;
    int RotNumber;
    cout << "Insert word to crypt in ROT.\n";
    cin >> InputWord;
    ofstream OutPutLog("EncodingResult+"+InputWord+ to_string(RotNumber)+".txt");
    while (true)
    {
        cout << "Insert ROT Num.\n";
        cin >> RotNumber;
        if (RotNumber <= 13 && RotNumber >= 1)
            break;
        else
            cout << "Number can't be larger than 13 and smaller than 1.\n";
    }
    EncodedWord = EncodeRot(InputWord, RotNumber);
    cout << "Input and Num: "+InputWord+" "+to_string(RotNumber)+"; "+EncodedWord+"\n";
    OutPutLog << "Inserted Word: "+InputWord+".\n Encoded Word: "+EncodedWord+".\n ROT Level: "+to_string(RotNumber)+"\n";
    OutPutLog.close();
    return 0;
}
