// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qresource.h
// dst-file: /src/core/qresource.cxx
//

// header block begin =>
#include <qresource.h>

extern "C" {

int QResource_Class_Size()
{
  return sizeof(QResource);
}

// QResource(const class QString &, const class QLocale &)
QResource* dector_ZN9QResourceC1ERK7QStringRK7QLocale(const QString & file, const QLocale & locale)
{
  // static_assert(sizeof(QResource) == 32, "tyszerr");
  QResource* rthis = new QResource(file, locale);
  return rthis;
}

// ~QResource()
void dedtor_ZN9QResourceD0Ev(QResource* that)
{
  QResource* rthis = (QResource*)that;
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

