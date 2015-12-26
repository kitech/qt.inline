// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qjsonarray.h
// dst-file: /src/core/qjsonarray.cxx
//

// header block begin =>
#include <qjsonarray.h>

extern "C" {

int QJsonArray_Class_Size()
{
  return sizeof(QJsonArray);
}

// ~QJsonArray()
void dedtor_ZN10QJsonArrayD0Ev(QJsonArray* that)
{
  QJsonArray* rthis = (QJsonArray*)that;
  delete rthis;
}

// QJsonArray()
QJsonArray* dector_ZN10QJsonArrayC1Ev()
{
  // static_assert(sizeof(QJsonArray) == 32, "tyszerr");
  QJsonArray* rthis = new QJsonArray();
  return rthis;
}

// QJsonArray(const class QJsonArray &)
QJsonArray* dector_ZN10QJsonArrayC1ERKS_(const QJsonArray & other)
{
  // static_assert(sizeof(QJsonArray) == 32, "tyszerr");
  QJsonArray* rthis = new QJsonArray(other);
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

