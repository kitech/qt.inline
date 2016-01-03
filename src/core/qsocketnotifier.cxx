// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qsocketnotifier.h
// dst-file: /src/core/qsocketnotifier.cxx
//

// header block begin =>
#include <qsocketnotifier.h>

extern "C" {

int QSocketNotifier_Class_Size()
{
  return sizeof(QSocketNotifier);
}

// QSocketNotifier(qintptr, enum QSocketNotifier::Type, class QObject *)
QSocketNotifier* dector_ZN15QSocketNotifierC1EiNS_4TypeEP7QObject(qptrdiff socket, QSocketNotifier::Type arg2, QObject * parent)
{
  // static_assert(sizeof(QSocketNotifier) == 32, "tyszerr");
  QSocketNotifier* rthis = new QSocketNotifier(socket, arg2, parent);
  return rthis;
}

// ~QSocketNotifier()
void dedtor_ZN15QSocketNotifierD0Ev(QSocketNotifier* that)
{
  QSocketNotifier* rthis = (QSocketNotifier*)that;
  delete rthis;
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

