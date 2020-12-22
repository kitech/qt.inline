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

// QGraphicsSimpleTextItem is pure virtual: false false
// QGraphicsSimpleTextItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSimpleTextItem_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSimpleTextItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSimpleTextItem_t qt_meta_stringdata_MyQGraphicsSimpleTextItem = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQGraphicsSimpleTextItem"
  },
  "MyQGraphicsSimpleTextItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSimpleTextItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsSimpleTextItem : public QGraphicsSimpleTextItem {
public:
  virtual ~MyQGraphicsSimpleTextItem() {}
// void QGraphicsSimpleTextItem(QGraphicsItem *)
MyQGraphicsSimpleTextItem(QGraphicsItem * parent) : QGraphicsSimpleTextItem(parent) {}
// void QGraphicsSimpleTextItem(const QString &, QGraphicsItem *)
MyQGraphicsSimpleTextItem(const QString & text, QGraphicsItem * parent) : QGraphicsSimpleTextItem(text, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsSimpleTextItem::supportsExtension(extension);
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
    QGraphicsSimpleTextItem::setExtension(extension, variant);
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
    return QGraphicsSimpleTextItem::extension(variant);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicssimpletextitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:978
// [-2] void QGraphicsSimpleTextItem(QGraphicsItem *) 
// (12)qm3377978320 (47)_ZN23QGraphicsSimpleTextItemC2EP13QGraphicsItem
/*void* qm3377978320(QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsSimpleTextItem*)(0);
  QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsSimpleTextItem(parent);
  this_ =  new MyQGraphicsSimpleTextItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:979
// [-2] void QGraphicsSimpleTextItem(const QString &, QGraphicsItem *) 
// (12)qm3921551802 (57)_ZN23QGraphicsSimpleTextItemC2ERK7QStringP13QGraphicsItem
/*void* qm3921551802(const QString & text, QGraphicsItem * parent)*/{
  auto _nilp = (MyQGraphicsSimpleTextItem*)(0);
  const QString & text = *(const QString *)this_; QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsSimpleTextItem(text, parent);
  this_ =  new MyQGraphicsSimpleTextItem(text, parent);
}


/*void C_ZN23QGraphicsSimpleTextItemD2Ev(void *this_)*/ {
  delete (QGraphicsSimpleTextItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicssimpletextitem
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
