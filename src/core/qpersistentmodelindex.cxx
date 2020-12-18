//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(itemmodel)
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QPersistentModelIndex is pure virtual: false false
// QPersistentModelIndex has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPersistentModelIndex_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPersistentModelIndex_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPersistentModelIndex_t qt_meta_stringdata_MyQPersistentModelIndex = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQPersistentModelIndex"
  },
  "MyQPersistentModelIndex"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPersistentModelIndex[] = {
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
class Q_DECL_EXPORT MyQPersistentModelIndex : public QPersistentModelIndex {
public:
  virtual ~MyQPersistentModelIndex() {}
// void QPersistentModelIndex()
MyQPersistentModelIndex() : QPersistentModelIndex() {}
// void QPersistentModelIndex(const QModelIndex &)
MyQPersistentModelIndex(const QModelIndex & index) : QPersistentModelIndex(index) {}
// void QPersistentModelIndex(const QPersistentModelIndex &)
MyQPersistentModelIndex(const QPersistentModelIndex & other) : QPersistentModelIndex(other) {}
// void QPersistentModelIndex(QPersistentModelIndex &&)
MyQPersistentModelIndex(QPersistentModelIndex && other) : QPersistentModelIndex(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpersistentmodelindex(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:117
// [1] bool operator!=(const QPersistentModelIndex &) const
// (12)qm1070441237 (34)_ZNK21QPersistentModelIndexneERKS_
//static
/*void qm1070441237(const QPersistentModelIndex & other)*/ {
  const QPersistentModelIndex & other = *(const QPersistentModelIndex *)this_;
  (void) ((QPersistentModelIndex*)this_)->operator!=(other);
  // auto xptr = (bool (QPersistentModelIndex::*)(QPersistentModelIndex const&) const ) &QPersistentModelIndex::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:120
// [-2] void QPersistentModelIndex(QPersistentModelIndex &&) 
// (12)qm3330546329 (32)_ZN21QPersistentModelIndexC2EOS_
/*void* qm3330546329(QPersistentModelIndex && other)*/{
  QPersistentModelIndex && other =  static_cast<QPersistentModelIndex &&>(*(QPersistentModelIndex *)this_);
  this_ =  new QPersistentModelIndex(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:122
// [8] QPersistentModelIndex & operator=(QPersistentModelIndex &&) 
// (11)qm682811481 (32)_ZN21QPersistentModelIndexaSEOS_
//static
/*void qm682811481(QPersistentModelIndex && other)*/ {
  QPersistentModelIndex && other =  static_cast<QPersistentModelIndex &&>(*(QPersistentModelIndex *)this_);
  (void) ((QPersistentModelIndex*)this_)->operator=(other);
  // auto xptr = (QPersistentModelIndex & (QPersistentModelIndex::*)(QPersistentModelIndex&&) ) &QPersistentModelIndex::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:124
// [-2] void swap(QPersistentModelIndex &) 
// (12)qm2557149464 (35)_ZN21QPersistentModelIndex4swapERS_
//static
/*void qm2557149464(QPersistentModelIndex & other)*/ {
  QPersistentModelIndex & other = *(QPersistentModelIndex *)this_;
  (void) ((QPersistentModelIndex*)this_)->swap(other);
   auto xptr = (void (QPersistentModelIndex::*)(QPersistentModelIndex&) ) &QPersistentModelIndex::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QPersistentModelIndexD2Ev(void *this_)*/ {
  delete (QPersistentModelIndex*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpersistentmodelindex
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
