//  header block begin

// /usr/include/qt/QtNetwork/qauthenticator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qauthenticator.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QAuthenticator is pure virtual: false false
// QAuthenticator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAuthenticator_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAuthenticator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAuthenticator_t qt_meta_stringdata_MyQAuthenticator = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQAuthenticator"
  },
  "MyQAuthenticator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAuthenticator[] = {
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
class Q_DECL_EXPORT MyQAuthenticator : public QAuthenticator {
public:
  virtual ~MyQAuthenticator() {}
// void QAuthenticator()
MyQAuthenticator() : QAuthenticator() {}
// void QAuthenticator(const QAuthenticator &)
MyQAuthenticator(const QAuthenticator & other) : QAuthenticator(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qauthenticator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:63
// [1] bool operator!=(const QAuthenticator &) const
// (12)qm2726230712 (27)_ZNK14QAuthenticatorneERKS_
//static
/*void qm2726230712(const QAuthenticator & other)*/ {
  const QAuthenticator & other = *(const QAuthenticator *)this_;
  (void) ((QAuthenticator*)this_)->operator!=(other);
  // auto xptr = (bool (QAuthenticator::*)(QAuthenticator const&) const ) &QAuthenticator::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QAuthenticatorD2Ev(void *this_)*/ {
  delete (QAuthenticator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qauthenticator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
