//  header block begin
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h
#ifndef protected
#define protected public
#endif
#include <qmetadatawritercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMetaDataWriterControl is pure virtual: true
// QMetaDataWriterControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMetaDataWriterControl : public QMetaDataWriterControl {
public:
  virtual ~MyQMetaDataWriterControl() {}
// void QMetaDataWriterControl(QObject *)
MyQMetaDataWriterControl(QObject * parent) : QMetaDataWriterControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataWriterControl10metaObjectEv(void *this_) {
  return (void*)((QMetaDataWriterControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:60
// [-2] void ~QMetaDataWriterControl()
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControlD2Ev(void *this_) {
  delete (QMetaDataWriterControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:62
// [1] bool isWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QMetaDataWriterControl10isWritableEv(void *this_) {
  return (bool)((QMetaDataWriterControl*)this_)->isWritable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:63
// [1] bool isMetaDataAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QMetaDataWriterControl19isMetaDataAvailableEv(void *this_) {
  return (bool)((QMetaDataWriterControl*)this_)->isMetaDataAvailable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:65
// [16] QVariant metaData(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataWriterControl8metaDataERK7QString(void *this_, QString* key) {
  auto rv = ((QMetaDataWriterControl*)this_)->metaData(*key);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:66
// [-2] void setMetaData(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl11setMetaDataERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMetaDataWriterControl*)this_)->setMetaData(*key, *value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:67
// [8] QStringList availableMetaData()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataWriterControl17availableMetaDataEv(void *this_) {
  auto rv = ((QMetaDataWriterControl*)this_)->availableMetaData();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:70
// [-2] void metaDataChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl15metaDataChangedEv(void *this_) {
  ((QMetaDataWriterControl*)this_)->metaDataChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:71
// [-2] void metaDataChanged(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl15metaDataChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMetaDataWriterControl*)this_)->metaDataChanged(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:73
// [-2] void writableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl15writableChangedEb(void *this_, bool writable) {
  ((QMetaDataWriterControl*)this_)->writableChanged(writable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:74
// [-2] void metaDataAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl24metaDataAvailableChangedEb(void *this_, bool available) {
  ((QMetaDataWriterControl*)this_)->metaDataAvailableChanged(available);
}

//  main block end
