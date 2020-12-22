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

// QGraphicsPathItem is pure virtual: false false
// QGraphicsPathItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsPathItem_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsPathItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsPathItem_t qt_meta_stringdata_MyQGraphicsPathItem = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQGraphicsPathItem"
  },
  "MyQGraphicsPathItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsPathItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsPathItem : public QGraphicsPathItem {
public:
  virtual ~MyQGraphicsPathItem() {}
// void QGraphicsPathItem(QGraphicsItem *)
MyQGraphicsPathItem(QGraphicsItem * parent) : QGraphicsPathItem(parent) {}
// void QGraphicsPathItem(const QPainterPath &, QGraphicsItem *)
MyQGraphicsPathItem(const QPainterPath & path, QGraphicsItem * parent) : QGraphicsPathItem(path, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsPathItem::supportsExtension(extension);
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
    QGraphicsPathItem::setExtension(extension, variant);
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
    return QGraphicsPathItem::extension(variant);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicspathitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:638
// [-2] void QGraphicsPathItem(QGraphicsItem *) 
// (11)qm911605910 (41)_ZN17QGraphicsPathItemC2EP13QGraphicsItem
/*void* qm911605910(QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsPathItem*)(0);
  QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsPathItem(parent);
  this_ =  new MyQGraphicsPathItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:639
// [-2] void QGraphicsPathItem(const QPainterPath &, QGraphicsItem *) 
// (12)qm4240094087 (57)_ZN17QGraphicsPathItemC2ERK12QPainterPathP13QGraphicsItem
/*void* qm4240094087(const QPainterPath & path, QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsPathItem*)(0);
  const QPainterPath & path = *(const QPainterPath *)this_; QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsPathItem(path, parent);
  this_ =  new MyQGraphicsPathItem(path, parent);
}


/*void C_ZN17QGraphicsPathItemD2Ev(void *this_)*/ {
  delete (QGraphicsPathItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicspathitem
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
