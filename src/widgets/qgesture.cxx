// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qgesture.h
// dst-file: /src/widgets/qgesture.cxx
//

// header block begin =>
#include <qgesture.h>

extern "C" {

int QSwipeGesture_Class_Size()
{
  return sizeof(QSwipeGesture);
}

// ~QSwipeGesture()
void dedtor_ZN13QSwipeGestureD0Ev(QSwipeGesture* that)
{
  QSwipeGesture* rthis = (QSwipeGesture*)that;
  delete rthis;
}

// QSwipeGesture(class QObject *)
QSwipeGesture* dector_ZN13QSwipeGestureC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSwipeGesture) == 32, "tyszerr");
  QSwipeGesture* rthis = new QSwipeGesture(parent);
  return rthis;
}

int QGesture_Class_Size()
{
  return sizeof(QGesture);
}

// QGesture(class QObject *)
QGesture* dector_ZN8QGestureC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGesture) == 32, "tyszerr");
  QGesture* rthis = new QGesture(parent);
  return rthis;
}

// ~QGesture()
void dedtor_ZN8QGestureD0Ev(QGesture* that)
{
  QGesture* rthis = (QGesture*)that;
  delete rthis;
}

int QGestureEvent_Class_Size()
{
  return sizeof(QGestureEvent);
}

// QGestureEvent(const QList<class QGesture *> &)
QGestureEvent* dector_ZN13QGestureEventC1ERK5QListIP8QGestureE(const QList<QGesture *> & gestures)
{
  // static_assert(sizeof(QGestureEvent) == 32, "tyszerr");
  QGestureEvent* rthis = new QGestureEvent(gestures);
  return rthis;
}

// ~QGestureEvent()
void dedtor_ZN13QGestureEventD0Ev(QGestureEvent* that)
{
  QGestureEvent* rthis = (QGestureEvent*)that;
  delete rthis;
}

int QPanGesture_Class_Size()
{
  return sizeof(QPanGesture);
}

// ~QPanGesture()
void dedtor_ZN11QPanGestureD0Ev(QPanGesture* that)
{
  QPanGesture* rthis = (QPanGesture*)that;
  delete rthis;
}

// QPanGesture(class QObject *)
QPanGesture* dector_ZN11QPanGestureC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QPanGesture) == 32, "tyszerr");
  QPanGesture* rthis = new QPanGesture(parent);
  return rthis;
}

int QTapAndHoldGesture_Class_Size()
{
  return sizeof(QTapAndHoldGesture);
}

// QTapAndHoldGesture(class QObject *)
QTapAndHoldGesture* dector_ZN18QTapAndHoldGestureC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QTapAndHoldGesture) == 32, "tyszerr");
  QTapAndHoldGesture* rthis = new QTapAndHoldGesture(parent);
  return rthis;
}

// ~QTapAndHoldGesture()
void dedtor_ZN18QTapAndHoldGestureD0Ev(QTapAndHoldGesture* that)
{
  QTapAndHoldGesture* rthis = (QTapAndHoldGesture*)that;
  delete rthis;
}

int QTapGesture_Class_Size()
{
  return sizeof(QTapGesture);
}

// QTapGesture(class QObject *)
QTapGesture* dector_ZN11QTapGestureC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QTapGesture) == 32, "tyszerr");
  QTapGesture* rthis = new QTapGesture(parent);
  return rthis;
}

// ~QTapGesture()
void dedtor_ZN11QTapGestureD0Ev(QTapGesture* that)
{
  QTapGesture* rthis = (QTapGesture*)that;
  delete rthis;
}

int QPinchGesture_Class_Size()
{
  return sizeof(QPinchGesture);
}

// QPinchGesture(class QObject *)
QPinchGesture* dector_ZN13QPinchGestureC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QPinchGesture) == 32, "tyszerr");
  QPinchGesture* rthis = new QPinchGesture(parent);
  return rthis;
}

// ~QPinchGesture()
void dedtor_ZN13QPinchGestureD0Ev(QPinchGesture* that)
{
  QPinchGesture* rthis = (QPinchGesture*)that;
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
// QSwipeGesture_SlotProxy here
class QSwipeGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSwipeGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QSwipeGesture_SlotProxy* QSwipeGesture_SlotProxy_new()
  {
    return new QSwipeGesture_SlotProxy();
  }
};

// QGesture_SlotProxy here
class QGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QGesture_SlotProxy* QGesture_SlotProxy_new()
  {
    return new QGesture_SlotProxy();
  }
};

// QPanGesture_SlotProxy here
class QPanGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPanGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QPanGesture_SlotProxy* QPanGesture_SlotProxy_new()
  {
    return new QPanGesture_SlotProxy();
  }
};

// QTapAndHoldGesture_SlotProxy here
class QTapAndHoldGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTapAndHoldGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QTapAndHoldGesture_SlotProxy* QTapAndHoldGesture_SlotProxy_new()
  {
    return new QTapAndHoldGesture_SlotProxy();
  }
};

// QTapGesture_SlotProxy here
class QTapGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTapGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QTapGesture_SlotProxy* QTapGesture_SlotProxy_new()
  {
    return new QTapGesture_SlotProxy();
  }
};

// QPinchGesture_SlotProxy here
class QPinchGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPinchGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgesture.moc"

extern "C" {
  QPinchGesture_SlotProxy* QPinchGesture_SlotProxy_new()
  {
    return new QPinchGesture_SlotProxy();
  }
};

// <= body block end

