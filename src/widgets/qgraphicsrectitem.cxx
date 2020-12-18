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

// QGraphicsRectItem is pure virtual: false false
// QGraphicsRectItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsRectItem_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsRectItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsRectItem_t qt_meta_stringdata_MyQGraphicsRectItem = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQGraphicsRectItem"
  },
  "MyQGraphicsRectItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsRectItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsRectItem : public QGraphicsRectItem {
public:
  virtual ~MyQGraphicsRectItem() {}
// void QGraphicsRectItem(QGraphicsItem *)
MyQGraphicsRectItem(QGraphicsItem * parent) : QGraphicsRectItem(parent) {}
// void QGraphicsRectItem(const QRectF &, QGraphicsItem *)
MyQGraphicsRectItem(const QRectF & rect, QGraphicsItem * parent) : QGraphicsRectItem(rect, parent) {}
// void QGraphicsRectItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
MyQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) : QGraphicsRectItem(x, y, w, h, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsRectItem::supportsExtension(extension);
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
    QGraphicsRectItem::setExtension(extension, variant);
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
    return QGraphicsRectItem::extension(variant);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsrectitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:678
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (12)qm1857192220 (35)_ZN17QGraphicsRectItem7setRectEdddd
//static
/*void qm1857192220(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsRectItem*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QGraphicsRectItem::*)(double, double, double, double) ) &QGraphicsRectItem::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QGraphicsRectItemD2Ev(void *this_)*/ {
  delete (QGraphicsRectItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsrectitem
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
