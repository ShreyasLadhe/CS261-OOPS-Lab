#include <iostream>

using namespace std;

class TemperatureConverter {
public:
    static int convertToCelsius(int temp, char scale) {
        if (scale == 'F' || scale == 'f') {
            return (temp - 32.0) * 5.0 / 9.0;
        } else if (scale == 'K' || scale == 'k') {
            return temp - 273.15;
        } else {
            return temp;
        }
    }

    static int convertToFahrenheit(int temp, char scale) {
        if (scale == 'C' || scale == 'c') {
            return (temp * 9.0 / 5.0) + 32.0;
        } else if (scale == 'K' || scale == 'k') {
            return (temp - 273.15) * 9.0 / 5.0 + 32.0;
        } else {
            return temp;
        }
    }
};

int main() {
    char iniScale, finScale;
    int temp;

    cout << "Enter temp: ";
    cin >> temp;
    cout << "Enter the source temp scale (C/F/K): ";
    cin >> iniScale;
    cout << "Enter the target temp scale (C/F/K): ";
    cin >> finScale;

    int convTemp;

    if (iniScale == finScale) {
        convTemp = temp;
    } else if ((iniScale == 'C' || iniScale == 'c') && (finScale == 'F' || finScale == 'f')) {
        convTemp = TemperatureConverter::convertToFahrenheit(temp, iniScale);
    } else if ((iniScale == 'F' || iniScale == 'f') && (finScale == 'C' || finScale == 'c')) {
        convTemp = TemperatureConverter::convertToCelsius(temp, iniScale);
    } else {
        cout << "Invalid conversion." << endl;
        return 1;
    }

    cout << "Converted temp: " << convTemp << " " << finScale << endl;

    return 0;
}
