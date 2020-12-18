//  header block begin

// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaMethod is pure virtual: false false
// QMetaMethod has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMetaMethod_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMetaMethod_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMetaMethod_t qt_meta_stringdata_MyQMetaMethod = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQMetaMethod"
  },
  "MyQMetaMethod"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMetaMethod[] = {
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
class Q_DECL_EXPORT MyQMetaMethod : public QMetaMethod {
public:
  virtual ~MyQMetaMethod() {}
// void QMetaMethod()
MyQMetaMethod() : QMetaMethod() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmetamethod(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:57
// [-2] void QMetaMethod() 
// (12)qm1099024557 (20)_ZN11QMetaMethodC2Ev
/*void* qm1099024557()*/{
  ;
  this_ =  new QMetaMethod();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:78
// [8] const QMetaObject * enclosingMetaObject() const
// (12)qm2832786517 (40)_ZNK11QMetaMethod19enclosingMetaObjectEv
//static
/*void qm2832786517()*/ {
  ;
  (void) ((QMetaMethod*)this_)->enclosingMetaObject();
   auto xptr = (const QMetaObject * (QMetaMethod::*)() const ) &QMetaMethod::enclosingMetaObject;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:93
// [1] bool invoke(QObject *, QGenericReturnArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const
// (12)qm3427497017 (103)_ZNK11QMetaMethod6invokeEP7QObject22QGenericReturnArgument16QGenericArgumentS3_S3_S3_S3_S3_S3_S3_S3_S3_
//static
/*void qm3427497017(QObject * object, QGenericReturnArgument returnValue, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)*/ {
  QObject * object = *(QObject **)this_; QGenericReturnArgument returnValue = *(QGenericReturnArgument*)this_; QGenericArgument val0 = *(QGenericArgument*)this_; QGenericArgument val1 = *(QGenericArgument*)this_; QGenericArgument val2 = *(QGenericArgument*)this_; QGenericArgument val3 = *(QGenericArgument*)this_; QGenericArgument val4 = *(QGenericArgument*)this_; QGenericArgument val5 = *(QGenericArgument*)this_; QGenericArgument val6 = *(QGenericArgument*)this_; QGenericArgument val7 = *(QGenericArgument*)this_; QGenericArgument val8 = *(QGenericArgument*)this_; QGenericArgument val9 = *(QGenericArgument*)this_;
  (void) ((QMetaMethod*)this_)->invoke(object, returnValue, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
   auto xptr = (bool (QMetaMethod::*)(QObject*, QGenericReturnArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const ) &QMetaMethod::invoke;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:109
// [1] bool invoke(QObject *, Qt::ConnectionType, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const
// (12)qm3182408180 (100)_ZNK11QMetaMethod6invokeEP7QObjectN2Qt14ConnectionTypeE16QGenericArgumentS4_S4_S4_S4_S4_S4_S4_S4_S4_
//static
/*void qm3182408180(QObject * object, Qt::ConnectionType connectionType, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)*/ {
  QObject * object = *(QObject **)this_; Qt::ConnectionType connectionType = *(Qt::ConnectionType*)this_; QGenericArgument val0 = *(QGenericArgument*)this_; QGenericArgument val1 = *(QGenericArgument*)this_; QGenericArgument val2 = *(QGenericArgument*)this_; QGenericArgument val3 = *(QGenericArgument*)this_; QGenericArgument val4 = *(QGenericArgument*)this_; QGenericArgument val5 = *(QGenericArgument*)this_; QGenericArgument val6 = *(QGenericArgument*)this_; QGenericArgument val7 = *(QGenericArgument*)this_; QGenericArgument val8 = *(QGenericArgument*)this_; QGenericArgument val9 = *(QGenericArgument*)this_;
  (void) ((QMetaMethod*)this_)->invoke(object, connectionType, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
   auto xptr = (bool (QMetaMethod::*)(QObject*, Qt::ConnectionType, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const ) &QMetaMethod::invoke;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:125
// [1] bool invoke(QObject *, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const
// (12)qm2902428621 (79)_ZNK11QMetaMethod6invokeEP7QObject16QGenericArgumentS2_S2_S2_S2_S2_S2_S2_S2_S2_
//static
/*void qm2902428621(QObject * object, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)*/ {
  QObject * object = *(QObject **)this_; QGenericArgument val0 = *(QGenericArgument*)this_; QGenericArgument val1 = *(QGenericArgument*)this_; QGenericArgument val2 = *(QGenericArgument*)this_; QGenericArgument val3 = *(QGenericArgument*)this_; QGenericArgument val4 = *(QGenericArgument*)this_; QGenericArgument val5 = *(QGenericArgument*)this_; QGenericArgument val6 = *(QGenericArgument*)this_; QGenericArgument val7 = *(QGenericArgument*)this_; QGenericArgument val8 = *(QGenericArgument*)this_; QGenericArgument val9 = *(QGenericArgument*)this_;
  (void) ((QMetaMethod*)this_)->invoke(object, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
   auto xptr = (bool (QMetaMethod::*)(QObject*, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const ) &QMetaMethod::invoke;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:152
// [1] bool invokeOnGadget(void *, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const
// (11)qm950732216 (81)_ZNK11QMetaMethod14invokeOnGadgetEPv16QGenericArgumentS1_S1_S1_S1_S1_S1_S1_S1_S1_
//static
/*void qm950732216(void * gadget, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)*/ {
  void * gadget = *(void **)this_; QGenericArgument val0 = *(QGenericArgument*)this_; QGenericArgument val1 = *(QGenericArgument*)this_; QGenericArgument val2 = *(QGenericArgument*)this_; QGenericArgument val3 = *(QGenericArgument*)this_; QGenericArgument val4 = *(QGenericArgument*)this_; QGenericArgument val5 = *(QGenericArgument*)this_; QGenericArgument val6 = *(QGenericArgument*)this_; QGenericArgument val7 = *(QGenericArgument*)this_; QGenericArgument val8 = *(QGenericArgument*)this_; QGenericArgument val9 = *(QGenericArgument*)this_;
  (void) ((QMetaMethod*)this_)->invokeOnGadget(gadget, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
   auto xptr = (bool (QMetaMethod::*)(void*, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const ) &QMetaMethod::invokeOnGadget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:168
// [1] bool isValid() const
// (11)qm398886889 (27)_ZNK11QMetaMethod7isValidEv
//static
/*void qm398886889()*/ {
  ;
  (void) ((QMetaMethod*)this_)->isValid();
   auto xptr = (bool (QMetaMethod::*)() const ) &QMetaMethod::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QMetaMethodD2Ev(void *this_)*/ {
  delete (QMetaMethod*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmetamethod
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
