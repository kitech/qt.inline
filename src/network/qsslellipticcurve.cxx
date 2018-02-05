//  header block begin
// /usr/include/qt/QtNetwork/qsslellipticcurve.h
#include <qsslellipticcurve.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslEllipticCurve is pure virtual: false
// QSslEllipticCurve has virtual projected: false
//  header block end

//  main block begin

class MyQSslEllipticCurve : public QSslEllipticCurve {
public:
  virtual ~MyQSslEllipticCurve() {}
// void QSslEllipticCurve()
MyQSslEllipticCurve() : QSslEllipticCurve() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:59
// [-2] void QSslEllipticCurve()
extern "C"
void* C_ZN17QSslEllipticCurveC2Ev() {
  return  new QSslEllipticCurve();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:64
// [4] QSslEllipticCurve fromShortName(const class QString &)
extern "C"
void* C_ZN17QSslEllipticCurve13fromShortNameERK7QString(QString* name) {
  auto rv = QSslEllipticCurve::fromShortName(*name);
return new QSslEllipticCurve(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:65
// [4] QSslEllipticCurve fromLongName(const class QString &)
extern "C"
void* C_ZN17QSslEllipticCurve12fromLongNameERK7QString(QString* name) {
  auto rv = QSslEllipticCurve::fromLongName(*name);
return new QSslEllipticCurve(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:67
// [8] QString shortName()
extern "C"
void* C_ZNK17QSslEllipticCurve9shortNameEv(void *this_) {
  auto rv = ((QSslEllipticCurve*)this_)->shortName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:68
// [8] QString longName()
extern "C"
void* C_ZNK17QSslEllipticCurve8longNameEv(void *this_) {
  auto rv = ((QSslEllipticCurve*)this_)->longName();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:70
// [1] bool isValid()
extern "C"
bool C_ZNK17QSslEllipticCurve7isValidEv(void *this_) {
  return (bool)((QSslEllipticCurve*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:75
// [1] bool isTlsNamedCurve()
extern "C"
bool C_ZNK17QSslEllipticCurve15isTlsNamedCurveEv(void *this_) {
  return (bool)((QSslEllipticCurve*)this_)->isTlsNamedCurve();
}

extern "C"
void C_ZN17QSslEllipticCurveD2Ev(void *this_) {
  delete (QSslEllipticCurve*)(this_);
}
//  main block end
