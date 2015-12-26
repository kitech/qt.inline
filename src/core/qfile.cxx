// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qfile.h
// dst-file: /src/core/qfile.cxx
//

// header block begin =>
#include <qfile.h>

extern "C" {

int QFile_Class_Size()
{
  return sizeof(QFile);
}

// QFile()
QFile* dector_ZN5QFileC1Ev()
{
  // static_assert(sizeof(QFile) == 32, "tyszerr");
  QFile* rthis = new QFile();
  return rthis;
}

// QFile(class QObject *)
QFile* dector_ZN5QFileC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QFile) == 32, "tyszerr");
  QFile* rthis = new QFile(parent);
  return rthis;
}

// ~QFile()
void dedtor_ZN5QFileD0Ev(QFile* that)
{
  QFile* rthis = (QFile*)that;
  delete rthis;
}

// QFile(const class QString &, class QObject *)
QFile* dector_ZN5QFileC1ERK7QStringP7QObject(const QString & name, QObject * parent)
{
  // static_assert(sizeof(QFile) == 32, "tyszerr");
  QFile* rthis = new QFile(name, parent);
  return rthis;
}

// QFile(const class QString &)
QFile* dector_ZN5QFileC1ERK7QString(const QString & name)
{
  // static_assert(sizeof(QFile) == 32, "tyszerr");
  QFile* rthis = new QFile(name);
  return rthis;
}

  // proto:  QString QFile::symLinkTarget();
QString* demth_ZNK5QFile13symLinkTargetEv(void *that)
{
  QFile *cthat = (QFile *)that;
  auto recret = cthat->symLinkTarget();
  return new QString(recret);
}

  // proto: static QByteArray QFile::encodeName(const QString & fileName);
QByteArray* demth_ZN5QFile10encodeNameERK7QString(void *that, const QString & fileName)
{
  QFile *cthat = (QFile *)that;
  auto recret = cthat->encodeName(fileName);
  return new QByteArray(recret);
}

  // proto: static QString QFile::decodeName(const char * localFileName);
QString* demth_ZN5QFile10decodeNameEPKc(void *that, const char * localFileName)
{
  QFile *cthat = (QFile *)that;
  auto recret = cthat->decodeName(localFileName);
  return new QString(recret);
}

  // proto: static QString QFile::symLinkTarget(const QString & fileName);
QString* demth_ZN5QFile13symLinkTargetERK7QString(void *that, const QString & fileName)
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

