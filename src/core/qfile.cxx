// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qfile.h
// dst-file: /src/core/qfile.cxx
//

// header block begin =>
#include <qfile.h>

extern "C" {

  // proto:  QString QFile::symLinkTarget();
QString* _ZNK5QFile13symLinkTargetEv(void *that)

{
  QFile *cthat = (QFile *)that;
  auto recret = cthat->symLinkTarget();
  return new QString(recret);
}

  // proto: static QByteArray QFile::encodeName(const QString & fileName);
QByteArray* _ZN5QFile10encodeNameERK7QString(void *that, const QString & fileName)

{
  QFile *cthat = (QFile *)that;
  auto recret = cthat->encodeName(fileName);
  return new QByteArray(recret);
}

  // proto: static QString QFile::decodeName(const char * localFileName);
QString* _ZN5QFile10decodeNameEPKc(void *that, const char * localFileName)

{
  QFile *cthat = (QFile *)that;
  auto recret = cthat->decodeName(localFileName);
  return new QString(recret);
}

  // proto: static QString QFile::symLinkTarget(const QString & fileName);
QString* _ZN5QFile13symLinkTargetERK7QString(void *that, const QString & fileName)

{
  QFile *cthat = (QFile *)that;
  auto recret = cthat->symLinkTarget(fileName);
  return new QString(recret);
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

