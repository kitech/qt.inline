//  header block begin

// since 0x050500
// /usr/include/qt/QtNetwork/qsslellipticcurve.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslellipticcurve.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslEllipticCurve is pure virtual: false
// QSslEllipticCurve has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslEllipticCurve_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslEllipticCurve_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslEllipticCurve_t qt_meta_stringdata_MyQSslEllipticCurve = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSslEllipticCurve"
  },
  "MyQSslEllipticCurve"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslEllipticCurve[] = {
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
class Q_DECL_EXPORT MyQSslEllipticCurve : public QSslEllipticCurve {
public:
  virtual ~MyQSslEllipticCurve() {}
// void QSslEllipticCurve()
MyQSslEllipticCurve() : QSslEllipticCurve() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:59
// [-2] void QSslEllipticCurve()
extern "C" Q_DECL_EXPORT
void* C_ZN17QSslEllipticCurveC2Ev() {
  return  new QSslEllipticCurve();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:64
// [4] QSslEllipticCurve fromShortName(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSslEllipticCurve13fromShortNameERK7QString(QString* name) {
  auto rv = QSslEllipticCurve::fromShortName(*name);
return new QSslEllipticCurve(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:65
// [4] QSslEllipticCurve fromLongName(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSslEllipticCurve12fromLongNameERK7QString(QString* name) {
  auto rv = QSslEllipticCurve::fromLongName(*name);
return new QSslEllipticCurve(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:67
// [8] QString shortName()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslEllipticCurve9shortNameEv(void *this_) {
  auto rv = ((QSslEllipticCurve*)this_)->shortName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:68
// [8] QString longName()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslEllipticCurve8longNameEv(void *this_) {
  auto rv = ((QSslEllipticCurve*)this_)->longName();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:70
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QSslEllipticCurve7isValidEv(void *this_) {
  return (bool)((QSslEllipticCurve*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:75
// [1] bool isTlsNamedCurve()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QSslEllipticCurve15isTlsNamedCurveEv(void *this_) {
  return (bool)((QSslEllipticCurve*)this_)->isTlsNamedCurve();
}


extern "C" Q_DECL_EXPORT
void C_ZN17QSslEllipticCurveD2Ev(void *this_) {
  delete (QSslEllipticCurve*)(this_);
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
