//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGGeometryNode is pure virtual: false false
// QSGGeometryNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGGeometryNode_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGGeometryNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGGeometryNode_t qt_meta_stringdata_MyQSGGeometryNode = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQSGGeometryNode"
  },
  "MyQSGGeometryNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGGeometryNode[] = {
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
class Q_DECL_EXPORT MyQSGGeometryNode : public QSGGeometryNode {
public:
  virtual ~MyQSGGeometryNode() {}
// void QSGGeometryNode()
MyQSGGeometryNode() : QSGGeometryNode() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsggeometrynode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:226
// [-2] void QSGGeometryNode() 
// (12)qm2449254989 (24)_ZN15QSGGeometryNodeC2Ev
/*void* qm2449254989()*/{
  ;
  this_ =  new QSGGeometryNode();
  this_ =  new MyQSGGeometryNode();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:230
// [8] QSGMaterial * material() const
// (12)qm3197256574 (32)_ZNK15QSGGeometryNode8materialEv
//static
/*void qm3197256574()*/ {
  ;
  (void) ((QSGGeometryNode*)this_)->material();
   auto xptr = (QSGMaterial * (QSGGeometryNode::*)() const ) &QSGGeometryNode::material;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:233
// [8] QSGMaterial * opaqueMaterial() const
// (12)qm1521691051 (39)_ZNK15QSGGeometryNode14opaqueMaterialEv
//static
/*void qm1521691051()*/ {
  ;
  (void) ((QSGGeometryNode*)this_)->opaqueMaterial();
   auto xptr = (QSGMaterial * (QSGGeometryNode::*)() const ) &QSGGeometryNode::opaqueMaterial;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:238
// [4] int renderOrder() const
// (12)qm3713326310 (36)_ZNK15QSGGeometryNode11renderOrderEv
//static
/*void qm3713326310()*/ {
  ;
  (void) ((QSGGeometryNode*)this_)->renderOrder();
   auto xptr = (int (QSGGeometryNode::*)() const ) &QSGGeometryNode::renderOrder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:241
// [8] qreal inheritedOpacity() const
// (10)qm73314119 (41)_ZNK15QSGGeometryNode16inheritedOpacityEv
//static
/*void qm73314119()*/ {
  ;
  (void) ((QSGGeometryNode*)this_)->inheritedOpacity();
   auto xptr = (double (QSGGeometryNode::*)() const ) &QSGGeometryNode::inheritedOpacity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QSGGeometryNodeD2Ev(void *this_)*/ {
  delete (QSGGeometryNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsggeometrynode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
