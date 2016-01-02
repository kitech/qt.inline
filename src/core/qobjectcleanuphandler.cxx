// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qobjectcleanuphandler.h
// dst-file: /src/core/qobjectcleanuphandler.cxx
//

// header block begin =>
#include <qobjectcleanuphandler.h>

extern "C" {

int QObjectCleanupHandler_Class_Size()
{
  return sizeof(QObjectCleanupHandler);
}

// ~QObjectCleanupHandler()
void dedtor_ZN21QObjectCleanupHandlerD0Ev(QObjectCleanupHandler* that)
{
  QObjectCleanupHandler* rthis = (QObjectCleanupHandler*)that;
  delete rthis;
}

// QObjectCleanupHandler()
QObjectCleanupHandler* dector_ZN21QObjectCleanupHandlerC1Ev()
{
  // static_assert(sizeof(QObjectCleanupHandler) == 32, "tyszerr");
  QObjectCleanupHandler* rthis = new QObjectCleanupHandler();
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

