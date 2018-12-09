//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGOpacityNode is pure virtual: false
// QSGOpacityNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGOpacityNode_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGOpacityNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGOpacityNode_t qt_meta_stringdata_MyQSGOpacityNode = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQSGOpacityNode"
  },
  "MyQSGOpacityNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGOpacityNode[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQSGOpacityNode : public QSGOpacityNode {
public:
  virtual ~MyQSGOpacityNode() {}
// void QSGOpacityNode()
MyQSGOpacityNode() : QSGOpacityNode() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:319
// [-2] void QSGOpacityNode()
extern "C" Q_DECL_EXPORT
void* C_ZN14QSGOpacityNodeC2Ev() {
  return  new QSGOpacityNode();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:320
// [-2] void ~QSGOpacityNode()
extern "C" Q_DECL_EXPORT
void C_ZN14QSGOpacityNodeD2Ev(void *this_) {
  delete (QSGOpacityNode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:322
// [-2] void setOpacity(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGOpacityNode10setOpacityEd(void *this_, qreal opacity) {
  ((QSGOpacityNode*)this_)->setOpacity(opacity);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:323
// [8] qreal opacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QSGOpacityNode7opacityEv(void *this_) {
  return (qreal)((QSGOpacityNode*)this_)->opacity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:325
// [-2] void setCombinedOpacity(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGOpacityNode18setCombinedOpacityEd(void *this_, qreal opacity) {
  ((QSGOpacityNode*)this_)->setCombinedOpacity(opacity);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:326
// [8] qreal combinedOpacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QSGOpacityNode15combinedOpacityEv(void *this_) {
  return (qreal)((QSGOpacityNode*)this_)->combinedOpacity();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:328
// [1] bool isSubtreeBlocked()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QSGOpacityNode16isSubtreeBlockedEv(void *this_) {
  return (bool)((QSGOpacityNode*)this_)->isSubtreeBlocked();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
