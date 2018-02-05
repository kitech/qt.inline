//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGOpacityNode is pure virtual: false
// QSGOpacityNode has virtual projected: false
//  header block end

//  main block begin

class MyQSGOpacityNode : public QSGOpacityNode {
public:
  virtual ~MyQSGOpacityNode() {}
// void QSGOpacityNode()
MyQSGOpacityNode() : QSGOpacityNode() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:319
// [-2] void QSGOpacityNode()
extern "C"
void* C_ZN14QSGOpacityNodeC2Ev() {
  return  new QSGOpacityNode();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:320
// [-2] void ~QSGOpacityNode()
extern "C"
void C_ZN14QSGOpacityNodeD2Ev(void *this_) {
  delete (QSGOpacityNode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:322
// [-2] void setOpacity(qreal)
extern "C"
void C_ZN14QSGOpacityNode10setOpacityEd(void *this_, qreal opacity) {
  ((QSGOpacityNode*)this_)->setOpacity(opacity);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:323
// [8] qreal opacity()
extern "C"
qreal C_ZNK14QSGOpacityNode7opacityEv(void *this_) {
  return (qreal)((QSGOpacityNode*)this_)->opacity();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:325
// [-2] void setCombinedOpacity(qreal)
extern "C"
void C_ZN14QSGOpacityNode18setCombinedOpacityEd(void *this_, qreal opacity) {
  ((QSGOpacityNode*)this_)->setCombinedOpacity(opacity);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:326
// [8] qreal combinedOpacity()
extern "C"
qreal C_ZNK14QSGOpacityNode15combinedOpacityEv(void *this_) {
  return (qreal)((QSGOpacityNode*)this_)->combinedOpacity();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:328
// [1] bool isSubtreeBlocked()
extern "C"
bool C_ZNK14QSGOpacityNode16isSubtreeBlockedEv(void *this_) {
  return (bool)((QSGOpacityNode*)this_)->isSubtreeBlocked();
}
//  main block end
