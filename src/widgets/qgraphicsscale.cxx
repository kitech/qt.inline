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

// QGraphicsScale is pure virtual: false
// QGraphicsScale has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsScale_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsScale_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsScale_t qt_meta_stringdata_MyQGraphicsScale = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQGraphicsScale"
  },
  "MyQGraphicsScale"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsScale[] = {
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
class Q_DECL_EXPORT MyQGraphicsScale : public QGraphicsScale {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsScale::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsScale.data,
  qt_meta_data_MyQGraphicsScale,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsScale.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsScale::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsScale::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsScale() {}
// void QGraphicsScale(QObject *)
MyQGraphicsScale(QObject * parent) : QGraphicsScale(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsScale_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsScale* qo = (MyQGraphicsScale*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScale10metaObjectEv(void *this_) {
  return (void*)((QGraphicsScale*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScale11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsScale*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QGraphicsScale11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsScale*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScale2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsScale::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScale6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsScale::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:88
// [-2] void QGraphicsScale(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScaleC2EP7QObject(QObject * parent) {
  return  new MyQGraphicsScale(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:89
// [-2] void ~QGraphicsScale()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScaleD2Ev(void *this_) {
  delete (QGraphicsScale*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:91
// [12] QVector3D origin()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScale6originEv(void *this_) {
  auto rv = ((QGraphicsScale*)this_)->origin();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:92
// [-2] void setOrigin(const QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale9setOriginERK9QVector3D(void *this_, QVector3D* point) {
  ((QGraphicsScale*)this_)->setOrigin(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:94
// [8] qreal xScale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScale6xScaleEv(void *this_) {
  return (qreal)((QGraphicsScale*)this_)->xScale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:95
// [-2] void setXScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale9setXScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setXScale(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:97
// [8] qreal yScale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScale6yScaleEv(void *this_) {
  return (qreal)((QGraphicsScale*)this_)->yScale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:98
// [-2] void setYScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale9setYScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setYScale(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:100
// [8] qreal zScale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScale6zScaleEv(void *this_) {
  return (qreal)((QGraphicsScale*)this_)->zScale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:101
// [-2] void setZScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale9setZScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setZScale(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:103
// [-2] void applyTo(QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZNK14QGraphicsScale7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsScale*)this_)->applyTo(matrix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:106
// [-2] void originChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13originChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->originChanged();
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qgraphicstransform.h:107
// [-2] void xScaleChanged()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13xScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->xScaleChanged();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qgraphicstransform.h:108
// [-2] void yScaleChanged()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13yScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->yScaleChanged();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qgraphicstransform.h:109
// [-2] void zScaleChanged()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13zScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->zScaleChanged();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:110
// [-2] void scaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale12scaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->scaleChanged();
}

//  main block end
