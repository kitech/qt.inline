// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
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

  // proto:  void QSignalBlocker::QSignalBlocker(QObject & o);
void _ZN14QSignalBlockerC1ER7QObject(void *that, QObject & o)

{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
  auto _o = new(that) QSignalBlocker(o);
}

  // proto:  void QSignalBlocker::QSignalBlocker(QObject * o);
void _ZN14QSignalBlockerC1EP7QObject(void *that, QObject * o)

{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
  auto _o = new(that) QSignalBlocker(o);
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

  // proto:  void QSignalBlocker::QSignalBlocker(QSignalBlocker && other);
    /*
void _ZN14QSignalBlockerC1EOS_(void *that, QSignalBlocker && other)

{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
  auto _o = new(that) QSignalBlocker(other);
}
    */

  // proto:  bool QObject::inherits(const char * classname);
bool _ZNK7QObject8inheritsEPKc(void *that, const char * classname)

{
  QObject *cthat = (QObject *)that;
  return cthat->inherits(classname);
}

  // proto:  bool QObject::isWidgetType();
bool _ZNK7QObject12isWidgetTypeEv(void *that)

{
  QObject *cthat = (QObject *)that;
  return cthat->isWidgetType();
}

  // proto:  bool QObject::disconnect(const QObject * receiver, const char * member);
bool _ZNK7QObject10disconnectEPKS_PKc(void *that, const QObject * receiver, const char * member)

{
  QObject *cthat = (QObject *)that;
  return cthat->disconnect(receiver, member);
}

  // proto:  const QObjectList & QObject::children();
const QObjectList * _ZNK7QObject8childrenEv(void *that)

{
  QObject *cthat = (QObject *)that;
  return &cthat->children();
}

  // proto:  bool QObject::isWindowType();
bool _ZNK7QObject12isWindowTypeEv(void *that)

{
  QObject *cthat = (QObject *)that;
  return cthat->isWindowType();
}

  // proto:  bool QObject::disconnect(const char * signal, const QObject * receiver, const char * member);
bool _ZNK7QObject10disconnectEPKcPKS_S1_(void *that, const char * signal, const QObject * receiver, const char * member)

{
  QObject *cthat = (QObject *)that;
  return cthat->disconnect(signal, receiver, member);
}

  // proto:  bool QObject::signalsBlocked();
bool _ZNK7QObject14signalsBlockedEv(void *that)

{
  QObject *cthat = (QObject *)that;
  return cthat->signalsBlocked();
}

  // proto:  QObject * QObject::parent();
QObject * _ZNK7QObject6parentEv(void *that)

{
  QObject *cthat = (QObject *)that;
  return cthat->parent();
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

