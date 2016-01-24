// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qscrollerproperties.h
// dst-file: /src/widgets/qscrollerproperties.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qscrollerproperties.h>


#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qscrollerproperties_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QScrollerProperties_Class_Size()
{
  return sizeof(QScrollerProperties);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollerproperties.h', line 52, column 5>
//   // proto:  void QScrollerProperties::QScrollerProperties(const QScrollerProperties & sp);
extern "C"
QScrollerProperties*
C_ZN19QScrollerPropertiesC2ERKS_(const QScrollerProperties* arg1) {
  auto ret = new QScrollerProperties(*((const QScrollerProperties*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollerproperties.h', line 59, column 17>
//   // proto: static void QScrollerProperties::setDefaultScrollerProperties(const QScrollerProperties & sp);
// _ZN19QScrollerProperties28setDefaultScrollerPropertiesERKS_ setDefaultScrollerProperties(const class QScrollerProperties &)
extern "C"
void
C_ZN19QScrollerProperties28setDefaultScrollerPropertiesERKS_(const QScrollerProperties* arg1) {
  QScrollerProperties::setDefaultScrollerProperties(*((const QScrollerProperties*)arg1));
}
//   // proto:  void QScrollerProperties::~QScrollerProperties();
extern "C"
void C_ZN19QScrollerPropertiesD2Ev(void *qthis) {
  delete (QScrollerProperties*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollerproperties.h', line 60, column 17>
//   // proto: static void QScrollerProperties::unsetDefaultScrollerProperties();
// _ZN19QScrollerProperties30unsetDefaultScrollerPropertiesEv unsetDefaultScrollerProperties()
extern "C"
void
C_ZN19QScrollerProperties30unsetDefaultScrollerPropertiesEv() {
  QScrollerProperties::unsetDefaultScrollerProperties();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollerproperties.h', line 51, column 5>
//   // proto:  void QScrollerProperties::QScrollerProperties();
extern "C"
QScrollerProperties*
C_ZN19QScrollerPropertiesC2Ev() {
  auto ret = new QScrollerProperties();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollerproperties.h', line 109, column 10>
//   // proto:  void QScrollerProperties::setScrollMetric(QScrollerProperties::ScrollMetric metric, const QVariant & value);
// _ZN19QScrollerProperties15setScrollMetricENS_12ScrollMetricERK8QVariant setScrollMetric(enum QScrollerProperties::ScrollMetric, const class QVariant &)
extern "C"
void
C_ZN19QScrollerProperties15setScrollMetricENS_12ScrollMetricERK8QVariant(void *qthis,
QScrollerProperties::ScrollMetric arg1,
const QVariant* arg2) {
  ((QScrollerProperties*)qthis)->setScrollMetric(arg1,
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollerproperties.h', line 108, column 14>
//   // proto:  QVariant QScrollerProperties::scrollMetric(QScrollerProperties::ScrollMetric metric);
// _ZNK19QScrollerProperties12scrollMetricENS_12ScrollMetricE scrollMetric(enum QScrollerProperties::ScrollMetric)
extern "C"
QVariant*
C_ZNK19QScrollerProperties12scrollMetricENS_12ScrollMetricE(void *qthis,
QScrollerProperties::ScrollMetric arg1) {
  auto ret =
  ((QScrollerProperties*)qthis)->scrollMetric(arg1);
  return new QVariant(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

