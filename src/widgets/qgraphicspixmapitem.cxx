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

// QGraphicsPixmapItem is pure virtual: false false
// QGraphicsPixmapItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsPixmapItem_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsPixmapItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsPixmapItem_t qt_meta_stringdata_MyQGraphicsPixmapItem = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQGraphicsPixmapItem"
  },
  "MyQGraphicsPixmapItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsPixmapItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsPixmapItem : public QGraphicsPixmapItem {
public:
  virtual ~MyQGraphicsPixmapItem() {}
// void QGraphicsPixmapItem(QGraphicsItem *)
MyQGraphicsPixmapItem(QGraphicsItem * parent) : QGraphicsPixmapItem(parent) {}
// void QGraphicsPixmapItem(const QPixmap &, QGraphicsItem *)
MyQGraphicsPixmapItem(const QPixmap & pixmap, QGraphicsItem * parent) : QGraphicsPixmapItem(pixmap, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsPixmapItem::supportsExtension(extension);
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
    QGraphicsPixmapItem::setExtension(extension, variant);
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
    return QGraphicsPixmapItem::extension(variant);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicspixmapitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:847
// [-2] void setOffset(qreal, qreal) 
// (12)qm1181875890 (37)_ZN19QGraphicsPixmapItem9setOffsetEdd
//static
/*void qm1181875890(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsPixmapItem*)this_)->setOffset(x, y);
   auto xptr = (void (QGraphicsPixmapItem::*)(double, double) ) &QGraphicsPixmapItem::setOffset;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QGraphicsPixmapItemD2Ev(void *this_)*/ {
  delete (QGraphicsPixmapItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicspixmapitem
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
