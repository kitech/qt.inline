//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(datawidgetmapper)
// since 0x040200
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatawidgetmapper.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDataWidgetMapper is pure virtual: false
// QDataWidgetMapper has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDataWidgetMapper_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDataWidgetMapper_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDataWidgetMapper_t qt_meta_stringdata_MyQDataWidgetMapper = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQDataWidgetMapper"
  },
  "MyQDataWidgetMapper"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDataWidgetMapper[] = {
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
class Q_DECL_EXPORT MyQDataWidgetMapper : public QDataWidgetMapper {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDataWidgetMapper::staticMetaObject,
  qt_meta_stringdata_MyQDataWidgetMapper.data,
  qt_meta_data_MyQDataWidgetMapper,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQDataWidgetMapper.stringdata0))
      return static_cast<void*>(this);
  return QDataWidgetMapper::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDataWidgetMapper::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQDataWidgetMapper() {}
// void QDataWidgetMapper(QObject *)
MyQDataWidgetMapper(QObject * parent) : QDataWidgetMapper(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QDataWidgetMapper_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDataWidgetMapper* qo = (MyQDataWidgetMapper*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper10metaObjectEv(void *this_) {
  return (void*)((QDataWidgetMapper*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QDataWidgetMapper11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDataWidgetMapper*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QDataWidgetMapper11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDataWidgetMapper*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QDataWidgetMapper2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDataWidgetMapper::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QDataWidgetMapper6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDataWidgetMapper::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:64
// [-2] void QDataWidgetMapper(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QDataWidgetMapperC2EP7QObject(QObject * parent) {
  return  new MyQDataWidgetMapper(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:65
// [-2] void ~QDataWidgetMapper()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapperD2Ev(void *this_) {
  delete (QDataWidgetMapper*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:67
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QDataWidgetMapper*)this_)->setModel(model);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:68
// [8] QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper5modelEv(void *this_) {
  return (void*)((QDataWidgetMapper*)this_)->model();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:70
// [-2] void setItemDelegate(QAbstractItemDelegate *)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QDataWidgetMapper*)this_)->setItemDelegate(delegate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:71
// [8] QAbstractItemDelegate * itemDelegate()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper12itemDelegateEv(void *this_) {
  return (void*)((QDataWidgetMapper*)this_)->itemDelegate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:73
// [-2] void setRootIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QDataWidgetMapper*)this_)->setRootIndex(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:74
// [24] QModelIndex rootIndex()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper9rootIndexEv(void *this_) {
  auto rv = ((QDataWidgetMapper*)this_)->rootIndex();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:76
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation aOrientation) {
  ((QDataWidgetMapper*)this_)->setOrientation(aOrientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:77
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK17QDataWidgetMapper11orientationEv(void *this_) {
  return (Qt::Orientation)((QDataWidgetMapper*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:81
// [-2] void setSubmitPolicy(QDataWidgetMapper::SubmitPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper15setSubmitPolicyENS_12SubmitPolicyE(void *this_, QDataWidgetMapper::SubmitPolicy policy) {
  ((QDataWidgetMapper*)this_)->setSubmitPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:82
// [4] QDataWidgetMapper::SubmitPolicy submitPolicy()
extern "C" Q_DECL_EXPORT
QDataWidgetMapper::SubmitPolicy C_ZNK17QDataWidgetMapper12submitPolicyEv(void *this_) {
  return (QDataWidgetMapper::SubmitPolicy)((QDataWidgetMapper*)this_)->submitPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:84
// [-2] void addMapping(QWidget *, int)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper10addMappingEP7QWidgeti(void *this_, QWidget * widget, int section) {
  ((QDataWidgetMapper*)this_)->addMapping(widget, section);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:85
// [-2] void addMapping(QWidget *, int, const QByteArray &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper10addMappingEP7QWidgetiRK10QByteArray(void *this_, QWidget * widget, int section, QByteArray* propertyName) {
  ((QDataWidgetMapper*)this_)->addMapping(widget, section, *propertyName);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:86
// [-2] void removeMapping(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper13removeMappingEP7QWidget(void *this_, QWidget * widget) {
  ((QDataWidgetMapper*)this_)->removeMapping(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:87
// [4] int mappedSection(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK17QDataWidgetMapper13mappedSectionEP7QWidget(void *this_, QWidget * widget) {
  return (int)((QDataWidgetMapper*)this_)->mappedSection(widget);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:88
// [8] QByteArray mappedPropertyName(QWidget *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper18mappedPropertyNameEP7QWidget(void *this_, QWidget * widget) {
  auto rv = ((QDataWidgetMapper*)this_)->mappedPropertyName(widget);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:89
// [8] QWidget * mappedWidgetAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper14mappedWidgetAtEi(void *this_, int section) {
  return (void*)((QDataWidgetMapper*)this_)->mappedWidgetAt(section);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:90
// [-2] void clearMapping()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper12clearMappingEv(void *this_) {
  ((QDataWidgetMapper*)this_)->clearMapping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:92
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK17QDataWidgetMapper12currentIndexEv(void *this_) {
  return (int)((QDataWidgetMapper*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:95
// [-2] void revert()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper6revertEv(void *this_) {
  ((QDataWidgetMapper*)this_)->revert();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:96
// [1] bool submit()
extern "C" Q_DECL_EXPORT
bool C_ZN17QDataWidgetMapper6submitEv(void *this_) {
  return (bool)((QDataWidgetMapper*)this_)->submit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:98
// [-2] void toFirst()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper7toFirstEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toFirst();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:99
// [-2] void toLast()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper6toLastEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toLast();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:100
// [-2] void toNext()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper6toNextEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toNext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:101
// [-2] void toPrevious()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper10toPreviousEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toPrevious();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:102
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper15setCurrentIndexEi(void *this_, int index) {
  ((QDataWidgetMapper*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:103
// [-2] void setCurrentModelIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper20setCurrentModelIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QDataWidgetMapper*)this_)->setCurrentModelIndex(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:106
// [-2] void currentIndexChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper19currentIndexChangedEi(void *this_, int index) {
  ((QDataWidgetMapper*)this_)->currentIndexChanged(index);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(datawidgetmapper)
#endif // #ifndef QT_MINIMAL
//  footer block end
