#ifndef BITCOIN_H
#define BITCOIN_H
#include <iostream>
#include <string>
#include <cstdio>
#include "curlHandler.h"

class BitCoin
{
public:
    void fetch();
    BitCoin();
private:
    constexpr static const char*const URL="https://blockchain.info/ticker";
    CurlHandler curlHandle;
protected:
};
#endif // BITCOIN_H