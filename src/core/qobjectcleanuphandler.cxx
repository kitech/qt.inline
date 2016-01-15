// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qobjectcleanuphandler.h
// dst-file: /src/core/qobjectcleanuphandler.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qobjectcleanuphandler.h>

extern "C" {

int QObjectCleanupHandler_Class_Size()
{
  return sizeof(QObjectCleanupHandler);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qobjectcleanuphandler_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QObjectCleanupHandler_SlotProxy here
class QObjectCleanupHandler_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QObjectCleanupHandler_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qobjectcleanuphandler.moc"

extern "C" {
  QObjectCleanupHandler_SlotProxy* QObjectCleanupHandler_SlotProxy_new()
  {
    return new QObjectCleanupHandler_SlotProxy();
  }
};

// <= body block end

