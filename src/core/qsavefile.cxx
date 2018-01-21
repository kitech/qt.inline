//  header block begin
// /usr/include/qt/QtCore/qsavefile.h
#include <qsavefile.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qsavefile.h:61
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QSaveFile10metaObjectEv(void *this_) {
  /*return*/ ((QSaveFile*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qsavefile.h:66
// void QSaveFile(const class QString &)
extern "C"
void* C_ZN9QSaveFileC1ERK7QString(const QString & name) {
  return new QSaveFile(name);
}
// /usr/include/qt/QtCore/qsavefile.h:67
// void QSaveFile(class QObject *)
extern "C"
void* C_ZN9QSaveFileC1EP7QObject(QObject * parent) {
  return new QSaveFile(parent);
}
// /usr/include/qt/QtCore/qsavefile.h:68
// void QSaveFile(const class QString &, class QObject *)
extern "C"
void* C_ZN9QSaveFileC1ERK7QStringP7QObject(const QString & name, QObject * parent) {
  return new QSaveFile(name, parent);
}
// virtual
// /usr/include/qt/QtCore/qsavefile.h:69
// void ~QSaveFile()
extern "C"
void C_ZN9QSaveFileD1Ev(void *this_) {
  delete (QSaveFile*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qsavefile.h:71
// QString fileName()
extern "C"
void C_ZNK9QSaveFile8fileNameEv(void *this_) {
  /*return*/ ((QSaveFile*)this_)->fileName();
}
// /usr/include/qt/QtCore/qsavefile.h:72
// void setFileName(const class QString &)
extern "C"
void C_ZN9QSaveFile11setFileNameERK7QString(void *this_, const QString & name) {
  ((QSaveFile*)this_)->setFileName(name);
}
// virtual
// /usr/include/qt/QtCore/qsavefile.h:74
// bool open(OpenMode)
extern "C"
void C_ZN9QSaveFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> flags) {
  /*return*/ ((QSaveFile*)this_)->open(flags);
}
// /usr/include/qt/QtCore/qsavefile.h:75
// bool commit()
extern "C"
void C_ZN9QSaveFile6commitEv(void *this_) {
  /*return*/ ((QSaveFile*)this_)->commit();
}
// /usr/include/qt/QtCore/qsavefile.h:77
// void cancelWriting()
extern "C"
void C_ZN9QSaveFile13cancelWritingEv(void *this_) {
  ((QSaveFile*)this_)->cancelWriting();
}
// /usr/include/qt/QtCore/qsavefile.h:79
// void setDirectWriteFallback(_Bool)
extern "C"
void C_ZN9QSaveFile22setDirectWriteFallbackEb(void *this_, bool enabled) {
  ((QSaveFile*)this_)->setDirectWriteFallback(enabled);
}
// /usr/include/qt/QtCore/qsavefile.h:80
// bool directWriteFallback()
extern "C"
void C_ZNK9QSaveFile19directWriteFallbackEv(void *this_) {
  /*return*/ ((QSaveFile*)this_)->directWriteFallback();
}
//  main block end
