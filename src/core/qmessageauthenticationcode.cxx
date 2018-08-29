//  header block begin
// since 0x050100
// /usr/include/qt/QtCore/qmessageauthenticationcode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmessageauthenticationcode.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageAuthenticationCode is pure virtual: false
// QMessageAuthenticationCode has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMessageAuthenticationCode_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMessageAuthenticationCode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMessageAuthenticationCode_t qt_meta_stringdata_MyQMessageAuthenticationCode = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQMessageAuthenticationCode"
  },
  "MyQMessageAuthenticationCode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMessageAuthenticationCode[] = {
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
class Q_DECL_EXPORT MyQMessageAuthenticationCode : public QMessageAuthenticationCode {
public:
  virtual ~MyQMessageAuthenticationCode() {}
// void QMessageAuthenticationCode(QCryptographicHash::Algorithm, const QByteArray &)
MyQMessageAuthenticationCode(QCryptographicHash::Algorithm method, const QByteArray & key) : QMessageAuthenticationCode(method, key) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:54
// [-2] void QMessageAuthenticationCode(QCryptographicHash::Algorithm, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QMessageAuthenticationCodeC2EN18QCryptographicHash9AlgorithmERK10QByteArray(QCryptographicHash::Algorithm method, QByteArray* key) {
  return  new QMessageAuthenticationCode(method, *key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:56
// [-2] void ~QMessageAuthenticationCode()
extern "C" Q_DECL_EXPORT
void C_ZN26QMessageAuthenticationCodeD2Ev(void *this_) {
  delete (QMessageAuthenticationCode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:58
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN26QMessageAuthenticationCode5resetEv(void *this_) {
  ((QMessageAuthenticationCode*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:60
// [-2] void setKey(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN26QMessageAuthenticationCode6setKeyERK10QByteArray(void *this_, QByteArray* key) {
  ((QMessageAuthenticationCode*)this_)->setKey(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:62
// [-2] void addData(const char *, int)
extern "C" Q_DECL_EXPORT
void C_ZN26QMessageAuthenticationCode7addDataEPKci(void *this_, const char * data, int length) {
  ((QMessageAuthenticationCode*)this_)->addData(data, length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:63
// [-2] void addData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN26QMessageAuthenticationCode7addDataERK10QByteArray(void *this_, QByteArray* data) {
  ((QMessageAuthenticationCode*)this_)->addData(*data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:64
// [1] bool addData(QIODevice *)
extern "C" Q_DECL_EXPORT
bool C_ZN26QMessageAuthenticationCode7addDataEP9QIODevice(void *this_, QIODevice * device) {
  return (bool)((QMessageAuthenticationCode*)this_)->addData(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:66
// [8] QByteArray result()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QMessageAuthenticationCode6resultEv(void *this_) {
  auto rv = ((QMessageAuthenticationCode*)this_)->result();
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:68
// [8] QByteArray hash(const QByteArray &, const QByteArray &, QCryptographicHash::Algorithm)
extern "C" Q_DECL_EXPORT
void* C_ZN26QMessageAuthenticationCode4hashERK10QByteArrayS2_N18QCryptographicHash9AlgorithmE(QByteArray* message, QByteArray* key, QCryptographicHash::Algorithm method) {
  auto rv = QMessageAuthenticationCode::hash(*message, *key, method);
return new QByteArray(rv);
}

//  main block end
