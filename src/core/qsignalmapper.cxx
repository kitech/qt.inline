//  header block begin
// /usr/include/qt/QtCore/qsignalmapper.h
#ifndef protected
#define protected public
#endif
#include <qsignalmapper.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalMapper is pure virtual: false
// QSignalMapper has virtual projected: false
//  header block end

//  main block begin

class MyQSignalMapper : public QSignalMapper {
public:
  virtual ~MyQSignalMapper() {}
// void QSignalMapper(class QObject *)
MyQSignalMapper(QObject * parent) : QSignalMapper(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QSignalMapper10metaObjectEv(void *this_) {
  return (void*)((QSignalMapper*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:56
// [-2] void QSignalMapper(class QObject *)
extern "C"
void* C_ZN13QSignalMapperC2EP7QObject(QObject * parent) {
  return  new QSignalMapper(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:57
// [-2] void ~QSignalMapper()
extern "C"
void C_ZN13QSignalMapperD2Ev(void *this_) {
  delete (QSignalMapper*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:59
// [-2] void setMapping(class QObject *, int)
extern "C"
void C_ZN13QSignalMapper10setMappingEP7QObjecti(void *this_, QObject * sender, int id) {
  ((QSignalMapper*)this_)->setMapping(sender, id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:60
// [-2] void setMapping(class QObject *, const class QString &)
extern "C"
void C_ZN13QSignalMapper10setMappingEP7QObjectRK7QString(void *this_, QObject * sender, QString* text) {
  ((QSignalMapper*)this_)->setMapping(sender, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:61
// [-2] void setMapping(class QObject *, class QWidget *)
extern "C"
void C_ZN13QSignalMapper10setMappingEP7QObjectP7QWidget(void *this_, QObject * sender, QWidget * widget) {
  ((QSignalMapper*)this_)->setMapping(sender, widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:62
// [-2] void setMapping(class QObject *, class QObject *)
extern "C"
void C_ZN13QSignalMapper10setMappingEP7QObjectS1_(void *this_, QObject * sender, QObject * object) {
  ((QSignalMapper*)this_)->setMapping(sender, object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:63
// [-2] void removeMappings(class QObject *)
extern "C"
void C_ZN13QSignalMapper14removeMappingsEP7QObject(void *this_, QObject * sender) {
  ((QSignalMapper*)this_)->removeMappings(sender);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:65
// [8] QObject * mapping(int)
extern "C"
void* C_ZNK13QSignalMapper7mappingEi(void *this_, int id) {
  return (void*)((QSignalMapper*)this_)->mapping(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:66
// [8] QObject * mapping(const class QString &)
extern "C"
void* C_ZNK13QSignalMapper7mappingERK7QString(void *this_, QString* text) {
  return (void*)((QSignalMapper*)this_)->mapping(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:67
// [8] QObject * mapping(class QWidget *)
extern "C"
void* C_ZNK13QSignalMapper7mappingEP7QWidget(void *this_, QWidget * widget) {
  return (void*)((QSignalMapper*)this_)->mapping(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:68
// [8] QObject * mapping(class QObject *)
extern "C"
void* C_ZNK13QSignalMapper7mappingEP7QObject(void *this_, QObject * object) {
  return (void*)((QSignalMapper*)this_)->mapping(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:71
// [-2] void mapped(int)
extern "C"
void C_ZN13QSignalMapper6mappedEi(void *this_, int arg0) {
  ((QSignalMapper*)this_)->mapped(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:72
// [-2] void mapped(const class QString &)
extern "C"
void C_ZN13QSignalMapper6mappedERK7QString(void *this_, QString* arg0) {
  ((QSignalMapper*)this_)->mapped(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:73
// [-2] void mapped(class QWidget *)
extern "C"
void C_ZN13QSignalMapper6mappedEP7QWidget(void *this_, QWidget * arg0) {
  ((QSignalMapper*)this_)->mapped(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:74
// [-2] void mapped(class QObject *)
extern "C"
void C_ZN13QSignalMapper6mappedEP7QObject(void *this_, QObject * arg0) {
  ((QSignalMapper*)this_)->mapped(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:77
// [-2] void map()
extern "C"
void C_ZN13QSignalMapper3mapEv(void *this_) {
  ((QSignalMapper*)this_)->map();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:78
// [-2] void map(class QObject *)
extern "C"
void C_ZN13QSignalMapper3mapEP7QObject(void *this_, QObject * sender) {
  ((QSignalMapper*)this_)->map(sender);
}

//  main block end
