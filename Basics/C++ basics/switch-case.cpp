#include <cmath>

double areaSwitchCase(int ch, vector<double> a) {
	double pi = M_PI;
	switch (ch) {
		case 1:
			return M_PI * a[0] * a[0];
			break;
		case 2:
			return a[0] * a[1];
			break;
	}
}
