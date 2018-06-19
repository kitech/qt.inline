//  header block begin
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h
#ifndef protected
#define protected public
#endif
#include <qmediavideoprobecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaVideoProbeControl is pure virtual: false
// QMediaVideoProbeControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaVideoProbeControl : public QMediaVideoProbeControl {
public:
  virtual ~MyQMediaVideoProbeControl() {}
// void QMediaVideoProbeControl(QObject *)
MyQMediaVideoProbeControl(QObject * parent) : QMediaVideoProbeControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QMediaVideoProbeControl10metaObjectEv(void *this_) {
  return (void*)((QMediaVideoProbeControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:54
// [-2] void ~QMediaVideoProbeControl()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaVideoProbeControlD2Ev(void *this_) {
  delete (QMediaVideoProbeControl*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:57
// [-2] void videoFrameProbed(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaVideoProbeControl16videoFrameProbedERK11QVideoFrame(void *this_, QVideoFrame* frame) {
  ((QMediaVideoProbeControl*)this_)->videoFrameProbed(*frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:58
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaVideoProbeControl5flushEv(void *this_) {
  ((QMediaVideoProbeControl*)this_)->flush();
}

//  main block end
