// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qfileinfo.h
// dst-file: /src/core/qfileinfo.cxx
//

// header block begin =>
#include <qfileinfo.h>

extern "C" {

int QFileInfo_Class_Size()
{
  return sizeof(QFileInfo);
}

// QFileInfo()
QFileInfo* dector_ZN9QFileInfoC1Ev()
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo();
  return rthis;
}

// QFileInfo(const class QString &)
QFileInfo* dector_ZN9QFileInfoC1ERK7QString(const QString & file)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(file);
  return rthis;
}

// QFileInfo(const class QFile &)
QFileInfo* dector_ZN9QFileInfoC1ERK5QFile(const QFile & file)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(file);
  return rthis;
}

// QFileInfo(const class QFileInfo &)
QFileInfo* dector_ZN9QFileInfoC1ERKS_(const QFileInfo & fileinfo)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(fileinfo);
  return rthis;
}

// QFileInfo(const class QDir &, const class QString &)
QFileInfo* dector_ZN9QFileInfoC1ERK4QDirRK7QString(const QDir & dir, const QString & file)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(dir, file);
  return rthis;
}

// ~QFileInfo()
void dedtor_ZN9QFileInfoD0Ev(QFileInfo* that)
{
  QFileInfo* rthis = (QFileInfo*)that;
  delete rthis;
}

// QFileInfo(class QFileInfoPrivate *)
QFileInfo* dector_ZN9QFileInfoC1EP16QFileInfoPrivate(QFileInfoPrivate * d)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(d);
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

