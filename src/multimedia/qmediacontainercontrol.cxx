//  header block begin
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediacontainercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaContainerControl is pure virtual: true
// QMediaContainerControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaContainerControl : public QMediaContainerControl {
public:
  virtual ~MyQMediaContainerControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList supportedContainers()
  virtual QStringList supportedContainers() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedContainers", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString containerFormat()
  virtual QString containerFormat() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"containerFormat", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setContainerFormat(const QString &)
  virtual void setContainerFormat(const QString & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setContainerFormat", &handled, 1, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaContainerControl::setContainerFormat(format);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString containerDescription(const QString &)
  virtual QString containerDescription(const QString & formatMimeType) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"containerDescription", &handled, 1, (uint64_t)&formatMimeType, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:58
// [8] QStringList supportedContainers()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:59
// [8] QString containerFormat()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:60
// [-2] void setContainerFormat(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:62
// [8] QString containerDescription(const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMediaContainerControl10metaObjectEv(void *this_) {
  return (void*)((QMediaContainerControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMediaContainerControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaContainerControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QMediaContainerControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaContainerControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMediaContainerControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaContainerControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMediaContainerControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaContainerControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:56
// [-2] void ~QMediaContainerControl()
extern "C" Q_DECL_EXPORT
void C_ZN22QMediaContainerControlD2Ev(void *this_) {
  delete (QMediaContainerControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:58
// [8] QStringList supportedContainers()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMediaContainerControl19supportedContainersEv(void *this_) {
  auto rv = ((QMediaContainerControl*)this_)->supportedContainers();
return new QStringList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:59
// [8] QString containerFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMediaContainerControl15containerFormatEv(void *this_) {
  auto rv = ((QMediaContainerControl*)this_)->containerFormat();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:60
// [-2] void setContainerFormat(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN22QMediaContainerControl18setContainerFormatERK7QString(void *this_, QString* format) {
  ((QMediaContainerControl*)this_)->setContainerFormat(*format);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:62
// [8] QString containerDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMediaContainerControl20containerDescriptionERK7QString(void *this_, QString* formatMimeType) {
  auto rv = ((QMediaContainerControl*)this_)->containerDescription(*formatMimeType);
return new QString(rv);
}

//  main block end
