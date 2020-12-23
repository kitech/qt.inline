//  header block begin

// /usr/include/qt/QtCore/qobjectdefs.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobjectdefs.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaObject is pure virtual: false false
// QMetaObject has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmetaobject(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:341
// [8] const QMetaObject * superClass() const
// (12)qm4180358434 (31)_ZNK11QMetaObject10superClassEv
//static
/*void qm4180358434()*/ {
  ;
  (void) ((QMetaObject*)this_)->superClass();
   auto xptr = (const QMetaObject * (QMetaObject::*)() const ) &QMetaObject::superClass;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:414
// [1] bool invokeMethod(QObject *, const char *, QGenericReturnArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) 
// (12)qm3685245834 (112)_ZN11QMetaObject12invokeMethodEP7QObjectPKc22QGenericReturnArgument16QGenericArgumentS5_S5_S5_S5_S5_S5_S5_S5_S5_
//static
/*void qm3685245834(QObject * obj, const char * member, QGenericReturnArgument ret, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)*/ {
  QObject * obj = *(QObject **)this_; const char * member = *(const char **)this_; QGenericReturnArgument ret = *(QGenericReturnArgument*)this_; QGenericArgument val0 = *(QGenericArgument*)this_; QGenericArgument val1 = *(QGenericArgument*)this_; QGenericArgument val2 = *(QGenericArgument*)this_; QGenericArgument val3 = *(QGenericArgument*)this_; QGenericArgument val4 = *(QGenericArgument*)this_; QGenericArgument val5 = *(QGenericArgument*)this_; QGenericArgument val6 = *(QGenericArgument*)this_; QGenericArgument val7 = *(QGenericArgument*)this_; QGenericArgument val8 = *(QGenericArgument*)this_; QGenericArgument val9 = *(QGenericArgument*)this_;
  (void) QMetaObject::invokeMethod(obj, member, ret, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
   auto xptr = (bool (*)(QObject*, char const*, QGenericReturnArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) ) &QMetaObject::invokeMethod;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:431
// [1] bool invokeMethod(QObject *, const char *, Qt::ConnectionType, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) 
// (12)qm2299027512 (109)_ZN11QMetaObject12invokeMethodEP7QObjectPKcN2Qt14ConnectionTypeE16QGenericArgumentS6_S6_S6_S6_S6_S6_S6_S6_S6_
//static
/*void qm2299027512(QObject * obj, const char * member, Qt::ConnectionType type_, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)*/ {
  QObject * obj = *(QObject **)this_; const char * member = *(const char **)this_; Qt::ConnectionType type_ = *(Qt::ConnectionType*)this_; QGenericArgument val0 = *(QGenericArgument*)this_; QGenericArgument val1 = *(QGenericArgument*)this_; QGenericArgument val2 = *(QGenericArgument*)this_; QGenericArgument val3 = *(QGenericArgument*)this_; QGenericArgument val4 = *(QGenericArgument*)this_; QGenericArgument val5 = *(QGenericArgument*)this_; QGenericArgument val6 = *(QGenericArgument*)this_; QGenericArgument val7 = *(QGenericArgument*)this_; QGenericArgument val8 = *(QGenericArgument*)this_; QGenericArgument val9 = *(QGenericArgument*)this_;
  (void) QMetaObject::invokeMethod(obj, member, type_, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
   auto xptr = (bool (*)(QObject*, char const*, Qt::ConnectionType, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) ) &QMetaObject::invokeMethod;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:448
// [1] bool invokeMethod(QObject *, const char *, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) 
// (12)qm1576196759 (88)_ZN11QMetaObject12invokeMethodEP7QObjectPKc16QGenericArgumentS4_S4_S4_S4_S4_S4_S4_S4_S4_
//static
/*void qm1576196759(QObject * obj, const char * member, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)*/ {
  QObject * obj = *(QObject **)this_; const char * member = *(const char **)this_; QGenericArgument val0 = *(QGenericArgument*)this_; QGenericArgument val1 = *(QGenericArgument*)this_; QGenericArgument val2 = *(QGenericArgument*)this_; QGenericArgument val3 = *(QGenericArgument*)this_; QGenericArgument val4 = *(QGenericArgument*)this_; QGenericArgument val5 = *(QGenericArgument*)this_; QGenericArgument val6 = *(QGenericArgument*)this_; QGenericArgument val7 = *(QGenericArgument*)this_; QGenericArgument val8 = *(QGenericArgument*)this_; QGenericArgument val9 = *(QGenericArgument*)this_;
  (void) QMetaObject::invokeMethod(obj, member, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
   auto xptr = (bool (*)(QObject*, char const*, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) ) &QMetaObject::invokeMethod;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QMetaObjectD2Ev(void *this_)*/ {
  delete (QMetaObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmetaobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
