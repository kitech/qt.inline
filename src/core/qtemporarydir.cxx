// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qtemporarydir.h
// dst-file: /src/core/qtemporarydir.cxx
//

// header block begin =>
#include <qtemporarydir.h>

extern "C" {

// ~QTemporaryDir()
void dedtor_ZN13QTemporaryDirD0Ev(QTemporaryDir* that)
{
  QTemporaryDir* rthis = (QTemporaryDir*)that;
  delete rthis;
}

// QTemporaryDir()
QTemporaryDir* dector_ZN13QTemporaryDirC1Ev()
{
  // static_assert(sizeof(QTemporaryDir) == 32, "tyszerr");
  QTemporaryDir* rthis = new QTemporaryDir();
  return rthis;
}

// QTemporaryDir(const class QString &)
QTemporaryDir* dector_ZN13QTemporaryDirC1ERK7QString(const QString & templateName)
{
  // static_assert(sizeof(QTemporaryDir) == 32, "tyszerr");
  QTemporaryDir* rthis = new QTemporaryDir(templateName);
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

