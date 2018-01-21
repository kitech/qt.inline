//  header block begin
// /usr/include/qt/QtCore/qmetaobject.h
#include <qmetaobject.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qmetaobject.h:251
// void QMetaProperty()
extern "C"
void* C_ZN13QMetaPropertyC1Ev() {
  return new QMetaProperty();
}
// /usr/include/qt/QtCore/qmetaobject.h:253
// const char * name()
extern "C"
void C_ZNK13QMetaProperty4nameEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->name();
}
// /usr/include/qt/QtCore/qmetaobject.h:254
// const char * typeName()
extern "C"
void C_ZNK13QMetaProperty8typeNameEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->typeName();
}
// /usr/include/qt/QtCore/qmetaobject.h:255
// QVariant::Type type()
extern "C"
void C_ZNK13QMetaProperty4typeEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->type();
}
// /usr/include/qt/QtCore/qmetaobject.h:256
// int userType()
extern "C"
void C_ZNK13QMetaProperty8userTypeEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->userType();
}
// /usr/include/qt/QtCore/qmetaobject.h:257
// int propertyIndex()
extern "C"
void C_ZNK13QMetaProperty13propertyIndexEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->propertyIndex();
}
// /usr/include/qt/QtCore/qmetaobject.h:259
// bool isReadable()
extern "C"
void C_ZNK13QMetaProperty10isReadableEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->isReadable();
}
// /usr/include/qt/QtCore/qmetaobject.h:260
// bool isWritable()
extern "C"
void C_ZNK13QMetaProperty10isWritableEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->isWritable();
}
// /usr/include/qt/QtCore/qmetaobject.h:261
// bool isResettable()
extern "C"
void C_ZNK13QMetaProperty12isResettableEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->isResettable();
}
// /usr/include/qt/QtCore/qmetaobject.h:262
// bool isDesignable(const class QObject *)
extern "C"
void C_ZNK13QMetaProperty12isDesignableEPK7QObject(void *this_, const QObject * obj) {
  /*return*/ ((QMetaProperty*)this_)->isDesignable(obj);
}
// /usr/include/qt/QtCore/qmetaobject.h:263
// bool isScriptable(const class QObject *)
extern "C"
void C_ZNK13QMetaProperty12isScriptableEPK7QObject(void *this_, const QObject * obj) {
  /*return*/ ((QMetaProperty*)this_)->isScriptable(obj);
}
// /usr/include/qt/QtCore/qmetaobject.h:264
// bool isStored(const class QObject *)
extern "C"
void C_ZNK13QMetaProperty8isStoredEPK7QObject(void *this_, const QObject * obj) {
  /*return*/ ((QMetaProperty*)this_)->isStored(obj);
}
// /usr/include/qt/QtCore/qmetaobject.h:265
// bool isEditable(const class QObject *)
extern "C"
void C_ZNK13QMetaProperty10isEditableEPK7QObject(void *this_, const QObject * obj) {
  /*return*/ ((QMetaProperty*)this_)->isEditable(obj);
}
// /usr/include/qt/QtCore/qmetaobject.h:266
// bool isUser(const class QObject *)
extern "C"
void C_ZNK13QMetaProperty6isUserEPK7QObject(void *this_, const QObject * obj) {
  /*return*/ ((QMetaProperty*)this_)->isUser(obj);
}
// /usr/include/qt/QtCore/qmetaobject.h:267
// bool isConstant()
extern "C"
void C_ZNK13QMetaProperty10isConstantEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->isConstant();
}
// /usr/include/qt/QtCore/qmetaobject.h:268
// bool isFinal()
extern "C"
void C_ZNK13QMetaProperty7isFinalEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->isFinal();
}
// /usr/include/qt/QtCore/qmetaobject.h:270
// bool isFlagType()
extern "C"
void C_ZNK13QMetaProperty10isFlagTypeEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->isFlagType();
}
// /usr/include/qt/QtCore/qmetaobject.h:271
// bool isEnumType()
extern "C"
void C_ZNK13QMetaProperty10isEnumTypeEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->isEnumType();
}
// /usr/include/qt/QtCore/qmetaobject.h:272
// QMetaEnum enumerator()
extern "C"
void C_ZNK13QMetaProperty10enumeratorEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->enumerator();
}
// /usr/include/qt/QtCore/qmetaobject.h:274
// bool hasNotifySignal()
extern "C"
void C_ZNK13QMetaProperty15hasNotifySignalEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->hasNotifySignal();
}
// /usr/include/qt/QtCore/qmetaobject.h:275
// QMetaMethod notifySignal()
extern "C"
void C_ZNK13QMetaProperty12notifySignalEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->notifySignal();
}
// /usr/include/qt/QtCore/qmetaobject.h:276
// int notifySignalIndex()
extern "C"
void C_ZNK13QMetaProperty17notifySignalIndexEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->notifySignalIndex();
}
// /usr/include/qt/QtCore/qmetaobject.h:278
// int revision()
extern "C"
void C_ZNK13QMetaProperty8revisionEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->revision();
}
// /usr/include/qt/QtCore/qmetaobject.h:280
// QVariant read(const class QObject *)
extern "C"
void C_ZNK13QMetaProperty4readEPK7QObject(void *this_, const QObject * obj) {
  /*return*/ ((QMetaProperty*)this_)->read(obj);
}
// /usr/include/qt/QtCore/qmetaobject.h:281
// bool write(class QObject *, const class QVariant &)
extern "C"
void C_ZNK13QMetaProperty5writeEP7QObjectRK8QVariant(void *this_, QObject * obj, const QVariant & value) {
  /*return*/ ((QMetaProperty*)this_)->write(obj, value);
}
// /usr/include/qt/QtCore/qmetaobject.h:282
// bool reset(class QObject *)
extern "C"
void C_ZNK13QMetaProperty5resetEP7QObject(void *this_, QObject * obj) {
  /*return*/ ((QMetaProperty*)this_)->reset(obj);
}
// /usr/include/qt/QtCore/qmetaobject.h:284
// QVariant readOnGadget(const void *)
extern "C"
void C_ZNK13QMetaProperty12readOnGadgetEPKv(void *this_, const void * gadget) {
  /*return*/ ((QMetaProperty*)this_)->readOnGadget(gadget);
}
// /usr/include/qt/QtCore/qmetaobject.h:285
// bool writeOnGadget(void *, const class QVariant &)
extern "C"
void C_ZNK13QMetaProperty13writeOnGadgetEPvRK8QVariant(void *this_, void * gadget, const QVariant & value) {
  /*return*/ ((QMetaProperty*)this_)->writeOnGadget(gadget, value);
}
// /usr/include/qt/QtCore/qmetaobject.h:286
// bool resetOnGadget(void *)
extern "C"
void C_ZNK13QMetaProperty13resetOnGadgetEPv(void *this_, void * gadget) {
  /*return*/ ((QMetaProperty*)this_)->resetOnGadget(gadget);
}
// /usr/include/qt/QtCore/qmetaobject.h:288
// bool hasStdCppSet()
extern "C"
void C_ZNK13QMetaProperty12hasStdCppSetEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->hasStdCppSet();
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:289
// bool isValid()
extern "C"
void C_ZNK13QMetaProperty7isValidEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->isValid();
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:290
// const QMetaObject * enclosingMetaObject()
extern "C"
void C_ZNK13QMetaProperty19enclosingMetaObjectEv(void *this_) {
  /*return*/ ((QMetaProperty*)this_)->enclosingMetaObject();
}
//  main block end
