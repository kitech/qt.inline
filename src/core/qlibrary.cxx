// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qlibrary.h
// dst-file: /src/core/qlibrary.cxx
//

// header block begin =>
#include <qlibrary.h>

extern "C" {

// QLibrary(const class QString &, const class QString &, class QObject *)
QLibrary* dector_ZN8QLibraryC1ERK7QStringS2_P7QObject(const QString & fileName, const QString & version, QObject * parent)
{
  // static_assert(sizeof(QLibrary) == 32, "tyszerr");
  QLibrary* rthis = new QLibrary(fileName, version, parent);
  return rthis;
}

// QLibrary(const class QString &, int, class QObject *)
QLibrary* dector_ZN8QLibraryC1ERK7QStringiP7QObject(const QString & fileName, int verNum, QObject * parent)
{
  // static_assert(sizeof(QLibrary) == 32, "tyszerr");
  QLibrary* rthis = new QLibrary(fileName, verNum, parent);
  return rthis;
}

// QLibrary(class QObject *)
QLibrary* dector_ZN8QLibraryC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QLibrary) == 32, "tyszerr");
  QLibrary* rthis = new QLibrary(parent);
  return rthis;
}

// QLibrary(const class QString &, class QObject *)
QLibrary* dector_ZN8QLibraryC1ERK7QStringP7QObject(const QString & fileName, QObject * parent)
{
  // static_assert(sizeof(QLibrary) == 32, "tyszerr");
  QLibrary* rthis = new QLibrary(fileName, parent);
  return rthis;
}

// ~QLibrary()
void dedtor_ZN8QLibraryD0Ev(QLibrary* that)
{
  QLibrary* rthis = (QLibrary*)that;
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

