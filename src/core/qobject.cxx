//  header block begin

// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObject is pure virtual: false false
// QObject has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQObject_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQObject_t qt_meta_stringdata_MyQObject = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQObject"
  },
  "MyQObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQObject[] = {
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
class Q_DECL_EXPORT MyQObject : public QObject {
public:
  virtual ~MyQObject() {}
// void QObject(QObject *)
MyQObject(QObject * parent) : QObject(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::timerEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::childEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void customEvent(QEvent *)
  virtual void customEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"customEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::customEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void connectNotify(const QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"connectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::connectNotify(signal);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void disconnectNotify(const QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"disconnectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::disconnectNotify(signal);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qobject(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:129
// [8] QString tr(const char *, const char *, int) 
// (12)qm2158645774 (22)_ZN7QObject2trEPKcS1_i
//static
/*void qm2158645774(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QObject::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QObject::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:135
// [-2] void QObject(QObject *) 
// (12)qm1614511106 (17)_ZN7QObjectC2EPS_
/*void* qm1614511106(QObject * parent)*/{
  auto _nilp = (MyQObject*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QObject(parent);
  this_ =  new MyQObject(parent);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:153
// [1] bool isWidgetType() const
// (12)qm4140218935 (28)_ZNK7QObject12isWidgetTypeEv
//static
/*void qm4140218935()*/ {
  ;
  (void) ((QObject*)this_)->isWidgetType();
   auto xptr = (bool (QObject::*)() const ) &QObject::isWidgetType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:154
// [1] bool isWindowType() const
// (12)qm2017529966 (28)_ZNK7QObject12isWindowTypeEv
//static
/*void qm2017529966()*/ {
  ;
  (void) ((QObject*)this_)->isWindowType();
   auto xptr = (bool (QObject::*)() const ) &QObject::isWindowType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:156
// [1] bool signalsBlocked() const
// (12)qm2511842610 (30)_ZNK7QObject14signalsBlockedEv
//static
/*void qm2511842610()*/ {
  ;
  (void) ((QObject*)this_)->signalsBlocked();
   auto xptr = (bool (QObject::*)() const ) &QObject::signalsBlocked;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:165
// [4] int startTimer(std::chrono::milliseconds, Qt::TimerType) 
// (12)qm1878385254 (83)_ZN7QObject10startTimerENSt6chrono8durationIlSt5ratioILl1ELl1000EEEEN2Qt9TimerTypeE
//static
/*void qm1878385254(std::chrono::duration<long, std::ratio<1, 1000>> time, Qt::TimerType timerType)*/ {
  std::chrono::duration<long, std::ratio<1, 1000>> time = *(std::chrono::duration<long, std::ratio<1, 1000>>*)this_; Qt::TimerType timerType = *(Qt::TimerType*)this_;
  (void) ((QObject*)this_)->startTimer(time, timerType);
   auto xptr = (int (QObject::*)(std::chrono::duration<long, std::ratio<1l, 1000l> >, Qt::TimerType) ) &QObject::startTimer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:216
// [8] const QObjectList & children() const
// (12)qm3931320348 (23)_ZNK7QObject8childrenEv
//static
/*void qm3931320348()*/ {
  ;
  (void) ((QObject*)this_)->children();
   auto xptr = (const QList<QObject *> & (QObject::*)() const ) &QObject::children;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:229
// [8] QMetaObject::Connection connect(const QObject *, const char *, const char *, Qt::ConnectionType) const
// (12)qm2250828179 (52)_ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE
//static
/*void qm2250828179(const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type_)*/ {
  const QObject * sender = *(const QObject **)this_; const char * signal = *(const char **)this_; const char * member = *(const char **)this_; Qt::ConnectionType type_ = *(Qt::ConnectionType*)this_;
  (void) ((QObject*)this_)->connect(sender, signal, member, type_);
   auto xptr = (QMetaObject::Connection (QObject::*)(QObject const*, char const*, char const*, Qt::ConnectionType) const ) &QObject::connect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:355
// [1] bool disconnect(const char *, const QObject *, const char *) const
// (11)qm421360015 (35)_ZNK7QObject10disconnectEPKcPKS_S1_
//static
/*void qm421360015(const char * signal, const QObject * receiver, const char * member)*/ {
  const char * signal = *(const char **)this_; const QObject * receiver = *(const QObject **)this_; const char * member = *(const char **)this_;
  (void) ((QObject*)this_)->disconnect(signal, receiver, member);
   auto xptr = (bool (QObject::*)(char const*, QObject const*, char const*) const ) &QObject::disconnect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:358
// [1] bool disconnect(const QObject *, const char *) const
// (12)qm3673356135 (32)_ZNK7QObject10disconnectEPKS_PKc
//static
/*void qm3673356135(const QObject * receiver, const char * member)*/ {
  const QObject * receiver = *(const QObject **)this_; const char * member = *(const char **)this_;
  (void) ((QObject*)this_)->disconnect(receiver, member);
   auto xptr = (bool (QObject::*)(QObject const*, char const*) const ) &QObject::disconnect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:425
// [8] QObject * parent() const
// (12)qm3886242936 (21)_ZNK7QObject6parentEv
//static
/*void qm3886242936()*/ {
  ;
  (void) ((QObject*)this_)->parent();
   auto xptr = (QObject * (QObject::*)() const ) &QObject::parent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:427
// [1] bool inherits(const char *) const
// (12)qm3029697777 (25)_ZNK7QObject8inheritsEPKc
//static
/*void qm3029697777(const char * classname)*/ {
  const char * classname = *(const char **)this_;
  (void) ((QObject*)this_)->inherits(classname);
   auto xptr = (bool (QObject::*)(char const*) const ) &QObject::inherits;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QObjectD2Ev(void *this_)*/ {
  delete (QObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
