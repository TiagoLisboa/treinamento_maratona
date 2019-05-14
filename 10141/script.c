#include <iostream>
#include <string>

using namespace std;

int main () {
    int n, p, rfp = 0;

    while ((cin >> n >> p) && (n && p)) {
        if (rfp) cout << endl;
        float best_prop_compliance = 0; int best_prop_number;
        string best_prop_name;
        float best_prop_val = 0;
        string requirements;

        cin >> ws;
        for (int i = 0; i < n; i++) {
            getline(cin, requirements);
        }
        for (int i = 0; i < p; i++) {
            string proposal;
            float d, compliance; int r;
            getline(cin, proposal);
            cin >> d >> r;
            cin >> ws;
            string met_requirements;
            for (int j = 0; j < r; j++) {
                getline(cin, met_requirements);
            }
            compliance = (float)r/(float)n;
            if (compliance > best_prop_compliance) {
                best_prop_compliance = compliance;
                best_prop_name = proposal;
                best_prop_val = d;
                best_prop_number = i;
            } else if (compliance == best_prop_compliance && d < best_prop_val) {
                best_prop_compliance = compliance;
                best_prop_name = proposal;
                best_prop_val = d;
                best_prop_number = i;
            }
        }
        cout << "RFP #" << ++rfp << endl << best_prop_name << endl;
    }

    return 0;
}
