//  header block begin
// since 0x050600
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QAudio::Role audioRole()
  virtual QAudio::Role audioRole() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"audioRole", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAudio::Role)(int)(irv);
      // Elaborated Enum QAudio::Role
    } else {
    return (QAudio::Role){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setAudioRole(QAudio::Role)
  virtual void setAudioRole(QAudio::Role role)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAudioRole", &handled, 1, (uint64_t)role, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioRoleControl::setAudioRole(role);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QAudio::Role> supportedAudioRoles()
  virtual QList<QAudio::Role> supportedAudioRoles() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedAudioRoles", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QAudio::Role>){};}
    auto prv = (QList<QAudio::Role>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QAudio::Role>
    } else {
    return (QList<QAudio::Role>){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:58
// [4] QAudio::Role audioRole()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:59
// [-2] void setAudioRole(QAudio::Role)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:61
// [-2] QList<QAudio::Role> supportedAudioRoles()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAudioRoleControl10metaObjectEv(void *this_) {
  return (void*)((QAudioRoleControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAudioRoleControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioRoleControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QAudioRoleControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioRoleControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAudioRoleControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioRoleControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAudioRoleControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioRoleControl::trUtf8(s, c, n);
return new QString(rv);
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:61
// [-2] QList<QAudio::Role> supportedAudioRoles()
extern "C" Q_DECL_EXPORT
QList<QAudio::Role>* C_ZNK17QAudioRoleControl19supportedAudioRolesEv(void *this_) {
  auto rv = ((QAudioRoleControl*)this_)->supportedAudioRoles();
return new QList<QAudio::Role>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:64
// [-2] void audioRoleChanged(QAudio::Role)
extern "C" Q_DECL_EXPORT
void C_ZN17QAudioRoleControl16audioRoleChangedEN6QAudio4RoleE(void *this_, QAudio::Role role) {
  ((QAudioRoleControl*)this_)->audioRoleChanged(role);
}

//  main block end
