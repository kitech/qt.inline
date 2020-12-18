//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionViewItem is pure virtual: false false
// QStyleOptionViewItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionViewItem_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionViewItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionViewItem_t qt_meta_stringdata_MyQStyleOptionViewItem = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQStyleOptionViewItem"
  },
  "MyQStyleOptionViewItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionViewItem[] = {
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
class Q_DECL_EXPORT MyQStyleOptionViewItem : public QStyleOptionViewItem {
public:
  virtual ~MyQStyleOptionViewItem() {}
// void QStyleOptionViewItem()
MyQStyleOptionViewItem() : QStyleOptionViewItem() {}
// void QStyleOptionViewItem(const QStyleOptionViewItem &)
MyQStyleOptionViewItem(const QStyleOptionViewItem & other) : QStyleOptionViewItem(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionviewitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:462
// [-2] void QStyleOptionViewItem(const QStyleOptionViewItem &) 
// (12)qm2743707417 (32)_ZN20QStyleOptionViewItemC2ERKS_
/*void* qm2743707417(const QStyleOptionViewItem & other)*/{
  const QStyleOptionViewItem & other = *(const QStyleOptionViewItem *)this_;
  this_ =  new QStyleOptionViewItem(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:463
// [192] QStyleOptionViewItem & operator=(const QStyleOptionViewItem &) 
// (11)qm939742035 (32)_ZN20QStyleOptionViewItemaSERKS_
//static
/*void qm939742035(const QStyleOptionViewItem & arg0)*/ {
  const QStyleOptionViewItem & arg0 = *(const QStyleOptionViewItem *)this_;
  (void) ((QStyleOptionViewItem*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionViewItem & (QStyleOptionViewItem::*)(QStyleOptionViewItem const&) ) &QStyleOptionViewItem::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionViewItemD2Ev(void *this_)*/ {
  delete (QStyleOptionViewItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionviewitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
