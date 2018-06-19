//  header block begin
// since 0x050600
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h
#ifndef protected
#define protected public
#endif
#include <qaudiorolecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioRoleControl is pure virtual: true
// QAudioRoleControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioRoleControl : public QAudioRoleControl {
public:
  virtual ~MyQAudioRoleControl() {}
// void QAudioRoleControl(QObject *)
MyQAudioRoleControl(QObject * parent) : QAudioRoleControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAudioRoleControl10metaObjectEv(void *this_) {
  return (void*)((QAudioRoleControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:56
// [-2] void ~QAudioRoleControl()
extern "C" Q_DECL_EXPORT
void C_ZN17QAudioRoleControlD2Ev(void *this_) {
  delete (QAudioRoleControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:58
// [4] QAudio::Role audioRole()
extern "C" Q_DECL_EXPORT
QAudio::Role C_ZNK17QAudioRoleControl9audioRoleEv(void *this_) {
  return (QAudio::Role)((QAudioRoleControl*)this_)->audioRole();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:59
// [-2] void setAudioRole(QAudio::Role)
extern "C" Q_DECL_EXPORT
void C_ZN17QAudioRoleControl12setAudioRoleEN6QAudio4RoleE(void *this_, QAudio::Role role) {
  ((QAudioRoleControl*)this_)->setAudioRole(role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:64
// [-2] void audioRoleChanged(QAudio::Role)
extern "C" Q_DECL_EXPORT
void C_ZN17QAudioRoleControl16audioRoleChangedEN6QAudio4RoleE(void *this_, QAudio::Role role) {
  ((QAudioRoleControl*)this_)->audioRoleChanged(role);
}

//  main block end
