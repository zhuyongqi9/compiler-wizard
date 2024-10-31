#include <iostream>
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"

enum CompilerType{
    JAVA,
    PYTHON,
    CPP,
};

class DownloadTask {
    DownloadTask() {
        
    }
    
    void start() {
        
    }
    
private:
    std::string url;
    std::string type;
    std::string name;
};

int main() {
    httplib::Client client("https://www.google.com");
    auto res = client.Get("/");
    std::cout << res->status << std::endl;
}