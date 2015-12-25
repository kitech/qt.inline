// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qfile.h
// dst-file: /src/core/qfile.cxx
//

// header block begin =>
#include <qfile.h>

extern "C" {

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

