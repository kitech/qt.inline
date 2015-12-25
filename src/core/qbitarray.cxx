// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qbitarray.h
// dst-file: /src/core/qbitarray.cxx
//

// header block begin =>
#include <qbitarray.h>

extern "C" {

// QBitArray(int, _Bool)
QBitArray* dector_ZN9QBitArrayC1Eib(int size, bool val)
{
  // static_assert(sizeof(QBitArray) == 32, "tyszerr");
  QBitArray* rthis = new QBitArray(size, val);
  return rthis;
}

  // proto:  bool QBitArray::fill(bool val, int size);
bool _ZN9QBitArray4fillEbi(void *that, bool val, int size)
{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->fill(val, size);
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

