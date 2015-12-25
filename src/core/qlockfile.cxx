// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qlockfile.h
// dst-file: /src/core/qlockfile.cxx
//

// header block begin =>
#include <qlockfile.h>

extern "C" {

// ~QLockFile()
void dedtor_ZN9QLockFileD0Ev(QLockFile* that)
{
  QLockFile* rthis = (QLockFile*)that;
  delete rthis;
}

// QLockFile(const class QString &)
QLockFile* dector_ZN9QLockFileC1ERK7QString(const QString & fileName)
{
  // static_assert(sizeof(QLockFile) == 32, "tyszerr");
  QLockFile* rthis = new QLockFile(fileName);
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

