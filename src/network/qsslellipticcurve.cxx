// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslellipticcurve.h
// dst-file: /src/network/qsslellipticcurve.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslellipticcurve.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qsslellipticcurve_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 50, column 22>
//   // proto:  void QSslEllipticCurve::QSslEllipticCurve();
if (true) {
  auto f = []() {
    new QSslEllipticCurve();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 61, column 27>
//   // proto:  bool QSslEllipticCurve::isValid();
if (true) {
  auto f = [](QSslEllipticCurve flythis) {
    ((QSslEllipticCurve*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK17QSslEllipticCurve7isValidEv isValid()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslEllipticCurve_Class_Size()
{
  return sizeof(QSslEllipticCurve);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 50, column 22>
//   // proto:  void QSslEllipticCurve::QSslEllipticCurve();
extern "C"
QSslEllipticCurve*
C_ZN17QSslEllipticCurveC2Ev() {
  auto ret = new QSslEllipticCurve();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 66, column 27>
//   // proto:  bool QSslEllipticCurve::isTlsNamedCurve();
// _ZNK17QSslEllipticCurve15isTlsNamedCurveEv isTlsNamedCurve()
extern "C"
bool
C_ZNK17QSslEllipticCurve15isTlsNamedCurveEv(void *qthis) {
  auto ret =
  ((QSslEllipticCurve*)qthis)->isTlsNamedCurve();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 55, column 47>
//   // proto: static QSslEllipticCurve QSslEllipticCurve::fromShortName(const QString & name);
// _ZN17QSslEllipticCurve13fromShortNameERK7QString fromShortName(const class QString &)
extern "C"
QSslEllipticCurve*
C_ZN17QSslEllipticCurve13fromShortNameERK7QString(const QString* arg1) {
  auto ret =
  QSslEllipticCurve::fromShortName(*((const QString*)arg1));
  return new QSslEllipticCurve(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 61, column 27>
//   // proto:  bool QSslEllipticCurve::isValid();
// _ZNK17QSslEllipticCurve7isValidEv isValid()
extern "C"
bool
C_ZNK17QSslEllipticCurve7isValidEv(void *qthis) {
  auto ret =
  ((QSslEllipticCurve*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 59, column 30>
//   // proto:  QString QSslEllipticCurve::longName();
// _ZNK17QSslEllipticCurve8longNameEv longName()
extern "C"
QString*
C_ZNK17QSslEllipticCurve8longNameEv(void *qthis) {
  auto ret =
  ((QSslEllipticCurve*)qthis)->longName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 58, column 30>
//   // proto:  QString QSslEllipticCurve::shortName();
// _ZNK17QSslEllipticCurve9shortNameEv shortName()
extern "C"
QString*
C_ZNK17QSslEllipticCurve9shortNameEv(void *qthis) {
  auto ret =
  ((QSslEllipticCurve*)qthis)->shortName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslellipticcurve.h', line 56, column 47>
//   // proto: static QSslEllipticCurve QSslEllipticCurve::fromLongName(const QString & name);
// _ZN17QSslEllipticCurve12fromLongNameERK7QString fromLongName(const class QString &)
extern "C"
QSslEllipticCurve*
C_ZN17QSslEllipticCurve12fromLongNameERK7QString(const QString* arg1) {
  auto ret =
  QSslEllipticCurve::fromLongName(*((const QString*)arg1));
  return new QSslEllipticCurve(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

