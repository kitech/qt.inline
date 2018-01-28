//  header block begin
// /usr/include/qt/QtCore/qsavefile.h
#include <qsavefile.h>
#include <QtCore>

// QSaveFile is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:87
// [8] qint64 writeData(const char *, qint64)
extern "C"
void* callback_ZN9QSaveFile9writeDataEPKcx = 0;
extern "C" void set_callback_ZN9QSaveFile9writeDataEPKcx(void*cbfn)
{ callback_ZN9QSaveFile9writeDataEPKcx = cbfn; }

class MyQSaveFile : public QSaveFile {
public:
MyQSaveFile(const QString & name) : QSaveFile(name) {}
MyQSaveFile(QObject * parent) : QSaveFile(parent) {}
MyQSaveFile(const QString & name, QObject * parent) : QSaveFile(name, parent) {}
// qint64 writeData(const char *, qint64)
// qint64 writeData(const char *, qint64)
virtual qint64 writeData(const char * data, qint64 len) {
  if (callback_ZN9QSaveFile9writeDataEPKcx != 0) {
  // callback_ZN9QSaveFile9writeDataEPKcx(data, len);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:62
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QSaveFile10metaObjectEv(void *this_) {
  return (void*)((QSaveFile*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:68
// [-2] void QSaveFile(const class QString &)
extern "C"
void* C_ZN9QSaveFileC1ERK7QString(const QString & name) {
  (MyQSaveFile*)(0);
  return  new MyQSaveFile(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:70
// [-2] void QSaveFile(class QObject *)
extern "C"
void* C_ZN9QSaveFileC1EP7QObject(QObject * parent) {
  (MyQSaveFile*)(0);
  return  new MyQSaveFile(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:71
// [-2] void QSaveFile(const class QString &, class QObject *)
extern "C"
void* C_ZN9QSaveFileC1ERK7QStringP7QObject(const QString & name, QObject * parent) {
  (MyQSaveFile*)(0);
  return  new MyQSaveFile(name, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:73
// [-2] void ~QSaveFile()
extern "C"
void C_ZN9QSaveFileD1Ev(void *this_) {
  delete (QSaveFile*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:75
// [8] QString fileName()
extern "C"
void* C_ZNK9QSaveFile8fileNameEv(void *this_) {
  auto rv = ((QSaveFile*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:76
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN9QSaveFile11setFileNameERK7QString(void *this_, const QString & name) {
  ((QSaveFile*)this_)->setFileName(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:79
// [1] bool commit()
extern "C"
bool C_ZN9QSaveFile6commitEv(void *this_) {
  return (bool)((QSaveFile*)this_)->commit();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:81
// [-2] void cancelWriting()
extern "C"
void C_ZN9QSaveFile13cancelWritingEv(void *this_) {
  ((QSaveFile*)this_)->cancelWriting();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:83
// [-2] void setDirectWriteFallback(_Bool)
extern "C"
void C_ZN9QSaveFile22setDirectWriteFallbackEb(void *this_, bool enabled) {
  ((QSaveFile*)this_)->setDirectWriteFallback(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:84
// [1] bool directWriteFallback()
extern "C"
bool C_ZNK9QSaveFile19directWriteFallbackEv(void *this_) {
  return (bool)((QSaveFile*)this_)->directWriteFallback();
}
//  main block end
