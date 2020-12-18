//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSpacerItem is pure virtual: false false
// QSpacerItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSpacerItem_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSpacerItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSpacerItem_t qt_meta_stringdata_MyQSpacerItem = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSpacerItem"
  },
  "MyQSpacerItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSpacerItem[] = {
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
class Q_DECL_EXPORT MyQSpacerItem : public QSpacerItem {
public:
  virtual ~MyQSpacerItem() {}
// void QSpacerItem(int, int, QSizePolicy::Policy, QSizePolicy::Policy)
MyQSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) : QSpacerItem(w, h, hData, vData) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qspaceritem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:99
// [-2] void QSpacerItem(int, int, QSizePolicy::Policy, QSizePolicy::Policy) 
// (11)qm886124047 (46)_ZN11QSpacerItemC2EiiN11QSizePolicy6PolicyES1_
/*void* qm886124047(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData)*/{
  int w = *(int*)this_; int h = *(int*)this_; QSizePolicy::Policy hData = *(QSizePolicy::Policy*)this_; QSizePolicy::Policy vData = *(QSizePolicy::Policy*)this_;
  this_ =  new QSpacerItem(w, h, hData, vData);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:116
// [4] QSizePolicy sizePolicy() const
// (11)qm234103071 (31)_ZNK11QSpacerItem10sizePolicyEv
//static
/*void qm234103071()*/ {
  ;
  (void) ((QSpacerItem*)this_)->sizePolicy();
   auto xptr = (QSizePolicy (QSpacerItem::*)() const ) &QSpacerItem::sizePolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QSpacerItemD2Ev(void *this_)*/ {
  delete (QSpacerItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qspaceritem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
