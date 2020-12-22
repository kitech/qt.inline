//  header block begin

// /usr/include/qt/QtCore/qcollator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcollator.h>
#include <QtCore>
#include "callback_inherit.h"

// QCollatorSortKey is pure virtual: false false
// QCollatorSortKey has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCollatorSortKey_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCollatorSortKey_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCollatorSortKey_t qt_meta_stringdata_MyQCollatorSortKey = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQCollatorSortKey"
  },
  "MyQCollatorSortKey"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCollatorSortKey[] = {
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
class Q_DECL_EXPORT MyQCollatorSortKey : public QCollatorSortKey {
public:
  virtual ~MyQCollatorSortKey() {}
// void QCollatorSortKey(const QCollatorSortKey &)
MyQCollatorSortKey(const QCollatorSortKey & other) : QCollatorSortKey(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcollatorsortkey(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:57
// [-2] void QCollatorSortKey(const QCollatorSortKey &) 
// (11)qm274693814 (28)_ZN16QCollatorSortKeyC2ERKS_
/*void* qm274693814(const QCollatorSortKey & other)*/{
  const QCollatorSortKey & other = *(const QCollatorSortKey *)this_;
  this_ =  new QCollatorSortKey(other);
  this_ =  new MyQCollatorSortKey(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:60
// [8] QCollatorSortKey & operator=(QCollatorSortKey &&) 
// (12)qm4211835506 (27)_ZN16QCollatorSortKeyaSEOS_
//static
/*void qm4211835506(QCollatorSortKey && other)*/ {
  QCollatorSortKey && other =  static_cast<QCollatorSortKey &&>(*(QCollatorSortKey *)this_);
  (void) ((QCollatorSortKey*)this_)->operator=(other);
  // auto xptr = (QCollatorSortKey & (QCollatorSortKey::*)(QCollatorSortKey&&) ) &QCollatorSortKey::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:62
// [-2] void swap(QCollatorSortKey &) 
// (12)qm1225108167 (30)_ZN16QCollatorSortKey4swapERS_
//static
/*void qm1225108167(QCollatorSortKey & other)*/ {
  QCollatorSortKey & other = *(QCollatorSortKey *)this_;
  (void) ((QCollatorSortKey*)this_)->swap(other);
   auto xptr = (void (QCollatorSortKey::*)(QCollatorSortKey&) ) &QCollatorSortKey::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QCollatorSortKeyD2Ev(void *this_)*/ {
  delete (QCollatorSortKey*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcollatorsortkey
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
