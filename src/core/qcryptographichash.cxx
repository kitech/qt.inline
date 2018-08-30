//  header block begin
// since 0x040300
// /usr/include/qt/QtCore/qcryptographichash.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcryptographichash.h>
#include <QtCore>
#include "callback_inherit.h"

// QCryptographicHash is pure virtual: false
// QCryptographicHash has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCryptographicHash_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCryptographicHash_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCryptographicHash_t qt_meta_stringdata_MyQCryptographicHash = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQCryptographicHash"
  },
  "MyQCryptographicHash"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCryptographicHash[] = {
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
class Q_DECL_EXPORT MyQCryptographicHash : public QCryptographicHash {
public:
  virtual ~MyQCryptographicHash() {}
// void QCryptographicHash(QCryptographicHash::Algorithm)
MyQCryptographicHash(QCryptographicHash::Algorithm method) : QCryptographicHash(method) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:92
// [-2] void QCryptographicHash(QCryptographicHash::Algorithm)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCryptographicHashC2ENS_9AlgorithmE(QCryptographicHash::Algorithm method) {
  return  new QCryptographicHash(method);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:93
// [-2] void ~QCryptographicHash()
extern "C" Q_DECL_EXPORT
void C_ZN18QCryptographicHashD2Ev(void *this_) {
  delete (QCryptographicHash*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:95
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN18QCryptographicHash5resetEv(void *this_) {
  ((QCryptographicHash*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:97
// [-2] void addData(const char *, int)
extern "C" Q_DECL_EXPORT
void C_ZN18QCryptographicHash7addDataEPKci(void *this_, const char * data, int length) {
  ((QCryptographicHash*)this_)->addData(data, length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:98
// [-2] void addData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCryptographicHash7addDataERK10QByteArray(void *this_, QByteArray* data) {
  ((QCryptographicHash*)this_)->addData(*data);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qcryptographichash.h:99
// [1] bool addData(QIODevice *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN18QCryptographicHash7addDataEP9QIODevice(void *this_, QIODevice * device) {
  return (bool)((QCryptographicHash*)this_)->addData(device);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:101
// [8] QByteArray result()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCryptographicHash6resultEv(void *this_) {
  auto rv = ((QCryptographicHash*)this_)->result();
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:103
// [8] QByteArray hash(const QByteArray &, QCryptographicHash::Algorithm)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCryptographicHash4hashERK10QByteArrayNS_9AlgorithmE(QByteArray* data, QCryptographicHash::Algorithm method) {
  auto rv = QCryptographicHash::hash(*data, method);
return new QByteArray(rv);
}

//  main block end
