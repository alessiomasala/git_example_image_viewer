#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channel(3), depth(8){
    buffer = new char[width * height * 3];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if ((fileExt == "jpg") || (fileExt == "png")) {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

bool BitmapImage::resize(int width, int height) {
    // resize buffer
    return true;
}

bool BitmapImage::save(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // compress buffer into image file
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
