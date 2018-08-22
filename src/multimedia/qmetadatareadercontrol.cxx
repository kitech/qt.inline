//  header block begin
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetadatareadercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMetaDataReaderControl is pure virtual: true
// QMetaDataReaderControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMetaDataReaderControl : public QMetaDataReaderControl {
public:
  virtual ~MyQMetaDataReaderControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isMetaDataAvailable()
  virtual bool isMetaDataAvailable() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isMetaDataAvailable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant metaData(const QString &)
  virtual QVariant metaData(const QString & key) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaData", &handled, 1, (uint64_t)&key, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList availableMetaData()
  virtual QStringList availableMetaData() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availableMetaData", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:62
// [1] bool isMetaDataAvailable()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:64
// [16] QVariant metaData(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:65
// [8] QStringList availableMetaData()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataReaderControl10metaObjectEv(void *this_) {
  return (void*)((QMetaDataReaderControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMetaDataReaderControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMetaDataReaderControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QMetaDataReaderControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMetaDataReaderControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMetaDataReaderControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMetaDataReaderControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMetaDataReaderControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMetaDataReaderControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:60
// [-2] void ~QMetaDataReaderControl()
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataReaderControlD2Ev(void *this_) {
  delete (QMetaDataReaderControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:62
// [1] bool isMetaDataAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QMetaDataReaderControl19isMetaDataAvailableEv(void *this_) {
  return (bool)((QMetaDataReaderControl*)this_)->isMetaDataAvailable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:64
// [16] QVariant metaData(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataReaderControl8metaDataERK7QString(void *this_, QString* key) {
  auto rv = ((QMetaDataReaderControl*)this_)->metaData(*key);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:65
// [8] QStringList availableMetaData()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataReaderControl17availableMetaDataEv(void *this_) {
  auto rv = ((QMetaDataReaderControl*)this_)->availableMetaData();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:68
// [-2] void metaDataChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataReaderControl15metaDataChangedEv(void *this_) {
  ((QMetaDataReaderControl*)this_)->metaDataChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:69
// [-2] void metaDataChanged(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataReaderControl15metaDataChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMetaDataReaderControl*)this_)->metaDataChanged(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:71
// [-2] void metaDataAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataReaderControl24metaDataAvailableChangedEb(void *this_, bool available) {
  ((QMetaDataReaderControl*)this_)->metaDataAvailableChanged(available);
}

//  main block end
