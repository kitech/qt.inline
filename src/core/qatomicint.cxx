//  header block begin
// /usr/include/qt/QtCore/qatomic.h
#include <qatomic.h>
#include <QtCore>

// QAtomicInt is pure virtual: false
//  header block end

//  main block begin

class MyQAtomicInt : public QAtomicInt {
public:
MyQAtomicInt(int value) : QAtomicInt(value) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qatomic.h:162
// [-2] void QAtomicInt(int)
extern "C"
void* C_ZN10QAtomicIntC1Ei(int value) {
  (MyQAtomicInt*)(0);
  return  new MyQAtomicInt(value);
}
//  main block end
