// /usr/include/qt/QtWidgets/qscrollerproperties.h
#include <qscrollerproperties.h>
#include <QtWidgets>

// /usr/include/qt/QtWidgets/qscrollerproperties.h:57
// void QScrollerProperties()
extern "C"
void* C_ZN19QScrollerPropertiesC1Ev() {
  return new QScrollerProperties();
}
// virtual
// /usr/include/qt/QtWidgets/qscrollerproperties.h:60
// void ~QScrollerProperties()
extern "C"
void C_ZN19QScrollerPropertiesD1Ev(void *this_) {
  delete (QScrollerProperties*)(this_);
}
// static
// /usr/include/qt/QtWidgets/qscrollerproperties.h:65
// void setDefaultScrollerProperties(const class QScrollerProperties &)
extern "C"
void C_ZN19QScrollerProperties28setDefaultScrollerPropertiesERKS_(const QScrollerProperties & sp) {
  QScrollerProperties::setDefaultScrollerProperties(sp);
}
// static
// /usr/include/qt/QtWidgets/qscrollerproperties.h:66
// void unsetDefaultScrollerProperties()
extern "C"
void C_ZN19QScrollerProperties30unsetDefaultScrollerPropertiesEv() {
  QScrollerProperties::unsetDefaultScrollerProperties();
}
// /usr/include/qt/QtWidgets/qscrollerproperties.h:114
// QVariant scrollMetric(enum QScrollerProperties::ScrollMetric)
extern "C"
void C_ZNK19QScrollerProperties12scrollMetricENS_12ScrollMetricE(void *this_, QScrollerProperties::ScrollMetric metric) {
  /*return*/ ((QScrollerProperties*)this_)->scrollMetric(metric);
}
// /usr/include/qt/QtWidgets/qscrollerproperties.h:115
// void setScrollMetric(enum QScrollerProperties::ScrollMetric, const class QVariant &)
extern "C"
void C_ZN19QScrollerProperties15setScrollMetricENS_12ScrollMetricERK8QVariant(void *this_, QScrollerProperties::ScrollMetric metric, const QVariant & value) {
  ((QScrollerProperties*)this_)->setScrollMetric(metric, value);
}