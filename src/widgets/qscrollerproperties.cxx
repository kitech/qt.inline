//  header block begin
// /usr/include/qt/QtWidgets/qscrollerproperties.h
#include <qscrollerproperties.h>
#include <QtWidgets>

// QScrollerProperties is pure virtual: false
//  header block end

//  main block begin

class MyQScrollerProperties : public QScrollerProperties {
public:
MyQScrollerProperties() : QScrollerProperties() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:60
// [-2] void QScrollerProperties()
extern "C"
void* C_ZN19QScrollerPropertiesC1Ev() {
  (MyQScrollerProperties*)(0);
  return  new MyQScrollerProperties();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:63
// [-2] void ~QScrollerProperties()
extern "C"
void C_ZN19QScrollerPropertiesD1Ev(void *this_) {
  delete (QScrollerProperties*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:68
// [-2] void setDefaultScrollerProperties(const class QScrollerProperties &)
extern "C"
void C_ZN19QScrollerProperties28setDefaultScrollerPropertiesERKS_(const QScrollerProperties & sp) {
  QScrollerProperties::setDefaultScrollerProperties(sp);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:69
// [-2] void unsetDefaultScrollerProperties()
extern "C"
void C_ZN19QScrollerProperties30unsetDefaultScrollerPropertiesEv() {
  QScrollerProperties::unsetDefaultScrollerProperties();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:117
// [16] QVariant scrollMetric(enum QScrollerProperties::ScrollMetric)
extern "C"
void* C_ZNK19QScrollerProperties12scrollMetricENS_12ScrollMetricE(void *this_, QScrollerProperties::ScrollMetric metric) {
  auto rv = ((QScrollerProperties*)this_)->scrollMetric(metric);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:118
// [-2] void setScrollMetric(enum QScrollerProperties::ScrollMetric, const class QVariant &)
extern "C"
void C_ZN19QScrollerProperties15setScrollMetricENS_12ScrollMetricERK8QVariant(void *this_, QScrollerProperties::ScrollMetric metric, const QVariant & value) {
  ((QScrollerProperties*)this_)->setScrollMetric(metric, value);
}
//  main block end
