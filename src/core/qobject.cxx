// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qobject.h
// dst-file: /src/core/qobject.cxx
//

// header block begin =>
#include <qobject.h>

extern "C" {

  // proto:  void QSignalBlocker::unblock();
void _ZN14QSignalBlocker7unblockEv(void *that)
{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
   cthat->unblock();
}

  // proto:  void QSignalBlocker::reblock();
void _ZN14QSignalBlocker7reblockEv(void *that)
{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
   cthat->reblock();
}

  // proto:  void QSignalBlocker::~QSignalBlocker();
void _ZN14QSignalBlockerD0Ev(void *that)
{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
   cthat->~QSignalBlocker();
}

// ~QObjectUserData()
void dedtor_ZN15QObjectUserDataD0Ev(QObjectUserData* that)
{
  QObjectUserData* rthis = (QObjectUserData*)that;
  delete rthis;
}

// ~QObject()
void dedtor_ZN7QObjectD0Ev(QObject* that)
{
  QObject* rthis = (QObject*)that;
  delete rthis;
}

// QObject(class QObject *)
QObject* dector_ZN7QObjectC1EPS_(QObject * parent)
{
  // static_assert(sizeof(QObject) == 32, "tyszerr");
  QObject* rthis = new QObject(parent);
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
// <= body block end

