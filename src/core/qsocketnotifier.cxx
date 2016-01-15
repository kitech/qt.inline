// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qsocketnotifier.h
// dst-file: /src/core/qsocketnotifier.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qsocketnotifier.h>

extern "C" {

int QSocketNotifier_Class_Size()
{
  return sizeof(QSocketNotifier);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsocketnotifier_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSocketNotifier_SlotProxy here
class QSocketNotifier_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSocketNotifier_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsocketnotifier.moc"

extern "C" {
  QSocketNotifier_SlotProxy* QSocketNotifier_SlotProxy_new()
  {
    return new QSocketNotifier_SlotProxy();
  }
};

// <= body block end

