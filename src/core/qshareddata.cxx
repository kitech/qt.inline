//  header block begin
// /usr/include/qt/QtCore/qshareddata.h
#ifndef protected
#define protected public
#endif
#include <qshareddata.h>
#include <QtCore>
#include "callback_inherit.h"

// QSharedData is pure virtual: false
// QSharedData has virtual projected: false
//  header block end

//  main block begin

class MyQSharedData : public QSharedData {
public:
  virtual ~MyQSharedData() {}
// void QSharedData()
MyQSharedData() : QSharedData() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:60
// [-2] void QSharedData()
extern "C"
void* C_ZN11QSharedDataC2Ev() {
  return  new QSharedData();
}

extern "C"
void C_ZN11QSharedDataD2Ev(void *this_) {
  delete (QSharedData*)(this_);
}
//  main block end
