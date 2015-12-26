// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qtemporaryfile.h
// dst-file: /src/core/qtemporaryfile.cxx
//

// header block begin =>
#include <qtemporaryfile.h>

extern "C" {

int QTemporaryFile_Class_Size()
{
  return sizeof(QTemporaryFile);
}

// QTemporaryFile(const class QString &)
QTemporaryFile* dector_ZN14QTemporaryFileC1ERK7QString(const QString & templateName)
{
  // static_assert(sizeof(QTemporaryFile) == 32, "tyszerr");
  QTemporaryFile* rthis = new QTemporaryFile(templateName);
  return rthis;
}

// QTemporaryFile()
QTemporaryFile* dector_ZN14QTemporaryFileC1Ev()
{
  // static_assert(sizeof(QTemporaryFile) == 32, "tyszerr");
  QTemporaryFile* rthis = new QTemporaryFile();
  return rthis;
}

// QTemporaryFile(class QObject *)
QTemporaryFile* dector_ZN14QTemporaryFileC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QTemporaryFile) == 32, "tyszerr");
  QTemporaryFile* rthis = new QTemporaryFile(parent);
  return rthis;
}

// ~QTemporaryFile()
void dedtor_ZN14QTemporaryFileD0Ev(QTemporaryFile* that)
{
  QTemporaryFile* rthis = (QTemporaryFile*)that;
  delete rthis;
}

// QTemporaryFile(const class QString &, class QObject *)
QTemporaryFile* dector_ZN14QTemporaryFileC1ERK7QStringP7QObject(const QString & templateName, QObject * parent)
{
  // static_assert(sizeof(QTemporaryFile) == 32, "tyszerr");
  QTemporaryFile* rthis = new QTemporaryFile(templateName, parent);
  return rthis;
}

  // proto: static QTemporaryFile * QTemporaryFile::createLocalFile(QFile & file);
QTemporaryFile * demth_ZN14QTemporaryFile15createLocalFileER5QFile(void *that, QFile & file)
{
  QTemporaryFile *cthat = (QTemporaryFile *)that;
  return cthat->createLocalFile(file);
}

  // proto: static QTemporaryFile * QTemporaryFile::createNativeFile(const QString & fileName);
QTemporaryFile * demth_ZN14QTemporaryFile16createNativeFileERK7QString(void *that, const QString & fileName)
{
  QTemporaryFile *cthat = (QTemporaryFile *)that;
  return cthat->createNativeFile(fileName);
}

  // proto: static QTemporaryFile * QTemporaryFile::createLocalFile(const QString & fileName);
QTemporaryFile * demth_ZN14QTemporaryFile15createLocalFileERK7QString(void *that, const QString & fileName)
{
  QTemporaryFile *cthat = (QTemporaryFile *)that;
  return cthat->createLocalFile(fileName);
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

