// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
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

// QJsonObject(std::initializer_list<QPair<QString, QJsonValue> >)
QJsonObject* dector_ZN11QJsonObjectC1ESt16initializer_listI5QPairI7QString10QJsonValueEE(std::initializer_list<QPair<QString, QJsonValue> > args)
{
  // static_assert(sizeof(QJsonObject) == 32, "tyszerr");
  QJsonObject* rthis = new QJsonObject(args);
  return rthis;
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

  // proto:  int QJsonObject::length();
int demth_ZNK11QJsonObject6lengthEv(void *that)
{
  QJsonObject *cthat = (QJsonObject *)that;
  return cthat->length();
}

  // proto:  int QJsonObject::count();
int demth_ZNK11QJsonObject5countEv(void *that)
{
  QJsonObject *cthat = (QJsonObject *)that;
  return cthat->count();
}

  // proto:  bool QJsonObject::empty();
bool demth_ZNK11QJsonObject5emptyEv(void *that)
{
  QJsonObject *cthat = (QJsonObject *)that;
  return cthat->empty();
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

