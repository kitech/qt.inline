//  header block begin
// /usr/include/qt/QtWidgets/qscrollerproperties.h
#ifndef protected
#define protected public
#endif
#include <qscrollerproperties.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QScrollerProperties is pure virtual: false
// QScrollerProperties has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQScrollerProperties : public QScrollerProperties {
public:
  virtual ~MyQScrollerProperties() {}
// void QScrollerProperties()
MyQScrollerProperties() : QScrollerProperties() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:60
// [-2] void QScrollerProperties()
extern "C" Q_DECL_EXPORT
void* C_ZN19QScrollerPropertiesC2Ev() {
  return  new QScrollerProperties();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:62
// [16] QScrollerProperties & operator=(const class QScrollerProperties &)
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
// [1] bool operator==(const class QScrollerProperties &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QScrollerPropertieseqERKS_(void *this_, QScrollerProperties* sp) {
  return (bool)((QScrollerProperties*)this_)->operator==(*sp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:66
// [1] bool operator!=(const class QScrollerProperties &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QScrollerPropertiesneERKS_(void *this_, QScrollerProperties* sp) {
  return (bool)((QScrollerProperties*)this_)->operator!=(*sp);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:68
// [-2] void setDefaultScrollerProperties(const class QScrollerProperties &)
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
// [16] QVariant scrollMetric(enum QScrollerProperties::ScrollMetric)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QScrollerProperties12scrollMetricENS_12ScrollMetricE(void *this_, QScrollerProperties::ScrollMetric metric) {
  auto rv = ((QScrollerProperties*)this_)->scrollMetric(metric);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:118
// [-2] void setScrollMetric(enum QScrollerProperties::ScrollMetric, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN19QScrollerProperties15setScrollMetricENS_12ScrollMetricERK8QVariant(void *this_, QScrollerProperties::ScrollMetric metric, QVariant* value) {
  ((QScrollerProperties*)this_)->setScrollMetric(metric, *value);
}

//  main block end
