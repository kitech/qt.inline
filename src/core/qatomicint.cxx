//  header block begin
// /usr/include/qt/QtCore/qatomic.h
#include <qatomic.h>
#include <QtCore>

// QAtomicInt is pure virtual: false
// QAtomicInt has virtual projected: false
//  header block end

//  main block begin

class MyQAtomicInt : public QAtomicInt {
public:
  virtual ~MyQAtomicInt() {}
// void QAtomicInt(int)
MyQAtomicInt(int value) : QAtomicInt(value) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qatomic.h:162
// [-2] void QAtomicInt(int)
extern "C"
void* C_ZN10QAtomicIntC2Ei(int value) {
  return  new QAtomicInt(value);
}

extern "C"
void C_ZN10QAtomicIntD2Ev(void *this_) {
  delete (QAtomicInt*)(this_);
}
//  main block end
