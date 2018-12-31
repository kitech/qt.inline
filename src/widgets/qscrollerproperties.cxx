//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(scroller)
// since 0x040800
// /usr/include/qt/QtWidgets/qscrollerproperties.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscrollerproperties.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QScrollerProperties is pure virtual: false
// QScrollerProperties has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQScrollerProperties_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScrollerProperties_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScrollerProperties_t qt_meta_stringdata_MyQScrollerProperties = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQScrollerProperties"
  },
  "MyQScrollerProperties"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScrollerProperties[] = {
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
class Q_DECL_EXPORT MyQScrollerProperties : public QScrollerProperties {
public:
  virtual ~MyQScrollerProperties() {}
// void QScrollerProperties()
MyQScrollerProperties() : QScrollerProperties() {}
// void QScrollerProperties(const QScrollerProperties &)
MyQScrollerProperties(const QScrollerProperties & sp) : QScrollerProperties(sp) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:60
// [-2] void QScrollerProperties()
extern "C" Q_DECL_EXPORT
void* C_ZN19QScrollerPropertiesC2Ev() {
  return  new QScrollerProperties();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:61
// [-2] void QScrollerProperties(const QScrollerProperties &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QScrollerPropertiesC2ERKS_(QScrollerProperties* sp) {
  return  new QScrollerProperties(*sp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:62
// [16] QScrollerProperties & operator=(const QScrollerProperties &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QScrollerPropertiesaSERKS_(void *this_, QScrollerProperties* sp) {
  auto& rv = ((QScrollerProperties*)this_)->operator=(*sp);
return &rv;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:63
// [-2] void ~QScrollerProperties()
extern "C" Q_DECL_EXPORT
void C_ZN19QScrollerPropertiesD2Ev(void *this_) {
  delete (QScrollerProperties*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:65
// [1] bool operator==(const QScrollerProperties &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QScrollerPropertieseqERKS_(void *this_, QScrollerProperties* sp) {
  return (bool)((QScrollerProperties*)this_)->operator==(*sp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:66
// [1] bool operator!=(const QScrollerProperties &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QScrollerPropertiesneERKS_(void *this_, QScrollerProperties* sp) {
  return (bool)((QScrollerProperties*)this_)->operator!=(*sp);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:68
// [-2] void setDefaultScrollerProperties(const QScrollerProperties &)
extern "C" Q_DECL_EXPORT
void C_ZN19QScrollerProperties28setDefaultScrollerPropertiesERKS_(QScrollerProperties* sp) {
  QScrollerProperties::setDefaultScrollerProperties(*sp);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:69
// [-2] void unsetDefaultScrollerProperties()
extern "C" Q_DECL_EXPORT
void C_ZN19QScrollerProperties30unsetDefaultScrollerPropertiesEv() {
  QScrollerProperties::unsetDefaultScrollerProperties();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:117
// [16] QVariant scrollMetric(QScrollerProperties::ScrollMetric)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QScrollerProperties12scrollMetricENS_12ScrollMetricE(void *this_, QScrollerProperties::ScrollMetric metric) {
  auto rv = ((QScrollerProperties*)this_)->scrollMetric(metric);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:118
// [-2] void setScrollMetric(QScrollerProperties::ScrollMetric, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN19QScrollerProperties15setScrollMetricENS_12ScrollMetricERK8QVariant(void *this_, QScrollerProperties::ScrollMetric metric, QVariant* value) {
  ((QScrollerProperties*)this_)->setScrollMetric(metric, *value);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(scroller)
#endif // #ifndef QT_MINIMAL
//  footer block end
