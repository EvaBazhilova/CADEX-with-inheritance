#include <cassert>
#include <iostream>

#include "biblio.h"
#include "test.h"

void CheckNegative()
{
    bool success;
    try
    {
        Circle circle(-2);
        success = true;
    }
    catch (std::logic_error &err)
    {
        success = false;
    }
    assert(success == false);

    try
    {
        Circle circle;
        circle.SetRadius(-100);
        success = true;
    }
    catch (std::logic_error &err)
    {
        success = false;
    }
    assert(success == false);

    try
    {
        Ellipse ellipse(-2, -3);
        success = true;
    }
    catch (std::logic_error &err)
    {
        success = false;
    }
    assert(success == false);

    try
    {
        Ellipse ellipse;
        ellipse.SetParameters(-100, 2);
        success = true;
    }
    catch (std::logic_error &err)
    {
        success = false;
    }
    assert(success == false);

    try
    {
        Helix helix(-2, -3);
        success = true;
    }
    catch (std::logic_error &err)
    {
        success = false;
    }
    assert(success == false);

    try
    {
        Helix helix;
        helix.SetParameters(0, -20);
        success = true;
    }
    catch (std::logic_error &err)
    {
        success = false;
    }
    assert(success == false);

    std::cout << "OK!" << std::endl;
}

void PrintingCircleTest(std::ofstream &out)
{
    Circle circle(2);
    Circle circle_1;
    Circle circle_2;

    circle.Print(out);
    circle_1.SetRadius(3).Print(out);
    circle_2.Print(out);
}

void PrintingEllipseTest(std::ofstream &out)
{
    Ellipse ellpise(3, 4);
    Ellipse ellpise_1;
    Ellipse ellpise_2;

    ellpise.Print(out);
    ellpise_1.SetParameters(5, 1).Print(out);
    ellpise_2.Print(out);
}

void PrintingHelixTest(std::ofstream &out)
{
    Helix helix(2, 2);
    Helix helix_1;
    Helix helix_2;

    helix.Print(out);
    helix_1.SetParameters(5, 1).Print(out);
    helix_2.Print(out);
}