#ifndef SCRAPER_H
#define SCRAPER_H

#include <string>

class Scraper {
public:
    Scraper(const std::string& url);
    void scrape();

private:
    std::string url;
};

#endif // SCRAPER_H
