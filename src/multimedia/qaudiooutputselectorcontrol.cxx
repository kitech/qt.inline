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
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:56
// [-2] void ~QAudioOutputSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControlD2Ev(void *this_) {
  delete (QAudioOutputSelectorControl*)(this_);
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
