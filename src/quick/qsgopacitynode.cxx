//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGOpacityNode is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgopacitynode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:318
// [8] qreal opacity() const
// (9)qm3315315 (30)_ZNK14QSGOpacityNode7opacityEv
//static
/*void qm3315315()*/ {
  ;
  (void) ((QSGOpacityNode*)this_)->opacity();
   auto xptr = (double (QSGOpacityNode::*)() const ) &QSGOpacityNode::opacity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:321
// [8] qreal combinedOpacity() const
// (11)qm465597130 (39)_ZNK14QSGOpacityNode15combinedOpacityEv
//static
/*void qm465597130()*/ {
  ;
  (void) ((QSGOpacityNode*)this_)->combinedOpacity();
   auto xptr = (double (QSGOpacityNode::*)() const ) &QSGOpacityNode::combinedOpacity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QSGOpacityNodeD2Ev(void *this_)*/ {
  delete (QSGOpacityNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgopacitynode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
