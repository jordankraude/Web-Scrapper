#ifndef SCRAPER_H
#define SCRAPER_H

#include <string>

class Scraper {
public:
    Scraper();
    ~Scraper();

    std::string fetch(const std::string& url);

private:
    // Add private members if needed
};

#endif // SCRAPER_H
