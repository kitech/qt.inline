//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLayoutItem is pure virtual: true true
// QLayoutItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLayoutItem_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLayoutItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLayoutItem_t qt_meta_stringdata_MyQLayoutItem = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQLayoutItem"
  },
  "MyQLayoutItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLayoutItem[] = {
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
class Q_DECL_EXPORT MyQLayoutItem : public QLayoutItem {
public:
  virtual ~MyQLayoutItem() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QSize sizeHint()
  virtual QSize sizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QSize minimumSize()
  virtual QSize minimumSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"minimumSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QSize maximumSize()
  virtual QSize maximumSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"maximumSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] Qt::Orientations expandingDirections()
  virtual Qt::Orientations expandingDirections() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"expandingDirections", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::Orientations)(int)(irv);
      // Elaborated Record QFlags<Qt::Orientation>
    } else {
    return (Qt::Orientations){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setGeometry(const QRect &)
  virtual void setGeometry(const QRect & arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setGeometry", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QLayoutItem::setGeometry(arg0);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [16] QRect geometry()
  virtual QRect geometry() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"geometry", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRect){};}
    auto prv = (QRect*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRect
    } else {
    return (QRect){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool isEmpty()
  virtual bool isEmpty() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isEmpty", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// void QLayoutItem(Qt::Alignment)
MyQLayoutItem(QFlags<Qt::AlignmentFlag> alignment) : QLayoutItem(alignment) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlayoutitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:63
// [-2] void QLayoutItem(Qt::Alignment) 
// (11)qm536863978 (48)_ZN11QLayoutItemC2E6QFlagsIN2Qt13AlignmentFlagEE
/*void* qm536863978(QFlags<Qt::AlignmentFlag> alignment)*/{
  QFlags<Qt::AlignmentFlag> alignment = *(QFlags<Qt::AlignmentFlag>*)this_;
  this_ = 0; // new QLayoutItem(alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:85
// [4] Qt::Alignment alignment() const
// (10)qm23188746 (29)_ZNK11QLayoutItem9alignmentEv
//static
/*void qm23188746()*/ {
  ;
  (void) ((QLayoutItem*)this_)->alignment();
   auto xptr = (QFlags<Qt::AlignmentFlag> (QLayoutItem::*)() const ) &QLayoutItem::alignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QLayoutItemD2Ev(void *this_)*/ {
  delete (QLayoutItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlayoutitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
