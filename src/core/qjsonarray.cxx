// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
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

// QJsonArray(std::initializer_list<QJsonValue>)
QJsonArray* dector_ZN10QJsonArrayC1ESt16initializer_listI10QJsonValueE(std::initializer_list<QJsonValue> args)
{
  // static_assert(sizeof(QJsonArray) == 32, "tyszerr");
  QJsonArray* rthis = new QJsonArray(args);
  return rthis;
}

// QJsonArray(const class QJsonArray &)
QJsonArray* dector_ZN10QJsonArrayC1ERKS_(const QJsonArray & other)
{
  // static_assert(sizeof(QJsonArray) == 32, "tyszerr");
  QJsonArray* rthis = new QJsonArray(other);
  return rthis;
}

  // proto:  bool QJsonArray::empty();
bool demth_ZNK10QJsonArray5emptyEv(void *that)
{
  QJsonArray *cthat = (QJsonArray *)that;
  return cthat->empty();
}

  // proto:  void QJsonArray::push_back(const QJsonValue & t);
void demth_ZN10QJsonArray9push_backERK10QJsonValue(void *that, const QJsonValue & t)
{
  QJsonArray *cthat = (QJsonArray *)that;
   cthat->push_back(t);
}

  // proto:  void QJsonArray::removeLast();
void demth_ZN10QJsonArray10removeLastEv(void *that)
{
  QJsonArray *cthat = (QJsonArray *)that;
   cthat->removeLast();
}

  // proto:  void QJsonArray::push_front(const QJsonValue & t);
void demth_ZN10QJsonArray10push_frontERK10QJsonValue(void *that, const QJsonValue & t)
{
  QJsonArray *cthat = (QJsonArray *)that;
   cthat->push_front(t);
}

  // proto:  void QJsonArray::pop_front();
void demth_ZN10QJsonArray9pop_frontEv(void *that)
{
  QJsonArray *cthat = (QJsonArray *)that;
   cthat->pop_front();
}

  // proto:  int QJsonArray::count();
int demth_ZNK10QJsonArray5countEv(void *that)
{
  QJsonArray *cthat = (QJsonArray *)that;
  return cthat->count();
}

  // proto:  void QJsonArray::pop_back();
void demth_ZN10QJsonArray8pop_backEv(void *that)
{
  QJsonArray *cthat = (QJsonArray *)that;
   cthat->pop_back();
}

  // proto:  void QJsonArray::removeFirst();
void demth_ZN10QJsonArray11removeFirstEv(void *that)
{
  QJsonArray *cthat = (QJsonArray *)that;
   cthat->removeFirst();
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

