//  header block begin
// /usr/include/qt/QtCore/qhashfunctions.h
#ifndef protected
#define protected public
#endif
#include <qhashfunctions.h>
#include <QtCore>
#include "callback_inherit.h"

// QHashCombineCommutative is pure virtual: false
// QHashCombineCommutative has virtual projected: false
//  header block end

//  main block begin

class MyQHashCombineCommutative : public QtPrivate::QHashCombineCommutative {
public:
  virtual ~MyQHashCombineCommutative() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN23QHashCombineCommutativeD2Ev(void *this_) {
  delete (QtPrivate::QHashCombineCommutative*)(this_);
}
//  main block end
