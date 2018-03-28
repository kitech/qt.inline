//  header block begin
// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaProperty is pure virtual: false
// QMetaProperty has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMetaProperty : public QMetaProperty {
public:
  virtual ~MyQMetaProperty() {}
// void QMetaProperty()
MyQMetaProperty() : QMetaProperty() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:248
// [-2] void QMetaProperty()
extern "C" Q_DECL_EXPORT
void* C_ZN13QMetaPropertyC2Ev() {
  return  new QMetaProperty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:250
// [8] const char * name()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMetaProperty4nameEv(void *this_) {
  return (void*)((QMetaProperty*)this_)->name();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:251
// [8] const char * typeName()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMetaProperty8typeNameEv(void *this_) {
  return (void*)((QMetaProperty*)this_)->typeName();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:252
// [4] QVariant::Type type()
extern "C" Q_DECL_EXPORT
QVariant::Type C_ZNK13QMetaProperty4typeEv(void *this_) {
  return (QVariant::Type)((QMetaProperty*)this_)->type();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qmetaobject.h:253
// [4] int userType()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK13QMetaProperty8userTypeEv(void *this_) {
  return (int)((QMetaProperty*)this_)->userType();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qmetaobject.h:254
// [4] int propertyIndex()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK13QMetaProperty13propertyIndexEv(void *this_) {
  return (int)((QMetaProperty*)this_)->propertyIndex();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:256
// [1] bool isReadable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty10isReadableEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->isReadable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:257
// [1] bool isWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty10isWritableEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->isWritable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:258
// [1] bool isResettable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty12isResettableEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->isResettable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:259
// [1] bool isDesignable(const QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty12isDesignableEPK7QObject(void *this_, const QObject * obj) {
  return (bool)((QMetaProperty*)this_)->isDesignable(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:260
// [1] bool isScriptable(const QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty12isScriptableEPK7QObject(void *this_, const QObject * obj) {
  return (bool)((QMetaProperty*)this_)->isScriptable(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:261
// [1] bool isStored(const QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty8isStoredEPK7QObject(void *this_, const QObject * obj) {
  return (bool)((QMetaProperty*)this_)->isStored(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:262
// [1] bool isEditable(const QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty10isEditableEPK7QObject(void *this_, const QObject * obj) {
  return (bool)((QMetaProperty*)this_)->isEditable(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:263
// [1] bool isUser(const QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty6isUserEPK7QObject(void *this_, const QObject * obj) {
  return (bool)((QMetaProperty*)this_)->isUser(obj);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qmetaobject.h:264
// [1] bool isConstant()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty10isConstantEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->isConstant();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qmetaobject.h:265
// [1] bool isFinal()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty7isFinalEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->isFinal();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:267
// [1] bool isFlagType()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty10isFlagTypeEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->isFlagType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:268
// [1] bool isEnumType()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty10isEnumTypeEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->isEnumType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:269
// [16] QMetaEnum enumerator()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMetaProperty10enumeratorEv(void *this_) {
  auto rv = ((QMetaProperty*)this_)->enumerator();
return new QMetaEnum(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:271
// [1] bool hasNotifySignal()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty15hasNotifySignalEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->hasNotifySignal();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qmetaobject.h:272
// [16] QMetaMethod notifySignal()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMetaProperty12notifySignalEv(void *this_) {
  auto rv = ((QMetaProperty*)this_)->notifySignal();
return new QMetaMethod(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qmetaobject.h:273
// [4] int notifySignalIndex()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK13QMetaProperty17notifySignalIndexEv(void *this_) {
  return (int)((QMetaProperty*)this_)->notifySignalIndex();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qmetaobject.h:275
// [4] int revision()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
int C_ZNK13QMetaProperty8revisionEv(void *this_) {
  return (int)((QMetaProperty*)this_)->revision();
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:277
// [16] QVariant read(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMetaProperty4readEPK7QObject(void *this_, const QObject * obj) {
  auto rv = ((QMetaProperty*)this_)->read(obj);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:278
// [1] bool write(QObject *, const QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty5writeEP7QObjectRK8QVariant(void *this_, QObject * obj, QVariant* value) {
  return (bool)((QMetaProperty*)this_)->write(obj, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:279
// [1] bool reset(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty5resetEP7QObject(void *this_, QObject * obj) {
  return (bool)((QMetaProperty*)this_)->reset(obj);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qmetaobject.h:281
// [16] QVariant readOnGadget(const void *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMetaProperty12readOnGadgetEPKv(void *this_, const void * gadget) {
  auto rv = ((QMetaProperty*)this_)->readOnGadget(gadget);
return new QVariant(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qmetaobject.h:282
// [1] bool writeOnGadget(void *, const QVariant &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty13writeOnGadgetEPvRK8QVariant(void *this_, void * gadget, QVariant* value) {
  return (bool)((QMetaProperty*)this_)->writeOnGadget(gadget, *value);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qmetaobject.h:283
// [1] bool resetOnGadget(void *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty13resetOnGadgetEPv(void *this_, void * gadget) {
  return (bool)((QMetaProperty*)this_)->resetOnGadget(gadget);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:285
// [1] bool hasStdCppSet()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty12hasStdCppSetEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->hasStdCppSet();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:286
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMetaProperty7isValidEv(void *this_) {
  return (bool)((QMetaProperty*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:287
// [8] const QMetaObject * enclosingMetaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMetaProperty19enclosingMetaObjectEv(void *this_) {
  return (void*)((QMetaProperty*)this_)->enclosingMetaObject();
}


extern "C" Q_DECL_EXPORT
void C_ZN13QMetaPropertyD2Ev(void *this_) {
  delete (QMetaProperty*)(this_);
}
//  main block end
