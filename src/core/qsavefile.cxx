//  header block begin
// /usr/include/qt/QtCore/qsavefile.h
#include <qsavefile.h>
#include <QtCore>
#include "callback_inherit.h"

// QSaveFile is pure virtual: false
// QSaveFile has virtual projected: true
//  header block end

//  main block begin

class MyQSaveFile : public QSaveFile {
public:
  virtual ~MyQSaveFile() {}
// void QSaveFile(const class QString &)
MyQSaveFile(const QString & name) : QSaveFile(name) {}
// void QSaveFile(class QObject *)
MyQSaveFile(QObject * parent) : QSaveFile(parent) {}
// void QSaveFile(const class QString &, class QObject *)
MyQSaveFile(const QString & name, QObject * parent) : QSaveFile(name, parent) {}
// qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QSaveFile::writeData(data, len);
  }
  }

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
void* C_ZN9QSaveFileC2ERK7QString(QString* name) {
  auto _nilp = (MyQSaveFile*)(0);
  return  new MyQSaveFile(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:70
// [-2] void QSaveFile(class QObject *)
extern "C"
void* C_ZN9QSaveFileC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSaveFile*)(0);
  return  new MyQSaveFile(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:71
// [-2] void QSaveFile(const class QString &, class QObject *)
extern "C"
void* C_ZN9QSaveFileC2ERK7QStringP7QObject(QString* name, QObject * parent) {
  auto _nilp = (MyQSaveFile*)(0);
  return  new MyQSaveFile(*name, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:73
// [-2] void ~QSaveFile()
extern "C"
void C_ZN9QSaveFileD2Ev(void *this_) {
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
void C_ZN9QSaveFile11setFileNameERK7QString(void *this_, QString* name) {
  ((QSaveFile*)this_)->setFileName(*name);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:78
// [1] bool open(QIODevice::OpenMode)
extern "C"
bool C_ZN9QSaveFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> flags) {
  return (bool)((QSaveFile*)this_)->open(flags);
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
