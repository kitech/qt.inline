// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qlockfile.h
// dst-file: /src/core/qlockfile.cxx
//

// header block begin =>
#include <qlockfile.h>

extern "C" {

int QLockFile_Class_Size()
{
  return sizeof(QLockFile);
}

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

