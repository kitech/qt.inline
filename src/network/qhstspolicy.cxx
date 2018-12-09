//  header block begin

// since 0x050900
// /usr/include/qt/QtNetwork/qhstspolicy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhstspolicy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHstsPolicy is pure virtual: false
// QHstsPolicy has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHstsPolicy_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHstsPolicy_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHstsPolicy_t qt_meta_stringdata_MyQHstsPolicy = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQHstsPolicy"
  },
  "MyQHstsPolicy"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHstsPolicy[] = {
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
class Q_DECL_EXPORT MyQHstsPolicy : public QHstsPolicy {
public:
  virtual ~MyQHstsPolicy() {}
// void QHstsPolicy()
MyQHstsPolicy() : QHstsPolicy() {}
// void QHstsPolicy(const QDateTime &, QHstsPolicy::PolicyFlags, const QString &, QUrl::ParsingMode)
MyQHstsPolicy(const QDateTime & expiry, QFlags<QHstsPolicy::PolicyFlag> flags, const QString & host, QUrl::ParsingMode mode) : QHstsPolicy(expiry, flags, host, mode) {}
// void QHstsPolicy(const QHstsPolicy &)
MyQHstsPolicy(const QHstsPolicy & rhs) : QHstsPolicy(rhs) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:63
// [-2] void QHstsPolicy()
extern "C" Q_DECL_EXPORT
void* C_ZN11QHstsPolicyC2Ev() {
  return  new QHstsPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:64
// [-2] void QHstsPolicy(const QDateTime &, QHstsPolicy::PolicyFlags, const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHstsPolicyC2ERK9QDateTime6QFlagsINS_10PolicyFlagEERK7QStringN4QUrl11ParsingModeE(QDateTime* expiry, QFlags<QHstsPolicy::PolicyFlag> flags, QString* host, QUrl::ParsingMode mode) {
  return  new QHstsPolicy(*expiry, flags, *host, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:66
// [-2] void QHstsPolicy(const QHstsPolicy &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHstsPolicyC2ERKS_(QHstsPolicy* rhs) {
  return  new QHstsPolicy(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:67
// [8] QHstsPolicy & operator=(const QHstsPolicy &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHstsPolicyaSERKS_(void *this_, QHstsPolicy* rhs) {
  auto& rv = ((QHstsPolicy*)this_)->operator=(*rhs);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:68
// [8] QHstsPolicy & operator=(QHstsPolicy &&)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHstsPolicyaSEOS_(void *this_, QHstsPolicy && other) {
  auto& rv = ((QHstsPolicy*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:69
// [-2] void ~QHstsPolicy()
extern "C" Q_DECL_EXPORT
void C_ZN11QHstsPolicyD2Ev(void *this_) {
  delete (QHstsPolicy*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:71
// [-2] void swap(QHstsPolicy &)
extern "C" Q_DECL_EXPORT
void C_ZN11QHstsPolicy4swapERS_(void *this_, QHstsPolicy* other) {
  ((QHstsPolicy*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:73
// [-2] void setHost(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QHstsPolicy7setHostERK7QStringN4QUrl11ParsingModeE(void *this_, QString* host, QUrl::ParsingMode mode) {
  ((QHstsPolicy*)this_)->setHost(*host, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:74
// [8] QString host(QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHstsPolicy4hostE6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *this_, QFlags<QUrl::ComponentFormattingOption> options) {
  auto rv = ((QHstsPolicy*)this_)->host(options);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:75
// [-2] void setExpiry(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN11QHstsPolicy9setExpiryERK9QDateTime(void *this_, QDateTime* expiry) {
  ((QHstsPolicy*)this_)->setExpiry(*expiry);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:76
// [8] QDateTime expiry()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHstsPolicy6expiryEv(void *this_) {
  auto rv = ((QHstsPolicy*)this_)->expiry();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:77
// [-2] void setIncludesSubDomains(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QHstsPolicy21setIncludesSubDomainsEb(void *this_, bool include_) {
  ((QHstsPolicy*)this_)->setIncludesSubDomains(include_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:78
// [1] bool includesSubDomains()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHstsPolicy18includesSubDomainsEv(void *this_) {
  return (bool)((QHstsPolicy*)this_)->includesSubDomains();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:80
// [1] bool isExpired()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHstsPolicy9isExpiredEv(void *this_) {
  return (bool)((QHstsPolicy*)this_)->isExpired();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
