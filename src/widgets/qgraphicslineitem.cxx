//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLineItem is pure virtual: false false
// QGraphicsLineItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsLineItem_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsLineItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsLineItem_t qt_meta_stringdata_MyQGraphicsLineItem = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQGraphicsLineItem"
  },
  "MyQGraphicsLineItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsLineItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsLineItem : public QGraphicsLineItem {
public:
  virtual ~MyQGraphicsLineItem() {}
// void QGraphicsLineItem(QGraphicsItem *)
MyQGraphicsLineItem(QGraphicsItem * parent) : QGraphicsLineItem(parent) {}
// void QGraphicsLineItem(const QLineF &, QGraphicsItem *)
MyQGraphicsLineItem(const QLineF & line, QGraphicsItem * parent) : QGraphicsLineItem(line, parent) {}
// void QGraphicsLineItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
MyQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem * parent) : QGraphicsLineItem(x1, y1, x2, y2, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsLineItem::supportsExtension(extension);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsLineItem::setExtension(extension, variant);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [16] QVariant extension(const QVariant &)
  virtual QVariant extension(const QVariant & variant) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsLineItem::extension(variant);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicslineitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:800
// [-2] void setLine(qreal, qreal, qreal, qreal) 
// (12)qm1233511487 (35)_ZN17QGraphicsLineItem7setLineEdddd
//static
/*void qm1233511487(double x1, double y1, double x2, double y2)*/ {
  double x1 = *(double*)this_; double y1 = *(double*)this_; double x2 = *(double*)this_; double y2 = *(double*)this_;
  (void) ((QGraphicsLineItem*)this_)->setLine(x1, y1, x2, y2);
   auto xptr = (void (QGraphicsLineItem::*)(double, double, double, double) ) &QGraphicsLineItem::setLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QGraphicsLineItemD2Ev(void *this_)*/ {
  delete (QGraphicsLineItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicslineitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
