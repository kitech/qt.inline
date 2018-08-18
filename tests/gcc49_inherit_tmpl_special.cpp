#include <QtCore>

// android g++ 4.9: error: invalid use of incomplete type
class foo : public QIntegerForSize<16> {};

