// /usr/include/qt/QtCore/qtemporaryfile.h
#include <qtemporaryfile.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qtemporaryfile.h:61
// const QMetaObject * metaObject()
extern "C"
void C_ZNK14QTemporaryFile10metaObjectEv(void *this_) {
  /*return*/ ((QTemporaryFile*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qtemporaryfile.h:66
// void QTemporaryFile()
extern "C"
void* C_ZN14QTemporaryFileC1Ev() {
  return new QTemporaryFile();
}
// /usr/include/qt/QtCore/qtemporaryfile.h:67
// void QTemporaryFile(const class QString &)
extern "C"
void* C_ZN14QTemporaryFileC1ERK7QString(const QString & templateName) {
  return new QTemporaryFile(templateName);
}
// /usr/include/qt/QtCore/qtemporaryfile.h:69
// void QTemporaryFile(class QObject *)
extern "C"
void* C_ZN14QTemporaryFileC1EP7QObject(QObject * parent) {
  return new QTemporaryFile(parent);
}
// /usr/include/qt/QtCore/qtemporaryfile.h:70
// void QTemporaryFile(const class QString &, class QObject *)
extern "C"
void* C_ZN14QTemporaryFileC1ERK7QStringP7QObject(const QString & templateName, QObject * parent) {
  return new QTemporaryFile(templateName, parent);
}
// virtual
// /usr/include/qt/QtCore/qtemporaryfile.h:72
// void ~QTemporaryFile()
extern "C"
void C_ZN14QTemporaryFileD1Ev(void *this_) {
  delete (QTemporaryFile*)(this_);
}
// /usr/include/qt/QtCore/qtemporaryfile.h:74
// bool autoRemove()
extern "C"
void C_ZNK14QTemporaryFile10autoRemoveEv(void *this_) {
  /*return*/ ((QTemporaryFile*)this_)->autoRemove();
}
// /usr/include/qt/QtCore/qtemporaryfile.h:75
// void setAutoRemove(_Bool)
extern "C"
void C_ZN14QTemporaryFile13setAutoRemoveEb(void *this_, bool b) {
  ((QTemporaryFile*)this_)->setAutoRemove(b);
}
// inline
// /usr/include/qt/QtCore/qtemporaryfile.h:78
// bool open()
extern "C"
void C_ZN14QTemporaryFile4openEv(void *this_) {
  /*return*/ ((QTemporaryFile*)this_)->open();
}
// virtual
// /usr/include/qt/QtCore/qtemporaryfile.h:80
// QString fileName()
extern "C"
void C_ZNK14QTemporaryFile8fileNameEv(void *this_) {
  /*return*/ ((QTemporaryFile*)this_)->fileName();
}
// /usr/include/qt/QtCore/qtemporaryfile.h:81
// QString fileTemplate()
extern "C"
void C_ZNK14QTemporaryFile12fileTemplateEv(void *this_) {
  /*return*/ ((QTemporaryFile*)this_)->fileTemplate();
}
// /usr/include/qt/QtCore/qtemporaryfile.h:82
// void setFileTemplate(const class QString &)
extern "C"
void C_ZN14QTemporaryFile15setFileTemplateERK7QString(void *this_, const QString & name) {
  ((QTemporaryFile*)this_)->setFileTemplate(name);
}
// static inline
// /usr/include/qt/QtCore/qtemporaryfile.h:84
// QTemporaryFile * createLocalFile(const class QString &)
extern "C"
void C_ZN14QTemporaryFile15createLocalFileERK7QString(const QString & fileName) {
  /*return*/ QTemporaryFile::createLocalFile(fileName);
}
// static inline
// /usr/include/qt/QtCore/qtemporaryfile.h:86
// QTemporaryFile * createLocalFile(class QFile &)
extern "C"
void C_ZN14QTemporaryFile15createLocalFileER5QFile(QFile & file) {
  /*return*/ QTemporaryFile::createLocalFile(file);
}
// static inline
// /usr/include/qt/QtCore/qtemporaryfile.h:89
// QTemporaryFile * createNativeFile(const class QString &)
extern "C"
void C_ZN14QTemporaryFile16createNativeFileERK7QString(const QString & fileName) {
  /*return*/ QTemporaryFile::createNativeFile(fileName);
}
// static
// /usr/include/qt/QtCore/qtemporaryfile.h:91
// QTemporaryFile * createNativeFile(class QFile &)
extern "C"
void C_ZN14QTemporaryFile16createNativeFileER5QFile(QFile & file) {
  /*return*/ QTemporaryFile::createNativeFile(file);
}