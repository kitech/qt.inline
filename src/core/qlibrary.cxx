// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qlibrary.h
// dst-file: /src/core/qlibrary.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qlibrary.h>

extern "C" {

int QLibrary_Class_Size()
{
  return sizeof(QLibrary);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qlibrary_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QLibrary_SlotProxy here
class QLibrary_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLibrary_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qlibrary.moc"

extern "C" {
  QLibrary_SlotProxy* QLibrary_SlotProxy_new()
  {
    return new QLibrary_SlotProxy();
  }
};

// <= body block end

