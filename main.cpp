#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <memory>


#include "biblio.h"
#include "test.h"

void GenerateRandomCurves(Curves &curves)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    int curves_count = rand() % (20);
    for (int i = 0; i < curves_count; ++i)
    {
        int curve = rand() % (3);
        switch (curve)
        {
        case 0:
        {
            double r = (double)rand() / RAND_MAX * (100);
            curves.AddCurve(std::make_shared<Circle>(r));
            break;
        }
        case 1:
        {
            double a = (double)rand() / RAND_MAX * (100);
            double b = (double)rand() / RAND_MAX * (100);
            curves.AddCurve(std::make_shared<Ellipse>(a, b));
            break;
        }
        case 2:
        {
            double r = (double)rand() / RAND_MAX * (100);
            double h = (double)rand() / RAND_MAX * (100);
            curves.AddCurve(std::make_shared<Helix>(r, h));
            break;
        }
        default:
            break;
        }
    }
}

int main()
{

    CheckNegative();

    std::ofstream out;
    out.open("output.txt");

    // PrintingCircleTest(out);
    // PrintingEllipseTest(out);
    // PrintingHelixTest(out);

    Curves curves;
    GenerateRandomCurves(curves);

    out << "    Info about all curves" << std::endl;
    curves.PrintCurves(out);
    out << "    Points and first derivative of all curves at t = PI/4" << std::endl;
    curves.PrintPointsAndDerivative(out);

    curves.CollectOnlyCircles();
    out << "    Info about only circles" << std::endl;
    curves.PrintCircles(out);

    out << "    Info about sorted circles" << std::endl;
    curves.SortCircles().PrintCircles(out);

    out << "    Total sum of circles raduii " << curves.ComputeTotalRadiusSum() << std::endl;
    out.close();
}