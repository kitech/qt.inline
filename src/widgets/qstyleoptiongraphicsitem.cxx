//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionGraphicsItem is pure virtual: false false
// QStyleOptionGraphicsItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionGraphicsItem_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionGraphicsItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionGraphicsItem_t qt_meta_stringdata_MyQStyleOptionGraphicsItem = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQStyleOptionGraphicsItem"
  },
  "MyQStyleOptionGraphicsItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionGraphicsItem[] = {
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
class Q_DECL_EXPORT MyQStyleOptionGraphicsItem : public QStyleOptionGraphicsItem {
public:
  virtual ~MyQStyleOptionGraphicsItem() {}
// void QStyleOptionGraphicsItem()
MyQStyleOptionGraphicsItem() : QStyleOptionGraphicsItem() {}
// void QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem &)
MyQStyleOptionGraphicsItem(const QStyleOptionGraphicsItem & other) : QStyleOptionGraphicsItem(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiongraphicsitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:700
// [-2] void QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem &) 
// (11)qm979391014 (36)_ZN24QStyleOptionGraphicsItemC2ERKS_
/*void* qm979391014(const QStyleOptionGraphicsItem & other)*/{
  const QStyleOptionGraphicsItem & other = *(const QStyleOptionGraphicsItem *)this_;
  this_ =  new QStyleOptionGraphicsItem(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:701
// [152] QStyleOptionGraphicsItem & operator=(const QStyleOptionGraphicsItem &) 
// (12)qm2716509804 (36)_ZN24QStyleOptionGraphicsItemaSERKS_
//static
/*void qm2716509804(const QStyleOptionGraphicsItem & arg0)*/ {
  const QStyleOptionGraphicsItem & arg0 = *(const QStyleOptionGraphicsItem *)this_;
  (void) ((QStyleOptionGraphicsItem*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionGraphicsItem & (QStyleOptionGraphicsItem::*)(QStyleOptionGraphicsItem const&) ) &QStyleOptionGraphicsItem::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QStyleOptionGraphicsItemD2Ev(void *this_)*/ {
  delete (QStyleOptionGraphicsItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiongraphicsitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
