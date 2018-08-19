//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qatomic.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qatomic.h>
#include <QtCore>
#include "callback_inherit.h"

// QAtomicInt is pure virtual: false
// QAtomicInt has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAtomicInt : public QAtomicInt {
public:
  virtual ~MyQAtomicInt() {}
// void QAtomicInt(int)
MyQAtomicInt(int value) : QAtomicInt(value) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qatomic.h:162
// [-2] void QAtomicInt(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QAtomicIntC2Ei(int value) {
  return  new QAtomicInt(value);
}


extern "C" Q_DECL_EXPORT
void C_ZN10QAtomicIntD2Ev(void *this_) {
  delete (QAtomicInt*)(this_);
}
//  main block end
