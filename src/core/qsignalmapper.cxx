// /usr/include/qt/QtCore/qsignalmapper.h
#include <qsignalmapper.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qsignalmapper.h:51
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QSignalMapper10metaObjectEv(void *this_) {
  /*return*/ ((QSignalMapper*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qsignalmapper.h:54
// void QSignalMapper(class QObject *)
extern "C"
void* C_ZN13QSignalMapperC1EP7QObject(QObject * parent) {
  return new QSignalMapper(parent);
}
// virtual
// /usr/include/qt/QtCore/qsignalmapper.h:55
// void ~QSignalMapper()
extern "C"
void C_ZN13QSignalMapperD1Ev(void *this_) {
  delete (QSignalMapper*)(this_);
}
// /usr/include/qt/QtCore/qsignalmapper.h:57
// void setMapping(class QObject *, int)
extern "C"
void C_ZN13QSignalMapper10setMappingEP7QObjecti(void *this_, QObject * sender, int id) {
  ((QSignalMapper*)this_)->setMapping(sender, id);
}
// /usr/include/qt/QtCore/qsignalmapper.h:58
// void setMapping(class QObject *, const class QString &)
extern "C"
void C_ZN13QSignalMapper10setMappingEP7QObjectRK7QString(void *this_, QObject * sender, const QString & text) {
  ((QSignalMapper*)this_)->setMapping(sender, text);
}
// /usr/include/qt/QtCore/qsignalmapper.h:59
// void setMapping(class QObject *, class QWidget *)
extern "C"
void C_ZN13QSignalMapper10setMappingEP7QObjectP7QWidget(void *this_, QObject * sender, QWidget * widget) {
  ((QSignalMapper*)this_)->setMapping(sender, widget);
}
// /usr/include/qt/QtCore/qsignalmapper.h:60
// void setMapping(class QObject *, class QObject *)
extern "C"
void C_ZN13QSignalMapper10setMappingEP7QObjectS1_(void *this_, QObject * sender, QObject * object) {
  ((QSignalMapper*)this_)->setMapping(sender, object);
}
// /usr/include/qt/QtCore/qsignalmapper.h:61
// void removeMappings(class QObject *)
extern "C"
void C_ZN13QSignalMapper14removeMappingsEP7QObject(void *this_, QObject * sender) {
  ((QSignalMapper*)this_)->removeMappings(sender);
}
// /usr/include/qt/QtCore/qsignalmapper.h:63
// QObject * mapping(int)
extern "C"
void C_ZNK13QSignalMapper7mappingEi(void *this_, int id) {
  /*return*/ ((QSignalMapper*)this_)->mapping(id);
}
// /usr/include/qt/QtCore/qsignalmapper.h:64
// QObject * mapping(const class QString &)
extern "C"
void C_ZNK13QSignalMapper7mappingERK7QString(void *this_, const QString & text) {
  /*return*/ ((QSignalMapper*)this_)->mapping(text);
}
// /usr/include/qt/QtCore/qsignalmapper.h:65
// QObject * mapping(class QWidget *)
extern "C"
void C_ZNK13QSignalMapper7mappingEP7QWidget(void *this_, QWidget * widget) {
  /*return*/ ((QSignalMapper*)this_)->mapping(widget);
}
// /usr/include/qt/QtCore/qsignalmapper.h:66
// QObject * mapping(class QObject *)
extern "C"
void C_ZNK13QSignalMapper7mappingEP7QObject(void *this_, QObject * object) {
  /*return*/ ((QSignalMapper*)this_)->mapping(object);
}
// /usr/include/qt/QtCore/qsignalmapper.h:69
// void mapped(int)
extern "C"
void C_ZN13QSignalMapper6mappedEi(void *this_, int a0) {
  ((QSignalMapper*)this_)->mapped(a0);
}
// /usr/include/qt/QtCore/qsignalmapper.h:70
// void mapped(const class QString &)
extern "C"
void C_ZN13QSignalMapper6mappedERK7QString(void *this_, const QString & a0) {
  ((QSignalMapper*)this_)->mapped(a0);
}
// /usr/include/qt/QtCore/qsignalmapper.h:71
// void mapped(class QWidget *)
extern "C"
void C_ZN13QSignalMapper6mappedEP7QWidget(void *this_, QWidget * a0) {
  ((QSignalMapper*)this_)->mapped(a0);
}
// /usr/include/qt/QtCore/qsignalmapper.h:72
// void mapped(class QObject *)
extern "C"
void C_ZN13QSignalMapper6mappedEP7QObject(void *this_, QObject * a0) {
  ((QSignalMapper*)this_)->mapped(a0);
}
// /usr/include/qt/QtCore/qsignalmapper.h:75
// void map()
extern "C"
void C_ZN13QSignalMapper3mapEv(void *this_) {
  ((QSignalMapper*)this_)->map();
}
// /usr/include/qt/QtCore/qsignalmapper.h:76
// void map(class QObject *)
extern "C"
void C_ZN13QSignalMapper3mapEP7QObject(void *this_, QObject * sender) {
  ((QSignalMapper*)this_)->map(sender);
}