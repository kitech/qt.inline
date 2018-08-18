//  header block begin
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h
#ifndef protected
#define protected public
#endif
#include <qaudiooutputselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioOutputSelectorControl is pure virtual: true
// QAudioOutputSelectorControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioOutputSelectorControl : public QAudioOutputSelectorControl {
public:
  virtual ~MyQAudioOutputSelectorControl() {}
// void QAudioOutputSelectorControl(QObject *)
MyQAudioOutputSelectorControl(QObject * parent) : QAudioOutputSelectorControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAudioOutputSelectorControl10metaObjectEv(void *this_) {
  return (void*)((QAudioOutputSelectorControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAudioOutputSelectorControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioOutputSelectorControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN27QAudioOutputSelectorControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioOutputSelectorControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAudioOutputSelectorControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioOutputSelectorControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAudioOutputSelectorControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioOutputSelectorControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:56
// [-2] void ~QAudioOutputSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControlD2Ev(void *this_) {
  delete (QAudioOutputSelectorControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:58
// [8] QList<QString> availableOutputs()
extern "C" Q_DECL_EXPORT
QList<QString>* C_ZNK27QAudioOutputSelectorControl16availableOutputsEv(void *this_) {
  auto rv = ((QAudioOutputSelectorControl*)this_)->availableOutputs();
return new QList<QString>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:59
// [8] QString outputDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAudioOutputSelectorControl17outputDescriptionERK7QString(void *this_, QString* name) {
  auto rv = ((QAudioOutputSelectorControl*)this_)->outputDescription(*name);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:60
// [8] QString defaultOutput()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAudioOutputSelectorControl13defaultOutputEv(void *this_) {
  auto rv = ((QAudioOutputSelectorControl*)this_)->defaultOutput();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:61
// [8] QString activeOutput()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAudioOutputSelectorControl12activeOutputEv(void *this_) {
  auto rv = ((QAudioOutputSelectorControl*)this_)->activeOutput();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:64
// [-2] void setActiveOutput(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControl15setActiveOutputERK7QString(void *this_, QString* name) {
  ((QAudioOutputSelectorControl*)this_)->setActiveOutput(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:67
// [-2] void activeOutputChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControl19activeOutputChangedERK7QString(void *this_, QString* name) {
  ((QAudioOutputSelectorControl*)this_)->activeOutputChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:68
// [-2] void availableOutputsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControl23availableOutputsChangedEv(void *this_) {
  ((QAudioOutputSelectorControl*)this_)->availableOutputsChanged();
}

//  main block end
