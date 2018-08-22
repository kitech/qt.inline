//  header block begin
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QList<QString> availableInputs()
  virtual QList<QString> availableInputs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availableInputs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QString>){};}
    auto prv = (QList<QString>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QString>
    } else {
    return (QList<QString>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString inputDescription(const QString &)
  virtual QString inputDescription(const QString & name) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputDescription", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString defaultInput()
  virtual QString defaultInput() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"defaultInput", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString activeInput()
  virtual QString activeInput() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"activeInput", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setActiveInput(const QString &)
  virtual void setActiveInput(const QString & name)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setActiveInput", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioInputSelectorControl::setActiveInput(name);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:58
// [8] QList<QString> availableInputs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:59
// [8] QString inputDescription(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:60
// [8] QString defaultInput()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:61
// [8] QString activeInput()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:64
// [-2] void setActiveInput(const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl10metaObjectEv(void *this_) {
  return (void*)((QAudioInputSelectorControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAudioInputSelectorControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioInputSelectorControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN26QAudioInputSelectorControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioInputSelectorControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAudioInputSelectorControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioInputSelectorControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAudioInputSelectorControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioInputSelectorControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:56
// [-2] void ~QAudioInputSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControlD2Ev(void *this_) {
  delete (QAudioInputSelectorControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:58
// [8] QList<QString> availableInputs()
extern "C" Q_DECL_EXPORT
QList<QString>* C_ZNK26QAudioInputSelectorControl15availableInputsEv(void *this_) {
  auto rv = ((QAudioInputSelectorControl*)this_)->availableInputs();
return new QList<QString>(rv);
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
