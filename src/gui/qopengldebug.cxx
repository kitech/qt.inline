// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qopengldebug.h
// dst-file: /src/gui/qopengldebug.cxx
//

// header block begin =>
#include <qopengldebug.h>

extern "C" {

int QOpenGLDebugMessage_Class_Size()
{
  return sizeof(QOpenGLDebugMessage);
}

// QOpenGLDebugMessage()
QOpenGLDebugMessage* dector_ZN19QOpenGLDebugMessageC1Ev()
{
  // static_assert(sizeof(QOpenGLDebugMessage) == 32, "tyszerr");
  QOpenGLDebugMessage* rthis = new QOpenGLDebugMessage();
  return rthis;
}

// ~QOpenGLDebugMessage()
void dedtor_ZN19QOpenGLDebugMessageD0Ev(QOpenGLDebugMessage* that)
{
  QOpenGLDebugMessage* rthis = (QOpenGLDebugMessage*)that;
  delete rthis;
}

// QOpenGLDebugMessage(const class QOpenGLDebugMessage &)
QOpenGLDebugMessage* dector_ZN19QOpenGLDebugMessageC1ERKS_(const QOpenGLDebugMessage & debugMessage)
{
  // static_assert(sizeof(QOpenGLDebugMessage) == 32, "tyszerr");
  QOpenGLDebugMessage* rthis = new QOpenGLDebugMessage(debugMessage);
  return rthis;
}

  // proto:  void QOpenGLDebugMessage::swap(QOpenGLDebugMessage & debugMessage);
void demth_ZN19QOpenGLDebugMessage4swapERS_(void *that, QOpenGLDebugMessage & debugMessage)
{
  QOpenGLDebugMessage *cthat = (QOpenGLDebugMessage *)that;
   cthat->swap(debugMessage);
}

int QOpenGLDebugLogger_Class_Size()
{
  return sizeof(QOpenGLDebugLogger);
}

// ~QOpenGLDebugLogger()
void dedtor_ZN18QOpenGLDebugLoggerD0Ev(QOpenGLDebugLogger* that)
{
  QOpenGLDebugLogger* rthis = (QOpenGLDebugLogger*)that;
  delete rthis;
}

// QOpenGLDebugLogger(class QObject *)
QOpenGLDebugLogger* dector_ZN18QOpenGLDebugLoggerC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QOpenGLDebugLogger) == 32, "tyszerr");
  QOpenGLDebugLogger* rthis = new QOpenGLDebugLogger(parent);
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
// QOpenGLDebugLogger_SlotProxy here
class QOpenGLDebugLogger_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QOpenGLDebugLogger_SlotProxy():QObject(){}

public slots:
  // messageLogged(const class QOpenGLDebugMessage &)
  void slot_proxy_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(const QOpenGLDebugMessage & arg0);
public:
  void (*slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage)(const QOpenGLDebugMessage & arg0) = NULL;
};
#include "src/gui/qopengldebug.moc"

extern "C" {
  QOpenGLDebugLogger_SlotProxy* QOpenGLDebugLogger_SlotProxy_new()
  {
    return new QOpenGLDebugLogger_SlotProxy();
  }
};

void QOpenGLDebugLogger_SlotProxy::slot_proxy_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(const QOpenGLDebugMessage & arg0) {
  if (this->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage != NULL) {
    // do smth...
    this->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(arg0);
  }
}
extern "C"
void* QOpenGLDebugLogger_SlotProxy_connect__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(QObject* sender, void* fptr){
  auto that = new QOpenGLDebugLogger_SlotProxy();
  that->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage = (decltype(that->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage))fptr;
  QObject::connect((QOpenGLDebugLogger*)sender, SIGNAL(messageLogged(const class QOpenGLDebugMessage &)), that, SLOT(slot_proxy_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(const QOpenGLDebugMessage & arg0)));
  return that;
}
extern "C"
void QOpenGLDebugLogger_SlotProxy_disconnect__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(QOpenGLDebugLogger_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

