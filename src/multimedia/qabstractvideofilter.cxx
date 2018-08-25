//  header block begin
// since 0x050500
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideofilter.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractVideoFilter is pure virtual: true
// QAbstractVideoFilter has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractVideoFilter : public QAbstractVideoFilter {
public:
  virtual ~MyQAbstractVideoFilter() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QVideoFilterRunnable * createFilterRunnable()
  virtual QVideoFilterRunnable * createFilterRunnable()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createFilterRunnable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QVideoFilterRunnable *)(irv);
      // Pointer Pointer QVideoFilterRunnable *
    } else {
    return (QVideoFilterRunnable *){};
  }
  }

// void QAbstractVideoFilter(QObject *)
MyQAbstractVideoFilter(QObject * parent) : QAbstractVideoFilter(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:77
// [8] QVideoFilterRunnable * createFilterRunnable()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:67
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractVideoFilter10metaObjectEv(void *this_) {
  return (void*)((QAbstractVideoFilter*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:67
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractVideoFilter11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractVideoFilter*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:67
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QAbstractVideoFilter11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractVideoFilter*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:67
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractVideoFilter2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractVideoFilter::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:67
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractVideoFilter6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractVideoFilter::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:71
// [-2] void QAbstractVideoFilter(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractVideoFilterC2EP7QObject(QObject * parent) {
  return  new MyQAbstractVideoFilter(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:72
// [-2] void ~QAbstractVideoFilter()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractVideoFilterD2Ev(void *this_) {
  delete (QAbstractVideoFilter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:74
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QAbstractVideoFilter8isActiveEv(void *this_) {
  return (bool)((QAbstractVideoFilter*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:75
// [-2] void setActive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractVideoFilter9setActiveEb(void *this_, bool v) {
  ((QAbstractVideoFilter*)this_)->setActive(v);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:77
// [8] QVideoFilterRunnable * createFilterRunnable()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractVideoFilter20createFilterRunnableEv(void *this_) {
  return (void*)((QAbstractVideoFilter*)this_)->createFilterRunnable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:80
// [-2] void activeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractVideoFilter13activeChangedEv(void *this_) {
  ((QAbstractVideoFilter*)this_)->activeChanged();
}

//  main block end
