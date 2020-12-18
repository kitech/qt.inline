//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicslayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicslayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLayout is pure virtual: true true
// QGraphicsLayout has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsLayout_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsLayout_t qt_meta_stringdata_MyQGraphicsLayout = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQGraphicsLayout"
  },
  "MyQGraphicsLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsLayout[] = {
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
class Q_DECL_EXPORT MyQGraphicsLayout : public QGraphicsLayout {
public:
  virtual ~MyQGraphicsLayout() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int count()
  virtual int count() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"count", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QGraphicsLayoutItem * itemAt(int)
  virtual QGraphicsLayoutItem * itemAt(int i) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"itemAt", &handled, 1, (uint64_t)i, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGraphicsLayoutItem *)(irv);
      // Pointer Pointer QGraphicsLayoutItem *
    } else {
    return (QGraphicsLayoutItem *){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void removeAt(int)
  virtual void removeAt(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"removeAt", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGraphicsLayout::removeAt(index);
  }
  }

// Protected purevirtual virtual Direct Visibility=Default Availability=Available
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSizeF){};}
    auto prv = (QSizeF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSizeF
    } else {
    return (QSizeF){};
  }
  }

// void QGraphicsLayout(QGraphicsLayoutItem *)
MyQGraphicsLayout(QGraphicsLayoutItem * parent) : QGraphicsLayout(parent) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicslayout(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN15QGraphicsLayoutD2Ev(void *this_)*/ {
  delete (QGraphicsLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicslayout
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
