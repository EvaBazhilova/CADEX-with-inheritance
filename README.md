## CADEX-with-inheritance
Support implementation of 3D curves hierarchy

# Small program in C++ that would implement support of 3D curves hierarchy.

1. Support a few types of 3D geometric curves – circles, ellipses and 3D helixes.
2. Each curve should be able to return a 3D point and a first derivative (3D
vector) per parameter t along the curve.
3. Populate a container (vector) of objects of these types created in random manner with
random parameters.
4. Print coordinates of points and derivatives of all curves in the container at t=PI/4.
5. Populate a second container that would contain only circles from the first container. Make sure the
second container shares (i.e. not clones) circles of the first one.
6. Sort the second container in the ascending order of circles’ radii. That is, the first element has the
smallest radius, the last - the greatest.
7. Compute the total sum of radii of all curves in the second container.

# Requirements to the implementation:
1. The implementation must use virtual methods.
2. Has neither explicit memory deallocation nor memory leaks.
3. Curves must be physically correct (e.g. radii must be positive).
4. Containers and sorting must be implemented using STL (C++ Standard Template Library).
5. The implementation may use constructs of C++11 or higher.
6. The code must compile with any compiler of your choice (gcc, Visual C++, etc).

# Short description of attached files:
 *biblio* (biblio.h, biblio.cpp) is the library to support 3D curves hierarchy with virtual methods\
*test* (test.h, test.cpp) consists of some tests to check biblio library\
*output.txt* is the result of main.cpp. It contains
- Information (type and parameters) about all created curves from the first container, 
- Points and first derivative of all curves from the first container at t = PI/4
(x1, y1, z1) - coordinates of 3D point t = PI/4 and (x2, y2, z2) - coordinates of 3D vector of first derivative at t = PI/4
- Info about only circles from the first container (included in the second container, not sorted)
- Info about circles from the sorted second container
- Total sum of circles raduii

*out.txt* consists of all 3D Points of all curves. It is made for drawing these curves.\
*figs_final.jpg* - picture of all curves of example.\

