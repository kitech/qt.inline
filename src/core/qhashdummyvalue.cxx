//  header block begin
// /usr/include/qt/QtCore/qhash.h
#ifndef protected
#define protected public
#endif
#include <qhash.h>
#include <QtCore>
#include "callback_inherit.h"

// QHashDummyValue is pure virtual: false
// QHashDummyValue has virtual projected: false
//  header block end

//  main block begin

class MyQHashDummyValue : public QHashDummyValue {
public:
  virtual ~MyQHashDummyValue() {}
};


extern "C"
void C_ZN15QHashDummyValueD2Ev(void *this_) {
  delete (QHashDummyValue*)(this_);
}
//  main block end
