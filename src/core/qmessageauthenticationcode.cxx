// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtCore/qmessageauthenticationcode.h
// dst-file: /src/core/qmessageauthenticationcode.cxx
//

// header block begin =>
#include <qmessageauthenticationcode.h>

extern "C" {

int QMessageAuthenticationCode_Class_Size()
{
  return sizeof(QMessageAuthenticationCode);
}

// QMessageAuthenticationCode(class QCryptographicHash::Algorithm, const class QByteArray &)
QMessageAuthenticationCode* dector_ZN26QMessageAuthenticationCodeC1EN18QCryptographicHash9AlgorithmERK10QByteArray(QCryptographicHash::Algorithm method, const QByteArray & key)
{
  // static_assert(sizeof(QMessageAuthenticationCode) == 32, "tyszerr");
  QMessageAuthenticationCode* rthis = new QMessageAuthenticationCode(method, key);
  return rthis;
}

// ~QMessageAuthenticationCode()
void dedtor_ZN26QMessageAuthenticationCodeD0Ev(QMessageAuthenticationCode* that)
{
  QMessageAuthenticationCode* rthis = (QMessageAuthenticationCode*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

