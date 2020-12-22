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

// QGraphicsEllipseItem is pure virtual: false false
// QGraphicsEllipseItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsEllipseItem_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsEllipseItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsEllipseItem_t qt_meta_stringdata_MyQGraphicsEllipseItem = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQGraphicsEllipseItem"
  },
  "MyQGraphicsEllipseItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsEllipseItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsEllipseItem : public QGraphicsEllipseItem {
public:
  virtual ~MyQGraphicsEllipseItem() {}
// void QGraphicsEllipseItem(QGraphicsItem *)
MyQGraphicsEllipseItem(QGraphicsItem * parent) : QGraphicsEllipseItem(parent) {}
// void QGraphicsEllipseItem(const QRectF &, QGraphicsItem *)
MyQGraphicsEllipseItem(const QRectF & rect, QGraphicsItem * parent) : QGraphicsEllipseItem(rect, parent) {}
// void QGraphicsEllipseItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
MyQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) : QGraphicsEllipseItem(x, y, w, h, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsEllipseItem::supportsExtension(extension);
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
    QGraphicsEllipseItem::setExtension(extension, variant);
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
    return QGraphicsEllipseItem::extension(variant);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsellipseitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:709
// [-2] void QGraphicsEllipseItem(QGraphicsItem *) 
// (12)qm2786333810 (44)_ZN20QGraphicsEllipseItemC2EP13QGraphicsItem
/*void* qm2786333810(QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsEllipseItem*)(0);
  QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsEllipseItem(parent);
  this_ =  new MyQGraphicsEllipseItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:710
// [-2] void QGraphicsEllipseItem(const QRectF &, QGraphicsItem *) 
// (12)qm4106380655 (53)_ZN20QGraphicsEllipseItemC2ERK6QRectFP13QGraphicsItem
/*void* qm4106380655(const QRectF & rect, QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsEllipseItem*)(0);
  const QRectF & rect = *(const QRectF *)this_; QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsEllipseItem(rect, parent);
  this_ =  new MyQGraphicsEllipseItem(rect, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:711
// [-2] void QGraphicsEllipseItem(qreal, qreal, qreal, qreal, QGraphicsItem *) 
// (12)qm2430855042 (48)_ZN20QGraphicsEllipseItemC2EddddP13QGraphicsItem
/*void* qm2430855042(double x, double y, double w, double h, QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsEllipseItem*)(0);
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsEllipseItem(x, y, w, h, parent);
  this_ =  new MyQGraphicsEllipseItem(x, y, w, h, parent);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:716
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (12)qm1155051674 (38)_ZN20QGraphicsEllipseItem7setRectEdddd
//static
/*void qm1155051674(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsEllipseItem*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QGraphicsEllipseItem::*)(double, double, double, double) ) &QGraphicsEllipseItem::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QGraphicsEllipseItemD2Ev(void *this_)*/ {
  delete (QGraphicsEllipseItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsellipseitem
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
