// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qbackingstore.h
// dst-file: /src/gui/qbackingstore.cxx
//

// header block begin =>
#include <qbackingstore.h>

extern "C" {

// ~QBackingStore()
void dedtor_ZN13QBackingStoreD0Ev(QBackingStore* that)
{
  QBackingStore* rthis = (QBackingStore*)that;
  delete rthis;
}

// QBackingStore(class QWindow *)
QBackingStore* dector_ZN13QBackingStoreC1EP7QWindow(QWindow * window)
{
  // static_assert(sizeof(QBackingStore) == 32, "tyszerr");
  QBackingStore* rthis = new QBackingStore(window);
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

