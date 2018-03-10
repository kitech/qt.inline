//  header block begin
// since 0x050500
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h
#ifndef protected
#define protected public
#endif
#include <qsslpresharedkeyauthenticator.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslPreSharedKeyAuthenticator is pure virtual: false
// QSslPreSharedKeyAuthenticator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSslPreSharedKeyAuthenticator : public QSslPreSharedKeyAuthenticator {
public:
  virtual ~MyQSslPreSharedKeyAuthenticator() {}
// void QSslPreSharedKeyAuthenticator()
MyQSslPreSharedKeyAuthenticator() : QSslPreSharedKeyAuthenticator() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:55
// [-2] void QSslPreSharedKeyAuthenticator()
extern "C" Q_DECL_EXPORT
void* C_ZN29QSslPreSharedKeyAuthenticatorC2Ev() {
  return  new QSslPreSharedKeyAuthenticator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:56
// [-2] void ~QSslPreSharedKeyAuthenticator()
extern "C" Q_DECL_EXPORT
void C_ZN29QSslPreSharedKeyAuthenticatorD2Ev(void *this_) {
  delete (QSslPreSharedKeyAuthenticator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:58
// [8] QSslPreSharedKeyAuthenticator & operator=(const class QSslPreSharedKeyAuthenticator &)
extern "C" Q_DECL_EXPORT
void* C_ZN29QSslPreSharedKeyAuthenticatoraSERKS_(void *this_, QSslPreSharedKeyAuthenticator* authenticator) {
  auto& rv = ((QSslPreSharedKeyAuthenticator*)this_)->operator=(*authenticator);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:61
// [8] QSslPreSharedKeyAuthenticator & operator=(class QSslPreSharedKeyAuthenticator &&)
extern "C" Q_DECL_EXPORT
void* C_ZN29QSslPreSharedKeyAuthenticatoraSEOS_(void *this_, QSslPreSharedKeyAuthenticator && other) {
  auto& rv = ((QSslPreSharedKeyAuthenticator*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:64
// [-2] void swap(class QSslPreSharedKeyAuthenticator &)
extern "C" Q_DECL_EXPORT
void C_ZN29QSslPreSharedKeyAuthenticator4swapERS_(void *this_, QSslPreSharedKeyAuthenticator* other) {
  ((QSslPreSharedKeyAuthenticator*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:66
// [8] QByteArray identityHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QSslPreSharedKeyAuthenticator12identityHintEv(void *this_) {
  auto rv = ((QSslPreSharedKeyAuthenticator*)this_)->identityHint();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:68
// [-2] void setIdentity(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN29QSslPreSharedKeyAuthenticator11setIdentityERK10QByteArray(void *this_, QByteArray* identity) {
  ((QSslPreSharedKeyAuthenticator*)this_)->setIdentity(*identity);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:69
// [8] QByteArray identity()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QSslPreSharedKeyAuthenticator8identityEv(void *this_) {
  auto rv = ((QSslPreSharedKeyAuthenticator*)this_)->identity();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:70
// [4] int maximumIdentityLength()
extern "C" Q_DECL_EXPORT
int C_ZNK29QSslPreSharedKeyAuthenticator21maximumIdentityLengthEv(void *this_) {
  return (int)((QSslPreSharedKeyAuthenticator*)this_)->maximumIdentityLength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:72
// [-2] void setPreSharedKey(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN29QSslPreSharedKeyAuthenticator15setPreSharedKeyERK10QByteArray(void *this_, QByteArray* preSharedKey) {
  ((QSslPreSharedKeyAuthenticator*)this_)->setPreSharedKey(*preSharedKey);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:73
// [8] QByteArray preSharedKey()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QSslPreSharedKeyAuthenticator12preSharedKeyEv(void *this_) {
  auto rv = ((QSslPreSharedKeyAuthenticator*)this_)->preSharedKey();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:74
// [4] int maximumPreSharedKeyLength()
extern "C" Q_DECL_EXPORT
int C_ZNK29QSslPreSharedKeyAuthenticator25maximumPreSharedKeyLengthEv(void *this_) {
  return (int)((QSslPreSharedKeyAuthenticator*)this_)->maximumPreSharedKeyLength();
}

//  main block end
