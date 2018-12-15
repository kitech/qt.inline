//  header block begin

// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitemanimation.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsItemAnimation is pure virtual: false
// QGraphicsItemAnimation has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsItemAnimation_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsItemAnimation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsItemAnimation_t qt_meta_stringdata_MyQGraphicsItemAnimation = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQGraphicsItemAnimation"
  },
  "MyQGraphicsItemAnimation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsItemAnimation[] = {
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
class Q_DECL_EXPORT MyQGraphicsItemAnimation : public QGraphicsItemAnimation {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsItemAnimation::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsItemAnimation.data,
  qt_meta_data_MyQGraphicsItemAnimation,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsItemAnimation.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsItemAnimation::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsItemAnimation::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsItemAnimation() {}
// void QGraphicsItemAnimation(QObject *)
MyQGraphicsItemAnimation(QObject * parent) : QGraphicsItemAnimation(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void beforeAnimationStep(qreal)
  virtual void beforeAnimationStep(qreal step)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"beforeAnimationStep", &handled, 1, (uint64_t)&step, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItemAnimation::beforeAnimationStep(step);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void afterAnimationStep(qreal)
  virtual void afterAnimationStep(qreal step)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"afterAnimationStep", &handled, 1, (uint64_t)&step, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItemAnimation::afterAnimationStep(step);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsItemAnimation_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsItemAnimation* qo = (MyQGraphicsItemAnimation*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:103
// [-2] void beforeAnimationStep(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation19beforeAnimationStepEd(void *this_, qreal step) {
  ((QGraphicsItemAnimation*)this_)->QGraphicsItemAnimation::beforeAnimationStep(step);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:104
// [-2] void afterAnimationStep(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation18afterAnimationStepEd(void *this_, qreal step) {
  ((QGraphicsItemAnimation*)this_)->QGraphicsItemAnimation::afterAnimationStep(step);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGraphicsItemAnimation10metaObjectEv(void *this_) {
  return (void*)((QGraphicsItemAnimation*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:60
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGraphicsItemAnimation11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsItemAnimation*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:60
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QGraphicsItemAnimation11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsItemAnimation*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:60
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGraphicsItemAnimation2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsItemAnimation::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:60
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGraphicsItemAnimation6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsItemAnimation::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:62
// [-2] void QGraphicsItemAnimation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGraphicsItemAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsItemAnimation*)(0);
  return  new MyQGraphicsItemAnimation(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:63
// [-2] void ~QGraphicsItemAnimation()
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimationD2Ev(void *this_) {
  delete (QGraphicsItemAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:65
// [8] QGraphicsItem * item()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGraphicsItemAnimation4itemEv(void *this_) {
  return (void*)((QGraphicsItemAnimation*)this_)->item();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:66
// [-2] void setItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation7setItemEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsItemAnimation*)this_)->setItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:68
// [8] QTimeLine * timeLine()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGraphicsItemAnimation8timeLineEv(void *this_) {
  return (void*)((QGraphicsItemAnimation*)this_)->timeLine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:69
// [-2] void setTimeLine(QTimeLine *)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation11setTimeLineEP9QTimeLine(void *this_, QTimeLine * timeLine) {
  ((QGraphicsItemAnimation*)this_)->setTimeLine(timeLine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:71
// [16] QPointF posAt(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGraphicsItemAnimation5posAtEd(void *this_, qreal step) {
  auto rv = ((QGraphicsItemAnimation*)this_)->posAt(step);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:72
// [-2] QList<QPair<qreal, QPointF> > posList()
extern "C" Q_DECL_EXPORT
QList<QPair<qreal, QPointF> >* C_ZNK22QGraphicsItemAnimation7posListEv(void *this_) {
  auto rv = ((QGraphicsItemAnimation*)this_)->posList();
return new QList<QPair<qreal, QPointF> >(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:73
// [-2] void setPosAt(qreal, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation8setPosAtEdRK7QPointF(void *this_, qreal step, QPointF* pos) {
  ((QGraphicsItemAnimation*)this_)->setPosAt(step, *pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:75
// [48] QMatrix matrixAt(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGraphicsItemAnimation8matrixAtEd(void *this_, qreal step) {
  auto rv = ((QGraphicsItemAnimation*)this_)->matrixAt(step);
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:77
// [8] qreal rotationAt(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QGraphicsItemAnimation10rotationAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->rotationAt(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:78
// [-2] QList<QPair<qreal, qreal> > rotationList()
extern "C" Q_DECL_EXPORT
QList<QPair<qreal, qreal> >* C_ZNK22QGraphicsItemAnimation12rotationListEv(void *this_) {
  auto rv = ((QGraphicsItemAnimation*)this_)->rotationList();
return new QList<QPair<qreal, qreal> >(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:79
// [-2] void setRotationAt(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation13setRotationAtEdd(void *this_, qreal step, qreal angle) {
  ((QGraphicsItemAnimation*)this_)->setRotationAt(step, angle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:81
// [8] qreal xTranslationAt(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QGraphicsItemAnimation14xTranslationAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->xTranslationAt(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:82
// [8] qreal yTranslationAt(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QGraphicsItemAnimation14yTranslationAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->yTranslationAt(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:83
// [-2] QList<QPair<qreal, QPointF> > translationList()
extern "C" Q_DECL_EXPORT
QList<QPair<qreal, QPointF> >* C_ZNK22QGraphicsItemAnimation15translationListEv(void *this_) {
  auto rv = ((QGraphicsItemAnimation*)this_)->translationList();
return new QList<QPair<qreal, QPointF> >(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:84
// [-2] void setTranslationAt(qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation16setTranslationAtEddd(void *this_, qreal step, qreal dx, qreal dy) {
  ((QGraphicsItemAnimation*)this_)->setTranslationAt(step, dx, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:86
// [8] qreal verticalScaleAt(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QGraphicsItemAnimation15verticalScaleAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->verticalScaleAt(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:87
// [8] qreal horizontalScaleAt(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QGraphicsItemAnimation17horizontalScaleAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->horizontalScaleAt(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:88
// [-2] QList<QPair<qreal, QPointF> > scaleList()
extern "C" Q_DECL_EXPORT
QList<QPair<qreal, QPointF> >* C_ZNK22QGraphicsItemAnimation9scaleListEv(void *this_) {
  auto rv = ((QGraphicsItemAnimation*)this_)->scaleList();
return new QList<QPair<qreal, QPointF> >(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:89
// [-2] void setScaleAt(qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation10setScaleAtEddd(void *this_, qreal step, qreal sx, qreal sy) {
  ((QGraphicsItemAnimation*)this_)->setScaleAt(step, sx, sy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:91
// [8] qreal verticalShearAt(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QGraphicsItemAnimation15verticalShearAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->verticalShearAt(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:92
// [8] qreal horizontalShearAt(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QGraphicsItemAnimation17horizontalShearAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->horizontalShearAt(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:93
// [-2] QList<QPair<qreal, QPointF> > shearList()
extern "C" Q_DECL_EXPORT
QList<QPair<qreal, QPointF> >* C_ZNK22QGraphicsItemAnimation9shearListEv(void *this_) {
  auto rv = ((QGraphicsItemAnimation*)this_)->shearList();
return new QList<QPair<qreal, QPointF> >(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:94
// [-2] void setShearAt(qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation10setShearAtEddd(void *this_, qreal step, qreal sh, qreal sv) {
  ((QGraphicsItemAnimation*)this_)->setShearAt(step, sh, sv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:96
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation5clearEv(void *this_) {
  ((QGraphicsItemAnimation*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:99
// [-2] void setStep(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation7setStepEd(void *this_, qreal x) {
  ((QGraphicsItemAnimation*)this_)->setStep(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:100
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsItemAnimation5resetEv(void *this_) {
  ((QGraphicsItemAnimation*)this_)->reset();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
