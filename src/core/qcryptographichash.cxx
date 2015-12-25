// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qcryptographichash.h
// dst-file: /src/core/qcryptographichash.cxx
//

// header block begin =>
#include <qcryptographichash.h>

extern "C" {

// ~QCryptographicHash()
void dedtor_ZN18QCryptographicHashD0Ev(QCryptographicHash* that)
{
  QCryptographicHash* rthis = (QCryptographicHash*)that;
  delete rthis;
}

// QCryptographicHash(enum QCryptographicHash::Algorithm)
QCryptographicHash* dector_ZN18QCryptographicHashC1ENS_9AlgorithmE(QCryptographicHash::Algorithm method)
{
  // static_assert(sizeof(QCryptographicHash) == 32, "tyszerr");
  QCryptographicHash* rthis = new QCryptographicHash(method);
  return rthis;
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

