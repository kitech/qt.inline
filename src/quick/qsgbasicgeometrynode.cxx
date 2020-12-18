//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGBasicGeometryNode is pure virtual: false false
// QSGBasicGeometryNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGBasicGeometryNode_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGBasicGeometryNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGBasicGeometryNode_t qt_meta_stringdata_MyQSGBasicGeometryNode = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQSGBasicGeometryNode"
  },
  "MyQSGBasicGeometryNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGBasicGeometryNode[] = {
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
class Q_DECL_EXPORT MyQSGBasicGeometryNode : public QSGBasicGeometryNode {
public:
  virtual ~MyQSGBasicGeometryNode() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgbasicgeometrynode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:196
// [8] const QSGGeometry * geometry() const
// (12)qm1063065656 (37)_ZNK20QSGBasicGeometryNode8geometryEv
//static
/*void qm1063065656()*/ {
  ;
  (void) ((QSGBasicGeometryNode*)this_)->geometry();
   auto xptr = (const QSGGeometry * (QSGBasicGeometryNode::*)() const ) &QSGBasicGeometryNode::geometry;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:197
// [8] QSGGeometry * geometry() 
// (12)qm1960425253 (36)_ZN20QSGBasicGeometryNode8geometryEv
//static
/*void qm1960425253()*/ {
  ;
  (void) ((QSGBasicGeometryNode*)this_)->geometry();
   auto xptr = (QSGGeometry * (QSGBasicGeometryNode::*)() ) &QSGBasicGeometryNode::geometry;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:199
// [8] const QMatrix4x4 * matrix() const
// (12)qm2789894998 (35)_ZNK20QSGBasicGeometryNode6matrixEv
//static
/*void qm2789894998()*/ {
  ;
  (void) ((QSGBasicGeometryNode*)this_)->matrix();
   auto xptr = (const QMatrix4x4 * (QSGBasicGeometryNode::*)() const ) &QSGBasicGeometryNode::matrix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:200
// [8] const QSGClipNode * clipList() const
// (12)qm1388579179 (37)_ZNK20QSGBasicGeometryNode8clipListEv
//static
/*void qm1388579179()*/ {
  ;
  (void) ((QSGBasicGeometryNode*)this_)->clipList();
   auto xptr = (const QSGClipNode * (QSGBasicGeometryNode::*)() const ) &QSGBasicGeometryNode::clipList;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:202
// [-2] void setRendererMatrix(const QMatrix4x4 *) 
// (11)qm174327591 (59)_ZN20QSGBasicGeometryNode17setRendererMatrixEPK10QMatrix4x4
//static
/*void qm174327591(const QMatrix4x4 * m)*/ {
  const QMatrix4x4 * m = *(const QMatrix4x4 **)this_;
  (void) ((QSGBasicGeometryNode*)this_)->setRendererMatrix(m);
   auto xptr = (void (QSGBasicGeometryNode::*)(QMatrix4x4 const*) ) &QSGBasicGeometryNode::setRendererMatrix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:203
// [-2] void setRendererClipList(const QSGClipNode *) 
// (12)qm1575958453 (62)_ZN20QSGBasicGeometryNode19setRendererClipListEPK11QSGClipNode
//static
/*void qm1575958453(const QSGClipNode * c)*/ {
  const QSGClipNode * c = *(const QSGClipNode **)this_;
  (void) ((QSGBasicGeometryNode*)this_)->setRendererClipList(c);
   auto xptr = (void (QSGBasicGeometryNode::*)(QSGClipNode const*) ) &QSGBasicGeometryNode::setRendererClipList;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QSGBasicGeometryNodeD2Ev(void *this_)*/ {
  delete (QSGBasicGeometryNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgbasicgeometrynode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
