#ifndef CURL_HANDLER_H
#define CURL_HANDLER_H
#include <memory>
#include <curl/curl.h>
#include <functional>
typedef std::unique_ptr<CURL, std::function<void(CURL *)>> curl_ptr;
class CurlHandler
{
  public:
  private:
    curl_ptr curlptr;
    constexpr static auto deleter=[](CURL*c)
    {
      curl_easy_cleanup(c);
      curl_global_cleanup();
    };

  protected:
};

#endif//CURL_HANDLER_H