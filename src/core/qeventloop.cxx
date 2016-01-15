// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qeventloop.h
// dst-file: /src/core/qeventloop.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qeventloop.h>

extern "C" {

int QEventLoop_Class_Size()
{
  return sizeof(QEventLoop);
}

int QEventLoopLocker_Class_Size()
{
  return sizeof(QEventLoopLocker);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qeventloop_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QEventLoop_SlotProxy here
class QEventLoop_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QEventLoop_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qeventloop.moc"

extern "C" {
  QEventLoop_SlotProxy* QEventLoop_SlotProxy_new()
  {
    return new QEventLoop_SlotProxy();
  }
};

// <= body block end

