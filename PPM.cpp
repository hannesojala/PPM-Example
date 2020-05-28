#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Output file
    ofstream image;
    image.open("output.ppm", std::fstream::out);
    int nx = 256;
    int ny = 256;
    
    // Header
    image << "P3\n" << nx << " " << ny << "\n255\n";
    
    // Pixels 
    for (int j = ny - 1; j >= 0; j--) {
        for (int i = 0; i < nx; i++) {
            image << i << " " << j << " " << 0 << "\n";
        }
    }

    return 0;
}
