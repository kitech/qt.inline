// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qjsonobject.h
// dst-file: /src/core/qjsonobject.cxx
//

// header block begin =>
#include <qjsonobject.h>

extern "C" {

int QJsonObject_Class_Size()
{
  return sizeof(QJsonObject);
}

// ~QJsonObject()
void dedtor_ZN11QJsonObjectD0Ev(QJsonObject* that)
{
  QJsonObject* rthis = (QJsonObject*)that;
  delete rthis;
}

// QJsonObject()
QJsonObject* dector_ZN11QJsonObjectC1Ev()
{
  // static_assert(sizeof(QJsonObject) == 32, "tyszerr");
  QJsonObject* rthis = new QJsonObject();
  return rthis;
}

// QJsonObject(const class QJsonObject &)
QJsonObject* dector_ZN11QJsonObjectC1ERKS_(const QJsonObject & other)
{
  // static_assert(sizeof(QJsonObject) == 32, "tyszerr");
  QJsonObject* rthis = new QJsonObject(other);
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

