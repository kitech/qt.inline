//  header block begin

// /usr/include/qt/QtQuick/qsgsimpletexturenode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgsimpletexturenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGSimpleTextureNode is pure virtual: false false
// QSGSimpleTextureNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGSimpleTextureNode_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGSimpleTextureNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGSimpleTextureNode_t qt_meta_stringdata_MyQSGSimpleTextureNode = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQSGSimpleTextureNode"
  },
  "MyQSGSimpleTextureNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGSimpleTextureNode[] = {
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
class Q_DECL_EXPORT MyQSGSimpleTextureNode : public QSGSimpleTextureNode {
public:
  virtual ~MyQSGSimpleTextureNode() {}
// void QSGSimpleTextureNode()
MyQSGSimpleTextureNode() : QSGSimpleTextureNode() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgsimpletexturenode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:58
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (12)qm2216326506 (38)_ZN20QSGSimpleTextureNode7setRectEdddd
//static
/*void qm2216326506(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGSimpleTextureNode*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QSGSimpleTextureNode::*)(double, double, double, double) ) &QSGSimpleTextureNode::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:62
// [-2] void setSourceRect(qreal, qreal, qreal, qreal) 
// (12)qm3093220488 (45)_ZN20QSGSimpleTextureNode13setSourceRectEdddd
//static
/*void qm3093220488(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGSimpleTextureNode*)this_)->setSourceRect(x, y, w, h);
   auto xptr = (void (QSGSimpleTextureNode::*)(double, double, double, double) ) &QSGSimpleTextureNode::setSourceRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QSGSimpleTextureNodeD2Ev(void *this_)*/ {
  delete (QSGSimpleTextureNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgsimpletexturenode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
