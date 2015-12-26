// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qdir.h
// dst-file: /src/core/qdir.cxx
//

// header block begin =>
#include <qdir.h>

extern "C" {

int QDir_Class_Size()
{
  return sizeof(QDir);
}

// QDir(const class QString &)
QDir* dector_ZN4QDirC1ERK7QString(const QString & path)
{
  // static_assert(sizeof(QDir) == 32, "tyszerr");
  QDir* rthis = new QDir(path);
  return rthis;
}

// QDir(const class QString &, const class QString &, SortFlags, Filters)
QDir* dector_ZN4QDirC1ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE(const QString & path, const QString & nameFilter, QDir::SortFlag sort, QDir::Filter filter)
{
  // static_assert(sizeof(QDir) == 32, "tyszerr");
  QDir* rthis = new QDir(path, nameFilter, sort, filter);
  return rthis;
}

// ~QDir()
void dedtor_ZN4QDirD0Ev(QDir* that)
{
  QDir* rthis = (QDir*)that;
  delete rthis;
}

// QDir(const class QDir &)
QDir* dector_ZN4QDirC1ERKS_(const QDir & arg1)
{
  // static_assert(sizeof(QDir) == 32, "tyszerr");
  QDir* rthis = new QDir(arg1);
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

