#include "../include/curlHandler.h"
CurlHandler::CurlHandler() : curlptr(curl_easy_init(), deleter)
{

    curl_global_init(CURL_GLOBAL_ALL);
};

void CurlHandler::setUrl(const std::string &url)
{
    curl_easy_setopt(this->curlptr.get(), CURLOPT_URL, url.c_str());
};

CURLcode CurlHandler::fetch() const
{
    return curl_easy_perform(this->curlptr.get());
};
