#include "scraper.h"
#include <iostream>

int main() {
    Scraper scraper;

    std::string url = "http://example.com";
    std::string content = scraper.fetch(url);

    std::cout << "Fetched content:" << std::endl;
    std::cout << content << std::endl;

    return 0;
}
