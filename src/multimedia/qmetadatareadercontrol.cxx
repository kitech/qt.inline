//  header block begin
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h
#ifndef protected
#define protected public
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
// void QMetaDataReaderControl(QObject *)
MyQMetaDataReaderControl(QObject * parent) : QMetaDataReaderControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataReaderControl10metaObjectEv(void *this_) {
  return (void*)((QMetaDataReaderControl*)this_)->metaObject();
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
