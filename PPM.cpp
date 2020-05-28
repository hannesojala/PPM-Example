#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main() {
    ofstream image;
    image.open("output.ppm", std::fstream::in | std::fstream::out);
    int nx = 200;
    int ny = 100;
    image << "P3\n" << nx << " " << ny << "\n255\n"; // PPM header, simple format, specifies pixel data as 3 by 255 (RGB)
    for (int j = ny - 1; j >= 0; j--) {
        for (int i = 0; i < nx; i++) {
            image << sin(3.14 * i) * 255.99 << " " << sin(3.14 * j) * 255.99 << " " << 0 << "\n"; // R G B values separated by " "
        }
    }
    return 0;
}
