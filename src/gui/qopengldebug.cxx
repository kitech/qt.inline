// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qopengldebug.h
// dst-file: /src/gui/qopengldebug.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qopengldebug.h>

extern "C" {

int QOpenGLDebugMessage_Class_Size()
{
  return sizeof(QOpenGLDebugMessage);
}

int QOpenGLDebugLogger_Class_Size()
{
  return sizeof(QOpenGLDebugLogger);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qopengldebug_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 107, column 17>
//   // proto:  void QOpenGLDebugMessage::swap(QOpenGLDebugMessage & debugMessage);
if (false) {
  auto f = [](QOpenGLDebugMessage & arg1) {
    ((QOpenGLDebugMessage*)0)->swap(arg1);
  };
}
// _ZN19QOpenGLDebugMessage4swapERS_ swap(class QOpenGLDebugMessage &)
} // <= main block end

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
  void (*slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage)(void* rsfptr, const QOpenGLDebugMessage & arg0) = NULL;
public: void* rsfptr = NULL;
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
    this->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(this->rsfptr, arg0);
  }
}
extern "C"
void* QOpenGLDebugLogger_SlotProxy_connect__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLDebugLogger_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage = (decltype(that->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage))ffifptr;
  QObject::connect((QOpenGLDebugLogger*)sender, SIGNAL(messageLogged(const class QOpenGLDebugMessage &)), that, SLOT(slot_proxy_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(const QOpenGLDebugMessage & arg0)));
  return that;
}
extern "C"
void QOpenGLDebugLogger_SlotProxy_disconnect__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(QOpenGLDebugLogger_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

