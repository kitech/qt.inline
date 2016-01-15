// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qthreadpool.h
// dst-file: /src/core/qthreadpool.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qthreadpool.h>

extern "C" {

int QThreadPool_Class_Size()
{
  return sizeof(QThreadPool);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qthreadpool_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QThreadPool_SlotProxy here
class QThreadPool_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QThreadPool_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qthreadpool.moc"

extern "C" {
  QThreadPool_SlotProxy* QThreadPool_SlotProxy_new()
  {
    return new QThreadPool_SlotProxy();
  }
};

// <= body block end

