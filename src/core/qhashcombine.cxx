//  header block begin
// /usr/include/qt/QtCore/qhashfunctions.h
#ifndef protected
#define protected public
#endif
#include <qhashfunctions.h>
#include <QtCore>
#include "callback_inherit.h"

// QHashCombine is pure virtual: false
// QHashCombine has virtual projected: false
//  header block end

//  main block begin

class MyQHashCombine : public QtPrivate::QHashCombine {
public:
  virtual ~MyQHashCombine() {}
};


extern "C"
void C_ZN12QHashCombineD2Ev(void *this_) {
  delete (QtPrivate::QHashCombine*)(this_);
}
//  main block end
