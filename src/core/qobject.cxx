// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qobject.h
// dst-file: /src/core/qobject.cxx
//

// header block begin =>
#include <qobject.h>

extern "C" {

int QSignalBlocker_Class_Size()
{
  return sizeof(QSignalBlocker);
}

  // proto:  void QSignalBlocker::unblock();
void demth_ZN14QSignalBlocker7unblockEv(void *that)
{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
   cthat->unblock();
}

  // proto:  void QSignalBlocker::reblock();
void demth_ZN14QSignalBlocker7reblockEv(void *that)
{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
   cthat->reblock();
}

  // proto:  void QSignalBlocker::~QSignalBlocker();
void demth_ZN14QSignalBlockerD0Ev(void *that)
{
  QSignalBlocker *cthat = (QSignalBlocker *)that;
   cthat->~QSignalBlocker();
}

int QObjectData_Class_Size()
{
  return sizeof(QObjectData);
}

int QObjectUserData_Class_Size()
{
  return sizeof(QObjectUserData);
}

// ~QObjectUserData()
void dedtor_ZN15QObjectUserDataD0Ev(QObjectUserData* that)
{
  QObjectUserData* rthis = (QObjectUserData*)that;
  delete rthis;
}

int QObject_Class_Size()
{
  return sizeof(QObject);
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

  // proto:  bool QObject::inherits(const char * classname);
bool demth_ZNK7QObject8inheritsEPKc(void *that, const char * classname)
{
  QObject *cthat = (QObject *)that;
  return cthat->inherits(classname);
}

  // proto:  bool QObject::isWidgetType();
bool demth_ZNK7QObject12isWidgetTypeEv(void *that)
{
  QObject *cthat = (QObject *)that;
  return cthat->isWidgetType();
}

  // proto:  bool QObject::disconnect(const QObject * receiver, const char * member);
bool demth_ZNK7QObject10disconnectEPKS_PKc(void *that, const QObject * receiver, const char * member)
{
  QObject *cthat = (QObject *)that;
  return cthat->disconnect(receiver, member);
}

  // proto:  const QObjectList & QObject::children();
const QObjectList * demth_ZNK7QObject8childrenEv(void *that)
{
  QObject *cthat = (QObject *)that;
  return &cthat->children();
}

  // proto:  bool QObject::isWindowType();
bool demth_ZNK7QObject12isWindowTypeEv(void *that)
{
  QObject *cthat = (QObject *)that;
  return cthat->isWindowType();
}

  // proto:  bool QObject::disconnect(const char * signal, const QObject * receiver, const char * member);
bool demth_ZNK7QObject10disconnectEPKcPKS_S1_(void *that, const char * signal, const QObject * receiver, const char * member)
{
  QObject *cthat = (QObject *)that;
  return cthat->disconnect(signal, receiver, member);
}

  // proto:  bool QObject::signalsBlocked();
bool demth_ZNK7QObject14signalsBlockedEv(void *that)
{
  QObject *cthat = (QObject *)that;
  return cthat->signalsBlocked();
}

  // proto:  QObject * QObject::parent();
QObject * demth_ZNK7QObject6parentEv(void *that)
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

