//  header block begin
// since 0x050500
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h
#ifndef protected
#define protected public
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
// void QAbstractVideoFilter(QObject *)
MyQAbstractVideoFilter(QObject * parent) : QAbstractVideoFilter(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:67
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractVideoFilter10metaObjectEv(void *this_) {
  return (void*)((QAbstractVideoFilter*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:71
// [-2] void QAbstractVideoFilter(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractVideoFilterC2EP7QObject(QObject * parent) {
  return 0; // new QAbstractVideoFilter(parent);
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
