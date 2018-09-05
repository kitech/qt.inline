//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsRotation is pure virtual: false
// QGraphicsRotation has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsRotation_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsRotation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsRotation_t qt_meta_stringdata_MyQGraphicsRotation = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQGraphicsRotation"
  },
  "MyQGraphicsRotation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsRotation[] = {
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
class Q_DECL_EXPORT MyQGraphicsRotation : public QGraphicsRotation {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsRotation::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsRotation.data,
  qt_meta_data_MyQGraphicsRotation,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsRotation.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsRotation::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsRotation::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsRotation() {}
// void QGraphicsRotation(QObject *)
MyQGraphicsRotation(QObject * parent) : QGraphicsRotation(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsRotation_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsRotation* qo = (MyQGraphicsRotation*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:120
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRotation10metaObjectEv(void *this_) {
  return (void*)((QGraphicsRotation*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:120
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRotation11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsRotation*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:120
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QGraphicsRotation11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsRotation*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:120
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRotation2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsRotation::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:120
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRotation6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsRotation::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:126
// [-2] void QGraphicsRotation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRotationC2EP7QObject(QObject * parent) {
  return  new MyQGraphicsRotation(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:127
// [-2] void ~QGraphicsRotation()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotationD2Ev(void *this_) {
  delete (QGraphicsRotation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:129
// [12] QVector3D origin()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRotation6originEv(void *this_) {
  auto rv = ((QGraphicsRotation*)this_)->origin();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:130
// [-2] void setOrigin(const QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation9setOriginERK9QVector3D(void *this_, QVector3D* point) {
  ((QGraphicsRotation*)this_)->setOrigin(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:132
// [8] qreal angle()
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QGraphicsRotation5angleEv(void *this_) {
  return (qreal)((QGraphicsRotation*)this_)->angle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:133
// [-2] void setAngle(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation8setAngleEd(void *this_, qreal arg0) {
  ((QGraphicsRotation*)this_)->setAngle(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:135
// [12] QVector3D axis()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRotation4axisEv(void *this_) {
  auto rv = ((QGraphicsRotation*)this_)->axis();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:136
// [-2] void setAxis(const QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation7setAxisERK9QVector3D(void *this_, QVector3D* axis) {
  ((QGraphicsRotation*)this_)->setAxis(*axis);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:137
// [-2] void setAxis(Qt::Axis)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation7setAxisEN2Qt4AxisE(void *this_, Qt::Axis axis) {
  ((QGraphicsRotation*)this_)->setAxis(axis);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:139
// [-2] void applyTo(QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZNK17QGraphicsRotation7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsRotation*)this_)->applyTo(matrix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:142
// [-2] void originChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation13originChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->originChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:143
// [-2] void angleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation12angleChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->angleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:144
// [-2] void axisChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation11axisChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->axisChanged();
}

//  main block end
