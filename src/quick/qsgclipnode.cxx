//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGClipNode is pure virtual: false false
// QSGClipNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGClipNode_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGClipNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGClipNode_t qt_meta_stringdata_MyQSGClipNode = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSGClipNode"
  },
  "MyQSGClipNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGClipNode[] = {
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
class Q_DECL_EXPORT MyQSGClipNode : public QSGClipNode {
public:
  virtual ~MyQSGClipNode() {}
// void QSGClipNode()
MyQSGClipNode() : QSGClipNode() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgclipnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:263
// [1] bool isRectangular() const
// (12)qm2527517363 (34)_ZNK11QSGClipNode13isRectangularEv
//static
/*void qm2527517363()*/ {
  ;
  (void) ((QSGClipNode*)this_)->isRectangular();
   auto xptr = (bool (QSGClipNode::*)() const ) &QSGClipNode::isRectangular;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:266
// [32] QRectF clipRect() const
// (12)qm3628172090 (28)_ZNK11QSGClipNode8clipRectEv
//static
/*void qm3628172090()*/ {
  ;
  (void) ((QSGClipNode*)this_)->clipRect();
   auto xptr = (QRectF (QSGClipNode::*)() const ) &QSGClipNode::clipRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QSGClipNodeD2Ev(void *this_)*/ {
  delete (QSGClipNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgclipnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
