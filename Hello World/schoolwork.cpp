#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 14;        // Number of elements
    double letterWeights[NUM_ELEMENTS]; // Weights in ounces
    int postageCosts[NUM_ELEMENTS];     // Costs in cents (usps.com 2013)
    double userLetterWeight = 0.0;      // Letter weight
    bool foundWeight = false;           // Found weight specified by user
    int i = 0;                          // Loop index


    // Populate letter weight/postage cost arrays
    letterWeights[i] = 1;    postageCosts[i] = 46; ++i;
    letterWeights[i] = 2;    postageCosts[i] = 66; ++i;
    letterWeights[i] = 3;    postageCosts[i] = 86; ++i;
    letterWeights[i] = 3.5;  postageCosts[i] = 106; ++i;
    letterWeights[i] = 4;    postageCosts[i] = 152; ++i;
    letterWeights[i] = 5;    postageCosts[i] = 172; ++i;
    letterWeights[i] = 6;    postageCosts[i] = 192; ++i;
    letterWeights[i] = 7;    postageCosts[i] = 212; ++i;
    letterWeights[i] = 8;    postageCosts[i] = 232; ++i;
    letterWeights[i] = 9;    postageCosts[i] = 252; ++i;
    letterWeights[i] = 10;   postageCosts[i] = 272; ++i;
    letterWeights[i] = 11;   postageCosts[i] = 292; ++i;
    letterWeights[i] = 12;   postageCosts[i] = 312; ++i;
    letterWeights[i] = 13;   postageCosts[i] = 332; ++i;

    // Prompt user to enter letter weight
    cout << "Enter letter weight (in ounces): ";
    cin >> userLetterWeight;

    // Postage costs is based on smallest letter weight greater than
    // or equal to mailing letter weight
    foundWeight = false;

    for (i = 0; (i < NUM_ELEMENTS) && (!foundWeight); ++i) {
        if (userLetterWeight <= letterWeights[i]) {
            foundWeight = true;
            cout << "Postage for USPS first class mail is ";
            cout << postageCosts[i] << " cents" << endl;
        }
    }

    if (!foundWeight) {
        cout << "Letter is too heavy for USPS first class mail." << endl;
    }

    return 0;
}