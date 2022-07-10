#include"../include/bitcoin.h"
void BitCoin::fetch()
{
    this->curlHandle.fetch();
};

BitCoin::BitCoin():curlHandle({})
{
    this->curlHandle.setUrl(this->URL);
};

