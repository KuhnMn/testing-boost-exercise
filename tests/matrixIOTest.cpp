#define BOOST_TEST_MODULE SideMadeTests
#define BOOST_TEST_DYN_LINK
#include <Eigen/Dense>
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

using namespace Eigen;

BOOST_AUTO_TEST_SUITE(matrixIOTests, *boost::unit_test::tolerance(1e-12))

BOOST_AUTO_TEST_CASE(openData)
{
    MatrixXd matrix(3, 3) = matrixIO::openData("m3.csv")

    MatrixXd expectedMatrix(3, 3);
    A << 0.680375, 0.59688, -0.329554,
        -0.211234, 0.823295, 0.536459,
        0.566198, -0.604897, -0.444451;

    BOOST_TEST(matrix(0, 0) == expectedX(0));
    BOOST_TEST(x(1) == expectedX(1));
    BOOST_TEST(x(2) == expectedX(2));
}


BOOST_AUTO_TEST_SUITE_END()
