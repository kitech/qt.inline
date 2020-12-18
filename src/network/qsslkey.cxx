//  header block begin

// /usr/include/qt/QtNetwork/qsslkey.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslkey.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslKey is pure virtual: false false
// QSslKey has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslKey_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslKey_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslKey_t qt_meta_stringdata_MyQSslKey = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQSslKey"
  },
  "MyQSslKey"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslKey[] = {
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
class Q_DECL_EXPORT MyQSslKey : public QSslKey {
public:
  virtual ~MyQSslKey() {}
// void QSslKey()
MyQSslKey() : QSslKey() {}
// void QSslKey(const QByteArray &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray &)
MyQSslKey(const QByteArray & encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, const QByteArray & passPhrase) : QSslKey(encoded, algorithm, format, type_, passPhrase) {}
// void QSslKey(QIODevice *, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray &)
MyQSslKey(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, const QByteArray & passPhrase) : QSslKey(device, algorithm, format, type_, passPhrase) {}
// void QSslKey(Qt::HANDLE, QSsl::KeyType)
MyQSslKey(Qt::HANDLE handle, QSsl::KeyType type_) : QSslKey(handle, type_) {}
// void QSslKey(const QSslKey &)
MyQSslKey(const QSslKey & other) : QSslKey(other) {}
// void QSslKey(QSslKey &&)
MyQSslKey(QSslKey && other) : QSslKey(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslkey(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:79
// [-2] void swap(QSslKey &) 
// (12)qm1162934692 (20)_ZN7QSslKey4swapERS_
//static
/*void qm1162934692(QSslKey & other)*/ {
  QSslKey & other = *(QSslKey *)this_;
  (void) ((QSslKey*)this_)->swap(other);
   auto xptr = (void (QSslKey::*)(QSslKey&) ) &QSslKey::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:94
// [1] bool operator!=(const QSslKey &) const
// (12)qm3738337952 (19)_ZNK7QSslKeyneERKS_
//static
/*void qm3738337952(const QSslKey & key)*/ {
  const QSslKey & key = *(const QSslKey *)this_;
  (void) ((QSslKey*)this_)->operator!=(key);
  // auto xptr = (bool (QSslKey::*)(QSslKey const&) const ) &QSslKey::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QSslKeyD2Ev(void *this_)*/ {
  delete (QSslKey*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslkey
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
