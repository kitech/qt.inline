//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComplex is pure virtual: false
// QStyleOptionComplex has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionComplex : public QStyleOptionComplex {
public:
  virtual ~MyQStyleOptionComplex() {}
// void QStyleOptionComplex(int, int)
MyQStyleOptionComplex(int version, int type_) : QStyleOptionComplex(version, type_) {}
// void QStyleOptionComplex(const QStyleOptionComplex &)
MyQStyleOptionComplex(const QStyleOptionComplex & other) : QStyleOptionComplex(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:509
// [-2] void QStyleOptionComplex(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionComplexC2Eii(int version, int type_) {
  return  new QStyleOptionComplex(version, type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:510
// [-2] void QStyleOptionComplex(const QStyleOptionComplex &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionComplexC2ERKS_(QStyleOptionComplex* other) {
  return  new QStyleOptionComplex(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN19QStyleOptionComplexD2Ev(void *this_) {
  delete (QStyleOptionComplex*)(this_);
}
//  main block end
