// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
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
// <= body block end

