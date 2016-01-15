// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qthread.h
// dst-file: /src/core/qthread.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qthread.h>

extern "C" {

int QThread_Class_Size()
{
  return sizeof(QThread);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qthread_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QThread_SlotProxy here
class QThread_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QThread_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qthread.moc"

extern "C" {
  QThread_SlotProxy* QThread_SlotProxy_new()
  {
    return new QThread_SlotProxy();
  }
};

// <= body block end

