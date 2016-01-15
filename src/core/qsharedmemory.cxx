// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qsharedmemory.h
// dst-file: /src/core/qsharedmemory.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qsharedmemory.h>

extern "C" {

int QSharedMemory_Class_Size()
{
  return sizeof(QSharedMemory);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsharedmemory_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSharedMemory_SlotProxy here
class QSharedMemory_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSharedMemory_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsharedmemory.moc"

extern "C" {
  QSharedMemory_SlotProxy* QSharedMemory_SlotProxy_new()
  {
    return new QSharedMemory_SlotProxy();
  }
};

// <= body block end

