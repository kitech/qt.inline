//  header block begin
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h
#ifndef protected
#define protected public
#endif
#include <qaudioinputselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioInputSelectorControl is pure virtual: true
// QAudioInputSelectorControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioInputSelectorControl : public QAudioInputSelectorControl {
public:
  virtual ~MyQAudioInputSelectorControl() {}
// void QAudioInputSelectorControl(QObject *)
MyQAudioInputSelectorControl(QObject * parent) : QAudioInputSelectorControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl10metaObjectEv(void *this_) {
  return (void*)((QAudioInputSelectorControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:56
// [-2] void ~QAudioInputSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControlD2Ev(void *this_) {
  delete (QAudioInputSelectorControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:59
// [8] QString inputDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl16inputDescriptionERK7QString(void *this_, QString* name) {
  auto rv = ((QAudioInputSelectorControl*)this_)->inputDescription(*name);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:60
// [8] QString defaultInput()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl12defaultInputEv(void *this_) {
  auto rv = ((QAudioInputSelectorControl*)this_)->defaultInput();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:61
// [8] QString activeInput()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl11activeInputEv(void *this_) {
  auto rv = ((QAudioInputSelectorControl*)this_)->activeInput();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:64
// [-2] void setActiveInput(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControl14setActiveInputERK7QString(void *this_, QString* name) {
  ((QAudioInputSelectorControl*)this_)->setActiveInput(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:67
// [-2] void activeInputChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControl18activeInputChangedERK7QString(void *this_, QString* name) {
  ((QAudioInputSelectorControl*)this_)->activeInputChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:68
// [-2] void availableInputsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControl22availableInputsChangedEv(void *this_) {
  ((QAudioInputSelectorControl*)this_)->availableInputsChanged();
}

//  main block end
