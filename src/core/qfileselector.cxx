// /usr/include/qt/QtCore/qfileselector.h
#include <qfileselector.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qfileselector.h:51
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QFileSelector10metaObjectEv(void *this_) {
  /*return*/ ((QFileSelector*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qfileselector.h:53
// void QFileSelector(class QObject *)
extern "C"
void* C_ZN13QFileSelectorC1EP7QObject(QObject * parent) {
  return new QFileSelector(parent);
}
// virtual
// /usr/include/qt/QtCore/qfileselector.h:54
// void ~QFileSelector()
extern "C"
void C_ZN13QFileSelectorD1Ev(void *this_) {
  delete (QFileSelector*)(this_);
}
// /usr/include/qt/QtCore/qfileselector.h:56
// QString select(const class QString &)
extern "C"
void C_ZNK13QFileSelector6selectERK7QString(void *this_, const QString & filePath) {
  /*return*/ ((QFileSelector*)this_)->select(filePath);
}
// /usr/include/qt/QtCore/qfileselector.h:57
// QUrl select(const class QUrl &)
extern "C"
void C_ZNK13QFileSelector6selectERK4QUrl(void *this_, const QUrl & filePath) {
  /*return*/ ((QFileSelector*)this_)->select(filePath);
}
// /usr/include/qt/QtCore/qfileselector.h:59
// QStringList extraSelectors()
extern "C"
void C_ZNK13QFileSelector14extraSelectorsEv(void *this_) {
  /*return*/ ((QFileSelector*)this_)->extraSelectors();
}
// /usr/include/qt/QtCore/qfileselector.h:60
// void setExtraSelectors(const class QStringList &)
extern "C"
void C_ZN13QFileSelector17setExtraSelectorsERK11QStringList(void *this_, const QStringList & list) {
  ((QFileSelector*)this_)->setExtraSelectors(list);
}
// /usr/include/qt/QtCore/qfileselector.h:62
// QStringList allSelectors()
extern "C"
void C_ZNK13QFileSelector12allSelectorsEv(void *this_) {
  /*return*/ ((QFileSelector*)this_)->allSelectors();
}