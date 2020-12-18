//  header block begin

// /usr/include/qt/QtQuick/qsgrectanglenode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgrectanglenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRectangleNode is pure virtual: true true
// QSGRectangleNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGRectangleNode_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGRectangleNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGRectangleNode_t qt_meta_stringdata_MyQSGRectangleNode = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQSGRectangleNode"
  },
  "MyQSGRectangleNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGRectangleNode[] = {
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
class Q_DECL_EXPORT MyQSGRectangleNode : public QSGRectangleNode {
public:
  virtual ~MyQSGRectangleNode() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setRect(const QRectF &)
  virtual void setRect(const QRectF & rect)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setRect", &handled, 1, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGRectangleNode::setRect(rect);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [32] QRectF rect()
  virtual QRectF rect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setColor(const QColor &)
  virtual void setColor(const QColor & color)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setColor", &handled, 1, (uint64_t)&color, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGRectangleNode::setColor(color);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [16] QColor color()
  virtual QColor color() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"color", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QColor){};}
    auto prv = (QColor*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QColor
    } else {
    return (QColor){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgrectanglenode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:50
// [-2] void ~QSGRectangleNode() 
// (11)qm402386207 (25)_ZN16QSGRectangleNodeD2Ev
/*void qm402386207 (void *this_)*/ {
  delete (QSGRectangleNode*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:53
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (11)qm354107506 (34)_ZN16QSGRectangleNode7setRectEdddd
//static
/*void qm354107506(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGRectangleNode*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QSGRectangleNode::*)(double, double, double, double) ) &QSGRectangleNode::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qsgrectanglenode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
