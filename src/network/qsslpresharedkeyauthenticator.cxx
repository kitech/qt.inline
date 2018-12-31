//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(ssl)
// since 0x050500
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslpresharedkeyauthenticator.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslPreSharedKeyAuthenticator is pure virtual: false
// QSslPreSharedKeyAuthenticator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslPreSharedKeyAuthenticator_t {
  QByteArrayData data[1];
  char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslPreSharedKeyAuthenticator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslPreSharedKeyAuthenticator_t qt_meta_stringdata_MyQSslPreSharedKeyAuthenticator = {
   {
  QT_MOC_LITERAL(0, 0, 31), // "MyQSslPreSharedKeyAuthenticator"
  },
  "MyQSslPreSharedKeyAuthenticator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslPreSharedKeyAuthenticator[] = {
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
class Q_DECL_EXPORT MyQSslPreSharedKeyAuthenticator : public QSslPreSharedKeyAuthenticator {
public:
  virtual ~MyQSslPreSharedKeyAuthenticator() {}
// void QSslPreSharedKeyAuthenticator()
MyQSslPreSharedKeyAuthenticator() : QSslPreSharedKeyAuthenticator() {}
// void QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator &)
MyQSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator & authenticator) : QSslPreSharedKeyAuthenticator(authenticator) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:57
// [-2] void QSslPreSharedKeyAuthenticator()
extern "C" Q_DECL_EXPORT
void* C_ZN29QSslPreSharedKeyAuthenticatorC2Ev() {
  return  new QSslPreSharedKeyAuthenticator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:58
// [-2] void ~QSslPreSharedKeyAuthenticator()
extern "C" Q_DECL_EXPORT
void C_ZN29QSslPreSharedKeyAuthenticatorD2Ev(void *this_) {
  delete (QSslPreSharedKeyAuthenticator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:59
// [-2] void QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator &)
extern "C" Q_DECL_EXPORT
void* C_ZN29QSslPreSharedKeyAuthenticatorC2ERKS_(QSslPreSharedKeyAuthenticator* authenticator) {
  return  new QSslPreSharedKeyAuthenticator(*authenticator);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:60
// [8] QSslPreSharedKeyAuthenticator & operator=(const QSslPreSharedKeyAuthenticator &)
extern "C" Q_DECL_EXPORT
void* C_ZN29QSslPreSharedKeyAuthenticatoraSERKS_(void *this_, QSslPreSharedKeyAuthenticator* authenticator) {
  auto& rv = ((QSslPreSharedKeyAuthenticator*)this_)->operator=(*authenticator);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:63
// [8] QSslPreSharedKeyAuthenticator & operator=(QSslPreSharedKeyAuthenticator &&)
extern "C" Q_DECL_EXPORT
void* C_ZN29QSslPreSharedKeyAuthenticatoraSEOS_(void *this_, QSslPreSharedKeyAuthenticator && other) {
  auto& rv = ((QSslPreSharedKeyAuthenticator*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:66
// [-2] void swap(QSslPreSharedKeyAuthenticator &)
extern "C" Q_DECL_EXPORT
void C_ZN29QSslPreSharedKeyAuthenticator4swapERS_(void *this_, QSslPreSharedKeyAuthenticator* other) {
  ((QSslPreSharedKeyAuthenticator*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:68
// [8] QByteArray identityHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QSslPreSharedKeyAuthenticator12identityHintEv(void *this_) {
  auto rv = ((QSslPreSharedKeyAuthenticator*)this_)->identityHint();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:70
// [-2] void setIdentity(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN29QSslPreSharedKeyAuthenticator11setIdentityERK10QByteArray(void *this_, QByteArray* identity) {
  ((QSslPreSharedKeyAuthenticator*)this_)->setIdentity(*identity);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:71
// [8] QByteArray identity()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QSslPreSharedKeyAuthenticator8identityEv(void *this_) {
  auto rv = ((QSslPreSharedKeyAuthenticator*)this_)->identity();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:72
// [4] int maximumIdentityLength()
extern "C" Q_DECL_EXPORT
int C_ZNK29QSslPreSharedKeyAuthenticator21maximumIdentityLengthEv(void *this_) {
  return (int)((QSslPreSharedKeyAuthenticator*)this_)->maximumIdentityLength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:74
// [-2] void setPreSharedKey(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN29QSslPreSharedKeyAuthenticator15setPreSharedKeyERK10QByteArray(void *this_, QByteArray* preSharedKey) {
  ((QSslPreSharedKeyAuthenticator*)this_)->setPreSharedKey(*preSharedKey);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:75
// [8] QByteArray preSharedKey()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QSslPreSharedKeyAuthenticator12preSharedKeyEv(void *this_) {
  auto rv = ((QSslPreSharedKeyAuthenticator*)this_)->preSharedKey();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:76
// [4] int maximumPreSharedKeyLength()
extern "C" Q_DECL_EXPORT
int C_ZNK29QSslPreSharedKeyAuthenticator25maximumPreSharedKeyLengthEv(void *this_) {
  return (int)((QSslPreSharedKeyAuthenticator*)this_)->maximumPreSharedKeyLength();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(ssl)
#endif // #ifndef QT_MINIMAL
//  footer block end
