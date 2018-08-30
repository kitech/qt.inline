//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qqmlproperty.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlproperty.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlProperty is pure virtual: false
// QQmlProperty has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlProperty_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlProperty_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlProperty_t qt_meta_stringdata_MyQQmlProperty = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQQmlProperty"
  },
  "MyQQmlProperty"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlProperty[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQQmlProperty : public QQmlProperty {
public:
  virtual ~MyQQmlProperty() {}
// void QQmlProperty()
MyQQmlProperty() : QQmlProperty() {}
// void QQmlProperty(QObject *)
MyQQmlProperty(QObject * arg0) : QQmlProperty(arg0) {}
// void QQmlProperty(QObject *, QQmlContext *)
MyQQmlProperty(QObject * arg0, QQmlContext * arg1) : QQmlProperty(arg0, arg1) {}
// void QQmlProperty(QObject *, QQmlEngine *)
MyQQmlProperty(QObject * arg0, QQmlEngine * arg1) : QQmlProperty(arg0, arg1) {}
// void QQmlProperty(QObject *, const QString &)
MyQQmlProperty(QObject * arg0, const QString & arg1) : QQmlProperty(arg0, arg1) {}
// void QQmlProperty(QObject *, const QString &, QQmlContext *)
MyQQmlProperty(QObject * arg0, const QString & arg1, QQmlContext * arg2) : QQmlProperty(arg0, arg1, arg2) {}
// void QQmlProperty(QObject *, const QString &, QQmlEngine *)
MyQQmlProperty(QObject * arg0, const QString & arg1, QQmlEngine * arg2) : QQmlProperty(arg0, arg1, arg2) {}
// void QQmlProperty(const QQmlProperty &)
MyQQmlProperty(const QQmlProperty & arg0) : QQmlProperty(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:71
// [-2] void QQmlProperty()
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyC2Ev() {
  return  new QQmlProperty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:72
// [-2] void ~QQmlProperty()
extern "C" Q_DECL_EXPORT
void C_ZN12QQmlPropertyD2Ev(void *this_) {
  delete (QQmlProperty*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:74
// [-2] void QQmlProperty(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyC2EP7QObject(QObject * arg0) {
  return  new QQmlProperty(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:75
// [-2] void QQmlProperty(QObject *, QQmlContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyC2EP7QObjectP11QQmlContext(QObject * arg0, QQmlContext * arg1) {
  return  new QQmlProperty(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:76
// [-2] void QQmlProperty(QObject *, QQmlEngine *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyC2EP7QObjectP10QQmlEngine(QObject * arg0, QQmlEngine * arg1) {
  return  new QQmlProperty(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:78
// [-2] void QQmlProperty(QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyC2EP7QObjectRK7QString(QObject * arg0, QString* arg1) {
  return  new QQmlProperty(arg0, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:79
// [-2] void QQmlProperty(QObject *, const QString &, QQmlContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyC2EP7QObjectRK7QStringP11QQmlContext(QObject * arg0, QString* arg1, QQmlContext * arg2) {
  return  new QQmlProperty(arg0, *arg1, arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:80
// [-2] void QQmlProperty(QObject *, const QString &, QQmlEngine *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyC2EP7QObjectRK7QStringP10QQmlEngine(QObject * arg0, QString* arg1, QQmlEngine * arg2) {
  return  new QQmlProperty(arg0, *arg1, arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:82
// [-2] void QQmlProperty(const QQmlProperty &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyC2ERKS_(QQmlProperty* arg0) {
  return  new QQmlProperty(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:83
// [8] QQmlProperty & operator=(const QQmlProperty &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlPropertyaSERKS_(void *this_, QQmlProperty* arg0) {
  auto& rv = ((QQmlProperty*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:85
// [1] bool operator==(const QQmlProperty &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlPropertyeqERKS_(void *this_, QQmlProperty* arg0) {
  return (bool)((QQmlProperty*)this_)->operator==(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:87
// [4] QQmlProperty::Type type()
extern "C" Q_DECL_EXPORT
QQmlProperty::Type C_ZNK12QQmlProperty4typeEv(void *this_) {
  return (QQmlProperty::Type)((QQmlProperty*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:88
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty7isValidEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:89
// [1] bool isProperty()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty10isPropertyEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->isProperty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:90
// [1] bool isSignalProperty()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty16isSignalPropertyEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->isSignalProperty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:92
// [4] int propertyType()
extern "C" Q_DECL_EXPORT
int C_ZNK12QQmlProperty12propertyTypeEv(void *this_) {
  return (int)((QQmlProperty*)this_)->propertyType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:93
// [4] QQmlProperty::PropertyTypeCategory propertyTypeCategory()
extern "C" Q_DECL_EXPORT
QQmlProperty::PropertyTypeCategory C_ZNK12QQmlProperty20propertyTypeCategoryEv(void *this_) {
  return (QQmlProperty::PropertyTypeCategory)((QQmlProperty*)this_)->propertyTypeCategory();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:94
// [8] const char * propertyTypeName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQmlProperty16propertyTypeNameEv(void *this_) {
  return (void*)((QQmlProperty*)this_)->propertyTypeName();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:96
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQmlProperty4nameEv(void *this_) {
  auto rv = ((QQmlProperty*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:98
// [16] QVariant read()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQmlProperty4readEv(void *this_) {
  auto rv = ((QQmlProperty*)this_)->read();
return new QVariant(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:99
// [16] QVariant read(const QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlProperty4readEPK7QObjectRK7QString(const QObject * arg0, QString* arg1) {
  auto rv = QQmlProperty::read(arg0, *arg1);
return new QVariant(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:100
// [16] QVariant read(const QObject *, const QString &, QQmlContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlProperty4readEPK7QObjectRK7QStringP11QQmlContext(const QObject * arg0, QString* arg1, QQmlContext * arg2) {
  auto rv = QQmlProperty::read(arg0, *arg1, arg2);
return new QVariant(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:101
// [16] QVariant read(const QObject *, const QString &, QQmlEngine *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQmlProperty4readEPK7QObjectRK7QStringP10QQmlEngine(const QObject * arg0, QString* arg1, QQmlEngine * arg2) {
  auto rv = QQmlProperty::read(arg0, *arg1, arg2);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:103
// [1] bool write(const QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty5writeERK8QVariant(void *this_, QVariant* arg0) {
  return (bool)((QQmlProperty*)this_)->write(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:104
// [1] bool write(QObject *, const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariant(QObject * arg0, QString* arg1, QVariant* arg2) {
  return (bool)QQmlProperty::write(arg0, *arg1, *arg2);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:105
// [1] bool write(QObject *, const QString &, const QVariant &, QQmlContext *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariantP11QQmlContext(QObject * arg0, QString* arg1, QVariant* arg2, QQmlContext * arg3) {
  return (bool)QQmlProperty::write(arg0, *arg1, *arg2, arg3);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:106
// [1] bool write(QObject *, const QString &, const QVariant &, QQmlEngine *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariantP10QQmlEngine(QObject * arg0, QString* arg1, QVariant* arg2, QQmlEngine * arg3) {
  return (bool)QQmlProperty::write(arg0, *arg1, *arg2, arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:108
// [1] bool reset()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty5resetEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:110
// [1] bool hasNotifySignal()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty15hasNotifySignalEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->hasNotifySignal();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:111
// [1] bool needsNotifySignal()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty17needsNotifySignalEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->needsNotifySignal();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:112
// [1] bool connectNotifySignal(QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty19connectNotifySignalEP7QObjectPKc(void *this_, QObject * dest, const char * slot) {
  return (bool)((QQmlProperty*)this_)->connectNotifySignal(dest, slot);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:113
// [1] bool connectNotifySignal(QObject *, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty19connectNotifySignalEP7QObjecti(void *this_, QObject * dest, int method) {
  return (bool)((QQmlProperty*)this_)->connectNotifySignal(dest, method);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:115
// [1] bool isWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty10isWritableEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->isWritable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:116
// [1] bool isDesignable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty12isDesignableEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->isDesignable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:117
// [1] bool isResettable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQmlProperty12isResettableEv(void *this_) {
  return (bool)((QQmlProperty*)this_)->isResettable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:118
// [8] QObject * object()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQmlProperty6objectEv(void *this_) {
  return (void*)((QQmlProperty*)this_)->object();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:120
// [4] int index()
extern "C" Q_DECL_EXPORT
int C_ZNK12QQmlProperty5indexEv(void *this_) {
  return (int)((QQmlProperty*)this_)->index();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:121
// [32] QMetaProperty property()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQmlProperty8propertyEv(void *this_) {
  auto rv = ((QQmlProperty*)this_)->property();
return new QMetaProperty(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:122
// [16] QMetaMethod method()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQmlProperty6methodEv(void *this_) {
  auto rv = ((QQmlProperty*)this_)->method();
return new QMetaMethod(rv);
}

//  main block end
