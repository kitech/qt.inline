// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qbytearray.h
// dst-file: /src/core/qbytearray.cxx
//

// header block begin =>
#include <qbytearray.h>

extern "C" {

  // proto:  void QByteArray::~QByteArray();
void _ZN10QByteArrayD0Ev(void *that)

{
  QByteArray *cthat = (QByteArray *)that;
   cthat->~QByteArray();
}

  // proto:  void QByteArray::QByteArray(QByteArray && other);
void _ZN10QByteArrayC1EOS_(void *that, QByteArray && other)

{
  QByteArray *cthat = (QByteArray *)that;
  auto _o = new(that) QByteArray(other);
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

  // proto:  int QByteArray::count();
int _ZNK10QByteArray5countEv(void *that)

{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->count();
}

  // proto:  void QByteArray::detach();
void _ZN10QByteArray6detachEv(void *that)

{
  QByteArray *cthat = (QByteArray *)that;
   cthat->detach();
}

  // proto:  bool QByteArray::isSharedWith(const QByteArray & other);
bool _ZNK10QByteArray12isSharedWithERKS_(void *that, const QByteArray & other)

{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->isSharedWith(other);
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

  // proto:  void QByteArray::swap(QByteArray & other);
void _ZN10QByteArray4swapERS_(void *that, QByteArray & other)

{
  QByteArray *cthat = (QByteArray *)that;
   cthat->swap(other);
}

  // proto:  void QByteArray::QByteArray(QByteArrayDataPtr dd);
void _ZN10QByteArrayC1E17QByteArrayDataPtr(void *that, QByteArrayDataPtr dd)

{
  QByteArray *cthat = (QByteArray *)that;
  auto _o = new(that) QByteArray(dd);
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

