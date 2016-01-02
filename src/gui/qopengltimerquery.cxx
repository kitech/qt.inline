// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qopengltimerquery.h
// dst-file: /src/gui/qopengltimerquery.cxx
//

// header block begin =>
#include <qopengltimerquery.h>

extern "C" {

int QOpenGLTimerQuery_Class_Size()
{
  return sizeof(QOpenGLTimerQuery);
}

// ~QOpenGLTimerQuery()
void dedtor_ZN17QOpenGLTimerQueryD0Ev(QOpenGLTimerQuery* that)
{
  QOpenGLTimerQuery* rthis = (QOpenGLTimerQuery*)that;
  delete rthis;
}

// QOpenGLTimerQuery(class QObject *)
QOpenGLTimerQuery* dector_ZN17QOpenGLTimerQueryC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QOpenGLTimerQuery) == 32, "tyszerr");
  QOpenGLTimerQuery* rthis = new QOpenGLTimerQuery(parent);
  return rthis;
}

int QOpenGLTimeMonitor_Class_Size()
{
  return sizeof(QOpenGLTimeMonitor);
}

// ~QOpenGLTimeMonitor()
void dedtor_ZN18QOpenGLTimeMonitorD0Ev(QOpenGLTimeMonitor* that)
{
  QOpenGLTimeMonitor* rthis = (QOpenGLTimeMonitor*)that;
  delete rthis;
}

// QOpenGLTimeMonitor(class QObject *)
QOpenGLTimeMonitor* dector_ZN18QOpenGLTimeMonitorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QOpenGLTimeMonitor) == 32, "tyszerr");
  QOpenGLTimeMonitor* rthis = new QOpenGLTimeMonitor(parent);
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
// QOpenGLTimerQuery_SlotProxy here
class QOpenGLTimerQuery_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLTimerQuery_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QOpenGLTimerQuery_SlotProxy* QOpenGLTimerQuery_SlotProxy_new()
  {
    return new QOpenGLTimerQuery_SlotProxy();
  }
};

// QOpenGLTimeMonitor_SlotProxy here
class QOpenGLTimeMonitor_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLTimeMonitor_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qopengltimerquery.moc"

extern "C" {
  QOpenGLTimeMonitor_SlotProxy* QOpenGLTimeMonitor_SlotProxy_new()
  {
    return new QOpenGLTimeMonitor_SlotProxy();
  }
};

// <= body block end

