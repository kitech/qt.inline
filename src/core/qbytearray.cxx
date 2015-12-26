// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qbytearray.h
// dst-file: /src/core/qbytearray.cxx
//

// header block begin =>
#include <qbytearray.h>

extern "C" {

int QByteRef_Class_Size()
{
  return sizeof(QByteRef);
}

int QByteArray_Class_Size()
{
  return sizeof(QByteArray);
}

// ~QByteArray()
void dedtor_ZN10QByteArrayD0Ev(QByteArray* that)
{
  QByteArray* rthis = (QByteArray*)that;
  delete rthis;
}

// QByteArray()
QByteArray* dector_ZN10QByteArrayC1Ev()
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray();
  return rthis;
}

// QByteArray(int, char)
QByteArray* dector_ZN10QByteArrayC1Eic(int size, char c)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(size, c);
  return rthis;
}

// QByteArray(const char *, int)
QByteArray* dector_ZN10QByteArrayC1EPKci(const char * arg1, int size)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(arg1, size);
  return rthis;
}

// QByteArray(const class QByteArray &)
QByteArray* dector_ZN10QByteArrayC1ERKS_(const QByteArray & arg1)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(arg1);
  return rthis;
}

// QByteArray(int, Qt::Initialization)
QByteArray* dector_ZN10QByteArrayC1EiN2Qt14InitializationE(int size, Qt::Initialization arg2)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(size, arg2);
  return rthis;
}

  // proto:  void QByteArray::~QByteArray();
void _ZN10QByteArrayD0Ev(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->~QByteArray();
}

  // proto:  void QByteArray::QByteArray();
void _ZN10QByteArrayC1Ev(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto _o = new(that) QByteArray();
}

  // proto: static QByteArray QByteArray::fromStdString(const std::string & s);
QByteArray* _ZN10QByteArray13fromStdStringERKi(void *that, const std::string & s)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->fromStdString(s);
  return new QByteArray(recret);
}

  // proto:  void QByteArray::detach();
void _ZN10QByteArray6detachEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->detach();
}

  // proto:  int QByteArray::size();
int _ZNK10QByteArray4sizeEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->size();
}

  // proto:  const char * QByteArray::constData();
const char * _ZNK10QByteArray9constDataEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->constData();
}

  // proto:  void QByteArray::QByteArray(const QByteArray & );
void _ZN10QByteArrayC1ERKS_(void *that, const QByteArray & arg1)
{
  QByteArray *cthat = (QByteArray *)that;
  auto _o = new(that) QByteArray(arg1);
}

int QByteArrayDataPtr_Class_Size()
{
  return sizeof(QByteArrayDataPtr);
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

