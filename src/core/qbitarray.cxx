// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qbitarray.h
// dst-file: /src/core/qbitarray.cxx
//

// header block begin =>
#include <qbitarray.h>

extern "C" {

int QBitRef_Class_Size()
{
  return sizeof(QBitRef);
}

int QBitArray_Class_Size()
{
  return sizeof(QBitArray);
}

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

