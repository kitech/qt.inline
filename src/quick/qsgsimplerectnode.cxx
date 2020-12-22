//  header block begin

// /usr/include/qt/QtQuick/qsgsimplerectnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgsimplerectnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGSimpleRectNode is pure virtual: false false
// QSGSimpleRectNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGSimpleRectNode_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGSimpleRectNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGSimpleRectNode_t qt_meta_stringdata_MyQSGSimpleRectNode = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSGSimpleRectNode"
  },
  "MyQSGSimpleRectNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGSimpleRectNode[] = {
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
class Q_DECL_EXPORT MyQSGSimpleRectNode : public QSGSimpleRectNode {
public:
  virtual ~MyQSGSimpleRectNode() {}
// void QSGSimpleRectNode(const QRectF &, const QColor &)
MyQSGSimpleRectNode(const QRectF & rect, const QColor & color) : QSGSimpleRectNode(rect, color) {}
// void QSGSimpleRectNode()
MyQSGSimpleRectNode() : QSGSimpleRectNode() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgsimplerectnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:51
// [-2] void QSGSimpleRectNode(const QRectF &, const QColor &) 
// (12)qm3229304132 (43)_ZN17QSGSimpleRectNodeC2ERK6QRectFRK6QColor
/*void* qm3229304132(const QRectF & rect, const QColor & color)*/{
  const QRectF & rect = *(const QRectF *)this_; const QColor & color = *(const QColor *)this_;
  this_ =  new QSGSimpleRectNode(rect, color);
  this_ =  new MyQSGSimpleRectNode(rect, color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:52
// [-2] void QSGSimpleRectNode() 
// (12)qm1180848505 (26)_ZN17QSGSimpleRectNodeC2Ev
/*void* qm1180848505()*/{
  ;
  this_ =  new QSGSimpleRectNode();
  this_ =  new MyQSGSimpleRectNode();
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:55
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (12)qm2076874065 (35)_ZN17QSGSimpleRectNode7setRectEdddd
//static
/*void qm2076874065(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGSimpleRectNode*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QSGSimpleRectNode::*)(double, double, double, double) ) &QSGSimpleRectNode::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSGSimpleRectNodeD2Ev(void *this_)*/ {
  delete (QSGSimpleRectNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgsimplerectnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
