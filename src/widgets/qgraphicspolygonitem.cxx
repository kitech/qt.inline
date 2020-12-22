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

// QGraphicsPolygonItem is pure virtual: false false
// QGraphicsPolygonItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsPolygonItem_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsPolygonItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsPolygonItem_t qt_meta_stringdata_MyQGraphicsPolygonItem = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQGraphicsPolygonItem"
  },
  "MyQGraphicsPolygonItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsPolygonItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsPolygonItem : public QGraphicsPolygonItem {
public:
  virtual ~MyQGraphicsPolygonItem() {}
// void QGraphicsPolygonItem(QGraphicsItem *)
MyQGraphicsPolygonItem(QGraphicsItem * parent) : QGraphicsPolygonItem(parent) {}
// void QGraphicsPolygonItem(const QPolygonF &, QGraphicsItem *)
MyQGraphicsPolygonItem(const QPolygonF & polygon, QGraphicsItem * parent) : QGraphicsPolygonItem(polygon, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsPolygonItem::supportsExtension(extension);
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
    QGraphicsPolygonItem::setExtension(extension, variant);
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
    return QGraphicsPolygonItem::extension(variant);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicspolygonitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:753
// [-2] void QGraphicsPolygonItem(QGraphicsItem *) 
// (12)qm2537868427 (44)_ZN20QGraphicsPolygonItemC2EP13QGraphicsItem
/*void* qm2537868427(QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsPolygonItem*)(0);
  QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsPolygonItem(parent);
  this_ =  new MyQGraphicsPolygonItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:754
// [-2] void QGraphicsPolygonItem(const QPolygonF &, QGraphicsItem *) 
// (12)qm3099412477 (56)_ZN20QGraphicsPolygonItemC2ERK9QPolygonFP13QGraphicsItem
/*void* qm3099412477(const QPolygonF & polygon, QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsPolygonItem*)(0);
  const QPolygonF & polygon = *(const QPolygonF *)this_; QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsPolygonItem(polygon, parent);
  this_ =  new MyQGraphicsPolygonItem(polygon, parent);
}


/*void C_ZN20QGraphicsPolygonItemD2Ev(void *this_)*/ {
  delete (QGraphicsPolygonItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicspolygonitem
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
