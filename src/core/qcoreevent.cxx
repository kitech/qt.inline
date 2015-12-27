// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qcoreevent.h
// dst-file: /src/core/qcoreevent.cxx
//

// header block begin =>
#include <qcoreevent.h>

extern "C" {

int QDeferredDeleteEvent_Class_Size()
{
  return sizeof(QDeferredDeleteEvent);
}

// ~QDeferredDeleteEvent()
void dedtor_ZN20QDeferredDeleteEventD0Ev(QDeferredDeleteEvent* that)
{
  QDeferredDeleteEvent* rthis = (QDeferredDeleteEvent*)that;
  delete rthis;
}

// QDeferredDeleteEvent()
QDeferredDeleteEvent* dector_ZN20QDeferredDeleteEventC1Ev()
{
  // static_assert(sizeof(QDeferredDeleteEvent) == 32, "tyszerr");
  QDeferredDeleteEvent* rthis = new QDeferredDeleteEvent();
  return rthis;
}

int QDynamicPropertyChangeEvent_Class_Size()
{
  return sizeof(QDynamicPropertyChangeEvent);
}

// ~QDynamicPropertyChangeEvent()
void dedtor_ZN27QDynamicPropertyChangeEventD0Ev(QDynamicPropertyChangeEvent* that)
{
  QDynamicPropertyChangeEvent* rthis = (QDynamicPropertyChangeEvent*)that;
  delete rthis;
}

// QDynamicPropertyChangeEvent(const class QByteArray &)
QDynamicPropertyChangeEvent* dector_ZN27QDynamicPropertyChangeEventC1ERK10QByteArray(const QByteArray & name)
{
  // static_assert(sizeof(QDynamicPropertyChangeEvent) == 32, "tyszerr");
  QDynamicPropertyChangeEvent* rthis = new QDynamicPropertyChangeEvent(name);
  return rthis;
}

  // proto:  QByteArray QDynamicPropertyChangeEvent::propertyName();
QByteArray* demth_ZNK27QDynamicPropertyChangeEvent12propertyNameEv(void *that)
{
  QDynamicPropertyChangeEvent *cthat = (QDynamicPropertyChangeEvent *)that;
  auto recret = cthat->propertyName();
  return new QByteArray(recret);
}

int QTimerEvent_Class_Size()
{
  return sizeof(QTimerEvent);
}

// QTimerEvent(int)
QTimerEvent* dector_ZN11QTimerEventC1Ei(int timerId)
{
  // static_assert(sizeof(QTimerEvent) == 32, "tyszerr");
  QTimerEvent* rthis = new QTimerEvent(timerId);
  return rthis;
}

// ~QTimerEvent()
void dedtor_ZN11QTimerEventD0Ev(QTimerEvent* that)
{
  QTimerEvent* rthis = (QTimerEvent*)that;
  delete rthis;
}

int QChildEvent_Class_Size()
{
  return sizeof(QChildEvent);
}

// ~QChildEvent()
void dedtor_ZN11QChildEventD0Ev(QChildEvent* that)
{
  QChildEvent* rthis = (QChildEvent*)that;
  delete rthis;
}

// QChildEvent(enum QEvent::Type, class QObject *)
QChildEvent* dector_ZN11QChildEventC1EN6QEvent4TypeEP7QObject(QEvent::Type type, QObject * child)
{
  // static_assert(sizeof(QChildEvent) == 32, "tyszerr");
  QChildEvent* rthis = new QChildEvent(type, child);
  return rthis;
}

int QEvent_Class_Size()
{
  return sizeof(QEvent);
}

// QEvent(enum QEvent::Type)
QEvent* dector_ZN6QEventC1ENS_4TypeE(QEvent::Type type)
{
  // static_assert(sizeof(QEvent) == 32, "tyszerr");
  QEvent* rthis = new QEvent(type);
  return rthis;
}

// ~QEvent()
void dedtor_ZN6QEventD0Ev(QEvent* that)
{
  QEvent* rthis = (QEvent*)that;
  delete rthis;
}

// QEvent(const class QEvent &)
QEvent* dector_ZN6QEventC1ERKS_(const QEvent & other)
{
  // static_assert(sizeof(QEvent) == 32, "tyszerr");
  QEvent* rthis = new QEvent(other);
  return rthis;
}

  // proto:  void QEvent::setAccepted(bool accepted);
void demth_ZN6QEvent11setAcceptedEb(void *that, bool accepted)
{
  QEvent *cthat = (QEvent *)that;
   cthat->setAccepted(accepted);
}

  // proto:  void QEvent::ignore();
void demth_ZN6QEvent6ignoreEv(void *that)
{
  QEvent *cthat = (QEvent *)that;
   cthat->ignore();
}

  // proto:  bool QEvent::isAccepted();
bool demth_ZNK6QEvent10isAcceptedEv(void *that)
{
  QEvent *cthat = (QEvent *)that;
  return cthat->isAccepted();
}

  // proto:  void QEvent::accept();
void demth_ZN6QEvent6acceptEv(void *that)
{
  QEvent *cthat = (QEvent *)that;
   cthat->accept();
}

  // proto:  bool QEvent::spontaneous();
bool demth_ZNK6QEvent11spontaneousEv(void *that)
{
  QEvent *cthat = (QEvent *)that;
  return cthat->spontaneous();
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

