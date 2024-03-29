#include <stdio.h>
#include <iostream>
#include <cctype>
#include "AlphaCipher.h"
#include <locale>
using namespace std;
 voidcheck(const wstring& Text, const int & key)
{
 wstring s=Text;
    try {
 AlphaCipher skey(key);
 wcout<<skey.CoderAlphaCipher(key, s)<<endl;
 wstring g=skey.CoderAlphaCipher(key, s);
 wcout<<skey.DecoderAlphaCipher(key,g)<<endl;
 } catch (const cipher_error & e) {
 cerr<<"Error: "<<e.what()<<endl;
    }
}
int main()
{
 locale loc("ru_RU.UTF-8");
    locale::global(loc);
    check(L"PRograMmiroVANie",8);
    check(L"PRograMmiroVANie",10);
    check(L"LDFHFEUFHWBCD",5);
    return 0;
}
