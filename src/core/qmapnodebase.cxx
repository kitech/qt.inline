//  header block begin
// /usr/include/qt/QtCore/qmap.h
#ifndef protected
#define protected public
#endif
#include <qmap.h>
#include <QtCore>
#include "callback_inherit.h"

// QMapNodeBase is pure virtual: false
// QMapNodeBase has virtual projected: false
//  header block end

//  main block begin

class MyQMapNodeBase : public QMapNodeBase {
public:
  virtual ~MyQMapNodeBase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:91
// [8] const QMapNodeBase * nextNode()
extern "C"
void* C_ZNK12QMapNodeBase8nextNodeEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->nextNode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:92
// [8] QMapNodeBase * nextNode()
extern "C"
void* C_ZN12QMapNodeBase8nextNodeEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->nextNode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:93
// [8] const QMapNodeBase * previousNode()
extern "C"
void* C_ZNK12QMapNodeBase12previousNodeEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->previousNode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:94
// [8] QMapNodeBase * previousNode()
extern "C"
void* C_ZN12QMapNodeBase12previousNodeEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->previousNode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:96
// [4] QMapNodeBase::Color color()
extern "C"
QMapNodeBase::Color C_ZNK12QMapNodeBase5colorEv(void *this_) {
  return (QMapNodeBase::Color)((QMapNodeBase*)this_)->color();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:97
// [-2] void setColor(enum QMapNodeBase::Color)
extern "C"
void C_ZN12QMapNodeBase8setColorENS_5ColorE(void *this_, QMapNodeBase::Color c) {
  ((QMapNodeBase*)this_)->setColor(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:98
// [8] QMapNodeBase * parent()
extern "C"
void* C_ZNK12QMapNodeBase6parentEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->parent();
}


extern "C"
void C_ZN12QMapNodeBaseD2Ev(void *this_) {
  delete (QMapNodeBase*)(this_);
}
//  main block end
