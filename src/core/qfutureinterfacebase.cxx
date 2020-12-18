//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(future)
// /usr/include/qt/QtCore/qfutureinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfutureinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureInterfaceBase is pure virtual: false false
// QFutureInterfaceBase has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFutureInterfaceBase_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFutureInterfaceBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFutureInterfaceBase_t qt_meta_stringdata_MyQFutureInterfaceBase = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQFutureInterfaceBase"
  },
  "MyQFutureInterfaceBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFutureInterfaceBase[] = {
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
class Q_DECL_EXPORT MyQFutureInterfaceBase : public QFutureInterfaceBase {
public:
  virtual ~MyQFutureInterfaceBase() {}
// void QFutureInterfaceBase(QFutureInterfaceBase::State)
MyQFutureInterfaceBase(QFutureInterfaceBase::State initialState) : QFutureInterfaceBase(initialState) {}
// void QFutureInterfaceBase(const QFutureInterfaceBase &)
MyQFutureInterfaceBase(const QFutureInterfaceBase & other) : QFutureInterfaceBase(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfutureinterfacebase(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:128
// [1] bool operator==(const QFutureInterfaceBase &) const
// (12)qm4067865451 (33)_ZNK20QFutureInterfaceBaseeqERKS_
//static
/*void qm4067865451(const QFutureInterfaceBase & other)*/ {
  const QFutureInterfaceBase & other = *(const QFutureInterfaceBase *)this_;
  (void) ((QFutureInterfaceBase*)this_)->operator==(other);
  // auto xptr = (bool (QFutureInterfaceBase::*)(QFutureInterfaceBase const&) const ) &QFutureInterfaceBase::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:129
// [1] bool operator!=(const QFutureInterfaceBase &) const
// (12)qm1748412188 (33)_ZNK20QFutureInterfaceBaseneERKS_
//static
/*void qm1748412188(const QFutureInterfaceBase & other)*/ {
  const QFutureInterfaceBase & other = *(const QFutureInterfaceBase *)this_;
  (void) ((QFutureInterfaceBase*)this_)->operator!=(other);
  // auto xptr = (bool (QFutureInterfaceBase::*)(QFutureInterfaceBase const&) const ) &QFutureInterfaceBase::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QFutureInterfaceBaseD2Ev(void *this_)*/ {
  delete (QFutureInterfaceBase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfutureinterfacebase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(future)
#endif // #ifndef QT_MINIMAL
//  footer block end
