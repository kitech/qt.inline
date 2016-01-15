// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qopengltimerquery.h
// dst-file: /src/gui/qopengltimerquery.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qopengltimerquery.h>

extern "C" {

int QOpenGLTimerQuery_Class_Size()
{
  return sizeof(QOpenGLTimerQuery);
}

int QOpenGLTimeMonitor_Class_Size()
{
  return sizeof(QOpenGLTimeMonitor);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qopengltimerquery_inline_symbols() {
} // <= main block end

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

